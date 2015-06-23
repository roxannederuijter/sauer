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

  // Exported image style: dienst.
  $styles['dienst'] = array(
    'label' => 'Dienst',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: flags.
  $styles['flags'] = array(
    'label' => 'Flags',
    'effects' => array(
      7 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 22,
          'height' => 15,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: footer.
  $styles['footer'] = array(
    'label' => 'footer',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 162,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
