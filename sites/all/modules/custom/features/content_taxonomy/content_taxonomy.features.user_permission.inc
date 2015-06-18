<?php
/**
 * @file
 * content_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in catogorie'.
  $permissions['delete terms in catogorie'] = array(
    'name' => 'delete terms in catogorie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in catogorie'.
  $permissions['edit terms in catogorie'] = array(
    'name' => 'edit terms in catogorie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
