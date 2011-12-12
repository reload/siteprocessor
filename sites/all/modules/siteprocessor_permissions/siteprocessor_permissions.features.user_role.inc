<?php
/**
 * @file
 * siteprocessor_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function siteprocessor_permissions_user_default_roles() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '5',
  );

  // Exported role: site admin
  $roles['site admin'] = array(
    'name' => 'site admin',
    'weight' => '4',
  );

  // Exported role: sponsor
  $roles['sponsor'] = array(
    'name' => 'sponsor',
    'weight' => '6',
  );

  return $roles;
}
