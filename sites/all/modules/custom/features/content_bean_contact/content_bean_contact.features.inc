<?php
/**
 * @file
 * content_bean_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_bean_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
