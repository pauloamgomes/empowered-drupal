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
  $tasks = array(
    'empowered_configure' => array(
      'display_name' => 'Empowered final configurations'
    ),
  );
  return $tasks;
}

/**
 * Set up additional base configurations
 */
function empowered_configure() {
  // Set cache and css/js stuff
  variable_set('cache', 1);
  variable_set('block_cache', 1);
  variable_set('cache_lifetime', '0');
  variable_set('page_cache_maximum_age', '900');
  variable_set('page_compression', 0);
  variable_set('preprocess_css', 1);
  variable_set('preprocess_js', 1);
  cache_clear_all();

  drupal_set_message(t('Empowered defaults configured.'));
}
