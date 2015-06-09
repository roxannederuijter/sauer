<?php
/**
 * @file
 * default_imagestyles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: contact.
  $styles['contact'] = array(
    'label' => 'Contact',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 344,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
