<?php
/**
 * @file
 * content_translate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_translate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_translate_node_info() {
  $items = array(
    'translate' => array(
      'name' => t('vertalen'),
      'base' => 'node_content',
      'description' => t('vertalingspagina '),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
