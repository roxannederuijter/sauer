<?php
/**
 * @file
 * content_bean_footer.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_bean_footer_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_logo'
  $field_bases['field_logo'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'linkimagefield',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'linkimagefield',
  );

  return $field_bases;
}
