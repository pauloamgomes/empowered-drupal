<?php

/**
 * @file
 * empowered Shiny template.php implementation
 */

/**
 * Override or insert variables into the maintenance page template.
 */
function empowered_shiny_preprocess_maintenance_page(&$vars) {
  // While markup for normal pages is split into page.tpl.php and html.tpl.php,
  // the markup for the maintenance page is all in the single
  // maintenance-page.tpl.php template. So, to have what's done in
  // empowered_shiny_preprocess_html() also happen on the maintenance page, it has
  // to be called here.
  empowered_shiny_preprocess_html($vars);
}

/**
 * Override or insert variables into the html template.
 */
function empowered_shiny_preprocess_html(&$vars) {
  drupal_add_css(path_to_theme() . '/css/ie.css', array(
    'group' => CSS_THEME,
    'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE),
    'weight' => 999,
    'preprocess' => FALSE,
  ));
}

/**
 * Override or insert variables into the page template.
 */
function empowered_shiny_preprocess_page(&$vars) {
  $vars['primary_local_tasks'] = $vars['tabs'];
  unset($vars['primary_local_tasks']['#secondary']);
  $vars['secondary_local_tasks'] = array(
    '#theme' => 'menu_local_tasks',
    '#secondary' => $vars['tabs']['#secondary'],
  );
}
