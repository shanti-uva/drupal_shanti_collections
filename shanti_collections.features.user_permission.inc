<?php
/**
 * @file
 * shanti_collections.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function shanti_collections_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  return $permissions;
}
