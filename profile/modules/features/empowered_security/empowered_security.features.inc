<?php
/**
 * @file
 * empowered_security.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function empowered_security_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
