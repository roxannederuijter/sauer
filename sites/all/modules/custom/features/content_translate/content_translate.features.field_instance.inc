<?php
/**
 * @file
 * content_translate.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_translate_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-translate-field_paragraphs'
  $field_instances['node-translate-field_paragraphs'] = array(
    'bundle' => 'translate',
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
        'weight' => 0,
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-werknemer-field_vertalingspagina'
  $field_instances['node-werknemer-field_vertalingspagina'] = array(
    'bundle' => 'werknemer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vertalingspagina',
    'label' => 'Vertalingspagina',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 47,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraphs');
  t('Vertalingspagina');

  return $field_instances;
}
