<?php
/**
 * @file
 * empowered_editing_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function empowered_editing_settings_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_bb21af7e-4bf6-4de2-9df4-86006874ef29';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'middle',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Node',
        'width' => '59.538761158319446',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'middle' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '29.918544572759103',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'node_edit_options' => NULL,
      'center' => NULL,
      'middle' => array(
        'region_accordion_id' => 'node-options',
        'active' => '0',
        'collapsible' => 1,
        'animated' => 'none',
        'autoHeight' => '0',
        'heightStyle' => 'content',
        'header' => 'h2',
      ),
    ),
    'center' => array(
      'style' => '-1',
    ),
    'middle' => array(
      'style' => 'accordion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8ca4ef76-f6ad-499a-844d-7269ab83d9f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-881b251d-3e59-4142-b7ae-c6ee908a104e';
    $pane->panel = 'center';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '881b251d-3e59-4142-b7ae-c6ee908a104e';
    $display->content['new-881b251d-3e59-4142-b7ae-c6ee908a104e'] = $pane;
    $display->panels['center'][0] = 'new-881b251d-3e59-4142-b7ae-c6ee908a104e';
    $pane = new stdClass();
    $pane->pid = 'new-c41a2d30-f0a4-4f6c-aa5b-4a9da328e15a';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c41a2d30-f0a4-4f6c-aa5b-4a9da328e15a';
    $display->content['new-c41a2d30-f0a4-4f6c-aa5b-4a9da328e15a'] = $pane;
    $display->panels['center'][1] = 'new-c41a2d30-f0a4-4f6c-aa5b-4a9da328e15a';
    $pane = new stdClass();
    $pane->pid = 'new-332eb0fa-b81d-4407-974b-53251fa3c529';
    $pane->panel = 'middle';
    $pane->type = 'node_form_language';
    $pane->subtype = 'node_form_language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '332eb0fa-b81d-4407-974b-53251fa3c529';
    $display->content['new-332eb0fa-b81d-4407-974b-53251fa3c529'] = $pane;
    $display->panels['middle'][0] = 'new-332eb0fa-b81d-4407-974b-53251fa3c529';
    $pane = new stdClass();
    $pane->pid = 'new-c34b5fd6-5b0f-47b6-bd82-e3c7fd000d1a';
    $pane->panel = 'middle';
    $pane->type = 'node_form_author';
    $pane->subtype = 'node_form_author';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c34b5fd6-5b0f-47b6-bd82-e3c7fd000d1a';
    $display->content['new-c34b5fd6-5b0f-47b6-bd82-e3c7fd000d1a'] = $pane;
    $display->panels['middle'][1] = 'new-c34b5fd6-5b0f-47b6-bd82-e3c7fd000d1a';
    $pane = new stdClass();
    $pane->pid = 'new-88d5d847-9358-4f54-bcbe-dd75c2291214';
    $pane->panel = 'middle';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '88d5d847-9358-4f54-bcbe-dd75c2291214';
    $display->content['new-88d5d847-9358-4f54-bcbe-dd75c2291214'] = $pane;
    $display->panels['middle'][2] = 'new-88d5d847-9358-4f54-bcbe-dd75c2291214';
    $pane = new stdClass();
    $pane->pid = 'new-353b6999-e74f-46a5-87b6-f807a2053ccb';
    $pane->panel = 'middle';
    $pane->type = 'node_form_log';
    $pane->subtype = 'node_form_log';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '353b6999-e74f-46a5-87b6-f807a2053ccb';
    $display->content['new-353b6999-e74f-46a5-87b6-f807a2053ccb'] = $pane;
    $display->panels['middle'][3] = 'new-353b6999-e74f-46a5-87b6-f807a2053ccb';
    $pane = new stdClass();
    $pane->pid = 'new-d2469b80-882a-4e5c-9e6a-5de2f6cd4979';
    $pane->panel = 'middle';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd2469b80-882a-4e5c-9e6a-5de2f6cd4979';
    $display->content['new-d2469b80-882a-4e5c-9e6a-5de2f6cd4979'] = $pane;
    $display->panels['middle'][4] = 'new-d2469b80-882a-4e5c-9e6a-5de2f6cd4979';
    $pane = new stdClass();
    $pane->pid = 'new-399c3d19-c0ac-422a-b4cb-086af035d26b';
    $pane->panel = 'middle';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '399c3d19-c0ac-422a-b4cb-086af035d26b';
    $display->content['new-399c3d19-c0ac-422a-b4cb-086af035d26b'] = $pane;
    $display->panels['middle'][5] = 'new-399c3d19-c0ac-422a-b4cb-086af035d26b';
    $pane = new stdClass();
    $pane->pid = 'new-125ca3de-232c-49ab-b6e9-0cd4d5f56473';
    $pane->panel = 'middle';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '125ca3de-232c-49ab-b6e9-0cd4d5f56473';
    $display->content['new-125ca3de-232c-49ab-b6e9-0cd4d5f56473'] = $pane;
    $display->panels['middle'][6] = 'new-125ca3de-232c-49ab-b6e9-0cd4d5f56473';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-881b251d-3e59-4142-b7ae-c6ee908a104e';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_bb21af7e-4bf6-4de2-9df4-86006874ef29'] = $handler;

  return $export;
}
