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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Googlemaps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'googlemaps';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2486.472582427155!2d3.5880625999999998!3d51.4494792!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c499f77ee909d3%3A0x70f803f7c912f681!2sEdisonweg+2%2C+4382+NW+Vlissingen!5e0!3m2!1sen!2snl!4v1433861990131" style="border:0" width="100%"></iframe></p>
';

  $export['googlemaps'] = $fe_block_boxes;

  return $export;
}
