<?php

/**
 * @file
 * Implements admin settings pages
 * @author Paulo Gomes <pauloamgomes@gmail.com>
 */

/**
 * Implements hook_settings_form().
 */
function ui_hacks_settings_form() {
  $form['ui_hacks_text_formats_collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable collapsible text formats'),
    '#description' => t('Provides better organization of space on the edit forms'),
    '#default_value' => variable_get('ui_hacks_text_formats_collapsed', TRUE),
  );

  return system_settings_form($form);
}
