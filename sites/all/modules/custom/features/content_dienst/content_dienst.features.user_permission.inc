<?php
/**
 * @file
 * content_dienst.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_dienst_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in frontpage'.
  $permissions['delete terms in frontpage'] = array(
    'name' => 'delete terms in frontpage',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in frontpage'.
  $permissions['edit terms in frontpage'] = array(
    'name' => 'edit terms in frontpage',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
