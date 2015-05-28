<?php

/**
 * @file
 * Enables modules and site configuration for a Empowered site installation.
 * @author Paulo Gomes <pauloamgomes@gmai.com>
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    // If called from command line do not change anything
    if (drupal_is_cli()) {
      return;
    }

    // Clear all non-error messages that might be set by enabled modules
    drupal_get_messages('status', TRUE);
    drupal_get_messages('completed', TRUE);

    $form['site_information']['site_name']['#default_value'] = 'Empowered website';
    // Set a default country so we can benefit from it on Address Fields.
    $form['server_settings']['site_default_country']['#default_value'] = 'PT';

    // Use "admin" as the default username.
    $form['admin_account']['#description'] = st('Credentials are <em>admin:admin</em>, they shall be changed when installation finishes.');
    $form['admin_account']['account']['name']['#default_value'] = 'admin';
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
    $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];

    // Set the default admin password.
    $form['admin_account']['account']['pass']['#value'] = 'admin';

    // Make the password "hidden".
    $form['admin_account']['account']['name']['#type'] = 'hidden';
    $form['admin_account']['account']['pass']['#type'] = 'hidden';

    // Change timezone to default from server
    $form['server_settings']['date_default_timezone']['#default_value'] = date_default_timezone_get();
    unset($form['server_settings']['date_default_timezone']['#attributes']);

        // Hide Server Settings.
    $form['server_settings']['#access'] = FALSE;

    // Hide Update Notifications.
    $form['update_notifications']['#access'] = FALSE;

    // Empowered features
    $form['empowered'] = array(
      '#type' => 'fieldset',
      '#title' => t('Empowered Features'),
      '#weight' => -5,
      '#collapsible' => FALSE,
      '#tree' => FALSE,
    );

    // Checkbox to enable Lightning options.
    $form['empowered']['features'] = array(
      '#type' => 'checkboxes',
      '#title' => 'Enable Features',
      '#description' => 'Optionally install extra features',
      '#options' => array('empowered_security' => 'Security Features', 'empowered_dev_tools' => 'Developer Tools'),
      '#weight' => 0,
    );

    // Provides predefined country list.
    $form['empowered']['translations'] = array(
      '#type' => 'checkboxes',
      '#title' => st('Additional languages'),
      '#description' => st('Select additional languages to enable.'),
      '#options' => array('PT-PT' => st('Portuguese'), 'ES' => st('Spanish')),
      '#multiple' => TRUE,
      '#size' => 10,
    );


    // Additional submit handlers for Lightning settings.
    $form['#submit'][] = 'empowered_extra_features_enable_submit';
  }
}

/**
 * Enable extra empowered features.
 */
function empowered_extra_features_enable_submit($form_id, &$form_state) {
  $values = $form_state['values'];
  if (isset($values['features'])) {
    foreach ($values['features'] as $module) {
      module_enable(array($module), TRUE);
    }
  }
  if (isset($values['translations'])) {
    $translations = array_filter($values['translations']);
    if (!empty($translations)) {
      variable_set('empowered_translations', $translations);
      // Enable the i18n dependencies
      module_enable(array('empowered_i18n'), TRUE);
    }
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'empowered';
    }

    $form['profile']['Empowered']['#title'] = '<img src="profiles/empowered/empowered.png">';
  }
}

/**
 * Implements hook_install_tasks().
 */
function empowered_install_tasks() {
  $tasks = array();

  $tasks['empowered_set_translations'] = array(
    'display_name' => st('Install additional languages'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  // Add final configurations step.
  $tasks['empowered_create_taxonomy'] = array(
    'display_name' => st('Empowered Taxonomy'),
    'display' => FALSE,
    'type' => 'batch',
  );

  // Add final configurations step.
  $tasks['empowered_final_configurations'] = array(
    'display_name' => st('Empowered Configurations'),
    'display' => FALSE,
    'type' => 'batch',
  );

  return $tasks;
}

function empowered_set_translations() {
  // Clear all non-error messages that might be set by enabled modules
  drupal_get_messages('status', TRUE);
  drupal_get_messages('completed', TRUE);

  if ($translations = variable_get('empowered_translations', array())) {
    $translations = array_filter($translations);
    variable_del('empowered_translations');
    include_once DRUPAL_ROOT . '/includes/locale.inc';
    include_once DRUPAL_ROOT . '/includes/iso.inc';
    $batchs = array();
    $predefined = _locale_get_predefined_list();
    foreach ($translations as $translation) {
      $install_locale = strtolower($translation);
      watchdog('empowered', 'translation code: @code', array('@code' => $install_locale));
      if (!isset($predefined[$install_locale])) {
        // Drupal does not know about this language, so we prefill its values with
        // our best guess. The user will be able to edit afterwards.
        locale_add_language($install_locale, $install_locale, $install_locale, LANGUAGE_LTR, '', '', TRUE, FALSE);
      }
      else {
        // A known predefined language, details will be filled in properly.
        locale_add_language($install_locale, NULL, NULL, NULL, '', '', TRUE, FALSE);
      }

      // Collect files to import for this language.
      $batchs[] = locale_batch_by_language($install_locale, NULL);
    }
    if (!empty($batchs)) {
      $batch = drupal_array_merge_deep_array($batchs);
      // Remember components we cover in this batch set.
      variable_set('empowered_install_import_locales', $batch['#components']);
      return $batch;
    }
  }
}

/**
 * Final tasks for installation process
 */
function empowered_final_configurations() {
  drupal_flush_all_caches();
  // Remember the profile which was used.
  variable_set('install_profile', drupal_get_profile());
    // Installation profiles are always loaded last
  db_update('system')
    ->fields(array('weight' => 1000))
    ->condition('type', 'module')
    ->condition('name', drupal_get_profile())
    ->execute();

  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);
  features_revert();
}

/**
 * Task for creating taxonomies
 */
function empowered_create_taxonomy() {
  $operations[] = array('_empowered_create_vocabulary_tags', array());

  $folders = array(
    st('Pictures'),
    st('Videos'),
    st('Audio'),
    st('Documents'),
  );

  foreach($folders as $folder) {
    $operations[] = array('_empowered_create_media_folder_term', array($folder));
  }

  $batch = array(
    'title' => st('Creating empowered taxonomies'),
    'operations' => $operations,
  );

  return $batch;
}

/**
 * Create a default vocabulary named "Tags".
 */
function _empowered_create_vocabulary_tags(&$context) {
  $vocabulary = (object) array(
    'name' => st('Tags'),
    'description' => st('Use tags to group articles on similar topics into categories.'),
    'machine_name' => 'tags',
    'help' => st('Enter a comma-separated list of words to describe your content.'),
  );
  taxonomy_vocabulary_save($vocabulary);
}

/**
 * Create terms on media folders taxonomy (media folders)
 */
function _empowered_create_media_folder_term($folder, &$context) {
  if ($vocabulary = taxonomy_vocabulary_machine_name_load('media_folders')) {
    $term = (object) array(
      'name' => $folder,
      'vid' => $vocabulary->vid,
    );
    taxonomy_term_save($term);
  }
}
