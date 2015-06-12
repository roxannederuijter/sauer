<?php
/**
 * @file
 * content_dienst.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_dienst_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dienst-field_image'
  $field_instances['node-dienst-field_image'] = array(
    'bundle' => 'dienst',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Afbeelding',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-dienst-field_paragraphs'
  $field_instances['node-dienst-field_paragraphs'] = array(
    'bundle' => 'dienst',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs',
    'label' => 'Paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_kolom_afbeelding' => '1_kolom_afbeelding',
        '1_kolom_tekst' => '1_kolom_tekst',
        '2_kolommen_afbeeldingen' => '2_kolommen_afbeeldingen',
        '2_kolommen_tekst' => '2_kolommen_tekst',
        '2_kolommen_tekst_afbeelding_link' => '2_kolommen_tekst_afbeelding_link',
        '2_kolommen_tekst_afbeelding_rech' => '2_kolommen_tekst_afbeelding_rech',
      ),
      'bundle_weights' => array(
        '1_kolom_afbeelding' => 2,
        '1_kolom_tekst' => 3,
        '2_kolommen_afbeeldingen' => 4,
        '2_kolommen_tekst' => 5,
        '2_kolommen_tekst_afbeelding_link' => 6,
        '2_kolommen_tekst_afbeelding_rech' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-dienst-field_samenvatting'
  $field_instances['node-dienst-field_samenvatting'] = array(
    'bundle' => 'dienst',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_samenvatting',
    'label' => 'Samenvatting',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Afbeelding');
  t('Paragraphs');
  t('Samenvatting');

  return $field_instances;
}
