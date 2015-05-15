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
      '#description' => st('Select additional languages to enable and download contributed interface translations.'),
      '#options' => array('PT' => st('Portuguese'), 'ES' => st('Spanish'), 'FR' => st('French'), 'DE' => st('German')),
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
    variable_set('empowered_selected_translations', $values['translations']);
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
  // Add batch process installing selected additional languages.
  $tasks['empowered_import_translations'] = array(
    'display_name' => st('Import translations'),
    'type' => 'batch',
  );

  return $tasks;
}

/**
 * Installation task callback: creates batch process to enable additional
 * languages and download relevant interface translations.
 */
function empowered_import_translations() {
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  module_load_include('check.inc', 'l10n_update');
  module_load_include('batch.inc', 'l10n_update');

  if ($translations = variable_get('empowered_selected_translations', array())) {
    // No need to keep this variable anymore.
    variable_del('empowered_selected_translations');

    // Prepare batch process to enable languages and download translations.
    $operations = array();
    foreach ($translations as $translation) {
      locale_add_language(strtolower($translation));

      // Build batch with l10n_update module.
      $history = l10n_update_get_history();
      $available = l10n_update_available_releases();
      $updates = l10n_update_build_updates($history, $available);

      $operations = array_merge($operations, _l10n_update_prepare_updates($updates, NULL, array()));
    }

    $batch = l10n_update_batch_multiple($operations, LOCALE_IMPORT_KEEP);
    return $batch;
  }
}
