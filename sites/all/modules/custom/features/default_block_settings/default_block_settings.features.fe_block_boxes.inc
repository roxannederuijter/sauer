<?php
/**
 * @file
 * default_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function default_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<div class="place">
<ul>
	<li class="place">Edisonweg 2a, Vlissingen</li>
</ul>
</div>

<div class="mail">
<ul>
	<li>notarissen@sauerenoonk.nl</li>
</ul>
</div>

<div class="phone">
<ul>
	<li class="phone">0118-418110</li>
</ul>
</div>
';

  $export['contact'] = $fe_block_boxes;

  return $export;
}
