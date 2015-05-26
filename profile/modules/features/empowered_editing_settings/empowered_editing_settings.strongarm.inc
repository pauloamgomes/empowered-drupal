<?php
/**
 * @file
 * empowered_editing_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function empowered_editing_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_disable_default_view';
  $strongarm->value = 0;
  $export['media_browser_plus_disable_default_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_filesystem_folders';
  $strongarm->value = 1;
  $export['media_browser_plus_filesystem_folders'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_root_folder_tid';
  $strongarm->value = '1';
  $export['media_browser_plus_root_folder_tid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_thumbnails_as_default_browser';
  $strongarm->value = 1;
  $export['media_browser_plus_thumbnails_as_default_browser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_thumbnails_as_default_browser_current';
  $strongarm->value = 1;
  $export['media_browser_plus_thumbnails_as_default_browser_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_dialogclass';
  $strongarm->value = 'media-wrapper';
  $export['media_dialogclass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_draggable';
  $strongarm->value = '0';
  $export['media_draggable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_height';
  $strongarm->value = '280';
  $export['media_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_icon_base_directory';
  $strongarm->value = 'public://media-icons';
  $export['media_icon_base_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_minwidth';
  $strongarm->value = '500';
  $export['media_minwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_modal';
  $strongarm->value = '1';
  $export['media_modal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_opacity';
  $strongarm->value = '0.4';
  $export['media_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_position';
  $strongarm->value = 'center';
  $export['media_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_resizable';
  $strongarm->value = '0';
  $export['media_resizable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_root_folder';
  $strongarm->value = 'media';
  $export['media_root_folder'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_width';
  $strongarm->value = '670';
  $export['media_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'document',
  );
  $export['media_wysiwyg_wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_browser_plugins';
  $strongarm->value = array(
    0 => 'upload',
    1 => 'media_browser_plus--media_browser_thumbnails',
    2 => 'media_browser_plus--media_browser_my_files',
  );
  $export['media_wysiwyg_wysiwyg_browser_plugins'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_upload_directory';
  $strongarm->value = '';
  $export['media_wysiwyg_wysiwyg_upload_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_edit_disabled'] = $strongarm;

  return $export;
}
