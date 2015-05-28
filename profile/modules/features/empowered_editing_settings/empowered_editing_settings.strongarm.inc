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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_array';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_array'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_content-type';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_content-type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_current-date';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_current-date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_current-page';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_current-page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_current-user';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_current-user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_date';
  $strongarm->value = 1;
  $export['token_insert_global_all_tokens_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_date-field-value';
  $strongarm->value = 1;
  $export['token_insert_global_all_tokens_date-field-value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_file';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_file-type';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_file-type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<date>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<date>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<file>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<file>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<node>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<node>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<rules_config>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<rules_config>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<term>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<term>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<user>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<user>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_list<vocabulary>';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_list<vocabulary>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_menu';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_menu-link';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_menu-link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_node';
  $strongarm->value = 1;
  $export['token_insert_global_all_tokens_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_random';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_random'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_config';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_date';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_decimal';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_decimal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_duration';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_integer';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_integer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_text';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_token';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_rules_uri';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_rules_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_session_limit';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_session_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_site';
  $strongarm->value = 1;
  $export['token_insert_global_all_tokens_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_term';
  $strongarm->value = 1;
  $export['token_insert_global_all_tokens_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_url';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_user';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_variable';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_view';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_all_tokens_vocabulary';
  $strongarm->value = 0;
  $export['token_insert_global_all_tokens_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_array';
  $strongarm->value = array(
    '[array:count]' => 0,
    '[array:first]' => 0,
    '[array:join]' => 0,
    '[array:join-path]' => 0,
    '[array:keys]' => 0,
    '[array:last]' => 0,
    '[array:reversed]' => 0,
    '[array:value]' => 0,
  );
  $export['token_insert_global_used_tokens_array'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_content-type';
  $strongarm->value = array(
    '[content-type:description]' => 0,
    '[content-type:i18n-description]' => 0,
    '[content-type:edit-url]' => 0,
    '[content-type:machine-name]' => 0,
    '[content-type:name]' => 0,
    '[content-type:i18n-name]' => 0,
    '[content-type:node-count]' => 0,
  );
  $export['token_insert_global_used_tokens_content-type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_current-date';
  $strongarm->value = array(
    '[current-date:custom]' => 0,
    '[current-date:long]' => 0,
    '[current-date:medium]' => 0,
    '[current-date:raw]' => 0,
    '[current-date:short]' => 0,
    '[current-date:since]' => 0,
  );
  $export['token_insert_global_used_tokens_current-date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_current-page';
  $strongarm->value = array(
    '[current-page:title]' => '[current-page:title]',
    '[current-page:url]' => '[current-page:url]',
    '[current-page:page-number]' => 0,
    '[current-page:query]' => 0,
  );
  $export['token_insert_global_used_tokens_current-page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_current-user';
  $strongarm->value = array(
    '[current-user:cancel-url]' => 0,
    '[current-user:created]' => 0,
    '[current-user:theme]' => 0,
    '[current-user:edit-url]' => 0,
    '[current-user:mail]' => 0,
    '[current-user:feed-nid]' => 0,
    '[current-user:ip-address]' => 0,
    '[current-user:last-access]' => 0,
    '[current-user:last-login]' => 0,
    '[current-user:name]' => 0,
    '[current-user:one-time-login-url]' => 0,
    '[current-user:original]' => 0,
    '[current-user:roles]' => 0,
    '[current-user:status]' => 0,
    '[current-user:url]' => 0,
    '[current-user:uid]' => 0,
    '[current-user:uuid]' => 0,
  );
  $export['token_insert_global_used_tokens_current-user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_date';
  $strongarm->value = array(
    '[date:custom]' => 0,
    '[date:long]' => 0,
    '[date:medium]' => 0,
    '[date:raw]' => 0,
    '[date:short]' => 0,
    '[date:since]' => 0,
  );
  $export['token_insert_global_used_tokens_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_date-field-value';
  $strongarm->value = array(
    '[date-field-value:date]' => 0,
    '[date-field-value:to-date]' => 0,
  );
  $export['token_insert_global_used_tokens_date-field-value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_file';
  $strongarm->value = array(
    '[file:basename]' => '[file:basename]',
    '[file:download-url]' => '[file:download-url]',
    '[file:size]' => '[file:size]',
    '[file:type]' => '[file:type]',
    '[file:field_file_image_alt_text]' => 0,
    '[file:field-file-image-alt-text]' => 0,
    '[file:extension]' => 0,
    '[file:fid]' => 0,
    '[file:uuid]' => 0,
    '[file:size-raw]' => 0,
    '[file:name]' => 0,
    '[file:mime]' => 0,
    '[file:field-folder]' => 0,
    '[file:field_folder]' => 0,
    '[file:original]' => 0,
    '[file:owner]' => 0,
    '[file:path]' => 0,
    '[file:timestamp]' => 0,
    '[file:field_file_image_title_text]' => 0,
    '[file:field-file-image-title-text]' => 0,
    '[file:url]' => 0,
  );
  $export['token_insert_global_used_tokens_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_file-type';
  $strongarm->value = array(
    '[file-type:edit-url]' => 0,
    '[file-type:count]' => 0,
    '[file-type:machine-name]' => 0,
    '[file-type:name]' => 0,
  );
  $export['token_insert_global_used_tokens_file-type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<date>';
  $strongarm->value = array(
    '[list<date>:0]' => 0,
    '[list<date>:1]' => 0,
    '[list<date>:2]' => 0,
    '[list<date>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<date>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<file>';
  $strongarm->value = array(
    '[list<file>:0]' => 0,
    '[list<file>:1]' => 0,
    '[list<file>:2]' => 0,
    '[list<file>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<file>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<node>';
  $strongarm->value = array(
    '[list<node>:0]' => 0,
    '[list<node>:1]' => 0,
    '[list<node>:2]' => 0,
    '[list<node>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<node>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<rules_config>';
  $strongarm->value = array(
    '[list<rules_config>:0]' => 0,
    '[list<rules_config>:1]' => 0,
    '[list<rules_config>:2]' => 0,
    '[list<rules_config>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<rules_config>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<term>';
  $strongarm->value = array(
    '[list<term>:0]' => 0,
    '[list<term>:1]' => 0,
    '[list<term>:2]' => 0,
    '[list<term>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<term>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<user>';
  $strongarm->value = array(
    '[list<user>:0]' => 0,
    '[list<user>:1]' => 0,
    '[list<user>:2]' => 0,
    '[list<user>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<user>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<vocabulary>';
  $strongarm->value = array(
    '[list<vocabulary>:0]' => 0,
    '[list<vocabulary>:1]' => 0,
    '[list<vocabulary>:2]' => 0,
    '[list<vocabulary>:3]' => 0,
  );
  $export['token_insert_global_used_tokens_list<vocabulary>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_menu';
  $strongarm->value = array(
    '[menu:description]' => 0,
    '[menu:edit-url]' => 0,
    '[menu:machine-name]' => 0,
    '[menu:menu-link-count]' => 0,
    '[menu:name]' => 0,
  );
  $export['token_insert_global_used_tokens_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_menu-link';
  $strongarm->value = array(
    '[menu-link:edit-url]' => 0,
    '[menu-link:mlid]' => 0,
    '[menu-link:menu]' => 0,
    '[menu-link:parent]' => 0,
    '[menu-link:parents]' => 0,
    '[menu-link:root]' => 0,
    '[menu-link:title]' => 0,
    '[menu-link:url]' => 0,
  );
  $export['token_insert_global_used_tokens_menu-link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_node';
  $strongarm->value = array(
    '[node:body]' => '[node:body]',
    '[node:nid]' => '[node:nid]',
    '[node:content-type]' => '[node:content-type]',
    '[node:changed]' => '[node:changed]',
    '[node:created]' => '[node:created]',
    '[node:language]' => '[node:language]',
    '[node:summary]' => '[node:summary]',
    '[node:title]' => '[node:title]',
    '[node:url]' => '[node:url]',
    '[node:author]' => 0,
    '[node:revision]' => 0,
    '[node:edit-url]' => 0,
    '[node:feed-nid]' => 0,
    '[node:feed-source]' => 0,
    '[node:is-new]' => 0,
    '[node:diff]' => 0,
    '[node:diff-markdown]' => 0,
    '[node:menu-link]' => 0,
    '[node:uuid]' => 0,
    '[node:vuuid]' => 0,
    '[node:original]' => 0,
    '[node:promote]' => 0,
    '[node:vid]' => 0,
    '[node:log]' => 0,
    '[node:status]' => 0,
    '[node:sticky]' => 0,
    '[node:source]' => 0,
  );
  $export['token_insert_global_used_tokens_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_random';
  $strongarm->value = array(
    '[random:hash]' => '[random:hash]',
    '[random:number]' => '[random:number]',
  );
  $export['token_insert_global_used_tokens_random'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_config';
  $strongarm->value = array(
    '[rules_config:access-exposed]' => 0,
    '[rules_config:active]' => 0,
    '[rules_config:dirty]' => 0,
    '[rules_config:id]' => 0,
    '[rules_config:label]' => 0,
    '[rules_config:module]' => 0,
    '[rules_config:owner]' => 0,
    '[rules_config:plugin]' => 0,
    '[rules_config:status]' => 0,
    '[rules_config:weight]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_date';
  $strongarm->value = array(
    '[rules_date:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_decimal';
  $strongarm->value = array(
    '[rules_decimal:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_decimal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_duration';
  $strongarm->value = array(
    '[rules_duration:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_integer';
  $strongarm->value = array(
    '[rules_integer:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_integer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_text';
  $strongarm->value = array(
    '[rules_text:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_token';
  $strongarm->value = array(
    '[rules_token:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_rules_uri';
  $strongarm->value = array(
    '[rules_uri:value]' => 0,
  );
  $export['token_insert_global_used_tokens_rules_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_session_limit';
  $strongarm->value = array(
    '[session_limit:default]' => 0,
    '[session_limit:max]' => 0,
    '[session_limit:role]' => 0,
    '[session_limit:user]' => 0,
  );
  $export['token_insert_global_used_tokens_session_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_site';
  $strongarm->value = array(
    '[site:current-date]' => '[site:current-date]',
    '[site:name]' => '[site:name]',
    '[site:slogan]' => '[site:slogan]',
    '[site:url]' => '[site:url]',
    '[site:current-page]' => 0,
    '[site:mail]' => 0,
    '[site:current-user]' => 0,
    '[site:login-url]' => 0,
    '[site:url-brief]' => 0,
  );
  $export['token_insert_global_used_tokens_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_term';
  $strongarm->value = array(
    '[term:parents-all]' => 0,
    '[term:description]' => 0,
    '[term:i18n-description]' => 0,
    '[term:edit-url]' => 0,
    '[term:feed-nid]' => 0,
    '[term:name]' => 0,
    '[term:i18n-name]' => 0,
    '[term:node-count]' => 0,
    '[term:original]' => 0,
    '[term:parents]' => 0,
    '[term:parent]' => 0,
    '[term:i18n-parent]' => 0,
    '[term:root]' => 0,
    '[term:uuid]' => 0,
    '[term:tid]' => 0,
    '[term:url]' => 0,
    '[term:vocabulary]' => 0,
    '[term:i18n-vocabulary]' => 0,
    '[term:weight]' => 0,
  );
  $export['token_insert_global_used_tokens_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_url';
  $strongarm->value = array(
    '[url:absolute]' => 0,
    '[url:args]' => 0,
    '[url:brief]' => 0,
    '[url:path]' => 0,
    '[url:relative]' => 0,
    '[url:unaliased]' => 0,
  );
  $export['token_insert_global_used_tokens_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_user';
  $strongarm->value = array(
    '[user:cancel-url]' => 0,
    '[user:created]' => 0,
    '[user:theme]' => 0,
    '[user:edit-url]' => 0,
    '[user:mail]' => 0,
    '[user:feed-nid]' => 0,
    '[user:last-access]' => 0,
    '[user:last-login]' => 0,
    '[user:name]' => 0,
    '[user:one-time-login-url]' => 0,
    '[user:original]' => 0,
    '[user:roles]' => 0,
    '[user:status]' => 0,
    '[user:url]' => 0,
    '[user:uid]' => 0,
    '[user:uuid]' => 0,
  );
  $export['token_insert_global_used_tokens_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_variable';
  $strongarm->value = array(
    '[variable:anonymous]' => 0,
    '[variable:user_picture_default]' => 0,
    '[variable:feed_description]' => 0,
    '[variable:maintenance_mode_message]' => 0,
    '[variable:i18n_select_page_list]' => 0,
    '[variable:user_picture_guidelines]' => 0,
    '[variable:user_picture_dimensions]' => 0,
    '[variable:user_picture_file_size]' => 0,
    '[variable:site_mail]' => 0,
    '[variable:site_name]' => 0,
    '[variable:site_slogan]' => 0,
    '[variable:i18n_select_skip_tags]' => 0,
    '[variable:user_registration_help]' => 0,
    '[variable:media_wysiwyg_wysiwyg_icon_title]' => 0,
    '[variable:media_wysiwyg_wysiwyg_title]' => 0,
  );
  $export['token_insert_global_used_tokens_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_view';
  $strongarm->value = array(
    '[view:title]' => '[view:title]',
    '[view:url]' => '[view:url]',
    '[view:description]' => 0,
    '[view:machine-name]' => 0,
    '[view:name]' => 0,
  );
  $export['token_insert_global_used_tokens_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_vocabulary';
  $strongarm->value = array(
    '[vocabulary:description]' => 0,
    '[vocabulary:i18n-description]' => 0,
    '[vocabulary:edit-url]' => 0,
    '[vocabulary:machine-name]' => 0,
    '[vocabulary:name]' => 0,
    '[vocabulary:i18n-name]' => 0,
    '[vocabulary:node-count]' => 0,
    '[vocabulary:original]' => 0,
    '[vocabulary:term-count]' => 0,
    '[vocabulary:vid]' => 0,
  );
  $export['token_insert_global_used_tokens_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_max_depth';
  $strongarm->value = '2';
  $export['token_insert_max_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_use_tokens_per_role';
  $strongarm->value = 0;
  $export['token_insert_use_tokens_per_role'] = $strongarm;

  return $export;
}
