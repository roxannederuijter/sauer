<?php
/**
 * @file
 * field_bases.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function field_bases_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-translate-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'translate-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'engels
duits
pools',
    'roles' => array(),
    'themes' => array(
      'default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'default',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
