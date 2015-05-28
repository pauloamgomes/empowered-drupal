<?php
/**
 * @file
 * empowered_roles.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function empowered_roles_default_roles_permissions() {
  $roles = array();

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
    'permissions' => array(
      'access content' => TRUE,
      'search content' => TRUE,
      'view files' => TRUE,
    ),
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
    'permissions' => array(
      'access content' => TRUE,
      'search content' => TRUE,
      'view files' => TRUE,
    ),
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
    'permissions' => array(
      'use text format rich_text' => TRUE,
      'use token insert' => TRUE,
    ),
  );

  return $roles;
}
