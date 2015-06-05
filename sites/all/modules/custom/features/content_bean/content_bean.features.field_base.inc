<?php
/**
 * @file
 * content_bean.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_bean_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_inhoud'
  $field_bases['field_inhoud'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_inhoud',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
