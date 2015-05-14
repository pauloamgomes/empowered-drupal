<?php
/**
 * @file
 * empowered_editing_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function empowered_editing_settings_filter_default_formats() {
  $formats = array();

  // Exported format: Rich Text.
  $formats['rich_text'] = array(
    'format' => 'rich_text',
    'name' => 'Rich Text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
