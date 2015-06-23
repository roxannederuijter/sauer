<?php
/**
 * @file
 * view_translate.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_translate_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'translate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Translate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'vertaling';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Veld: Afbeelding */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Samenvatting */
  $handler->display->display_options['fields']['field_samenvatting']['id'] = 'field_samenvatting';
  $handler->display->display_options['fields']['field_samenvatting']['table'] = 'field_data_field_samenvatting';
  $handler->display->display_options['fields']['field_samenvatting']['field'] = 'field_samenvatting';
  $handler->display->display_options['fields']['field_samenvatting']['label'] = '';
  $handler->display->display_options['fields']['field_samenvatting']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Voorpagina */
  $handler->display->display_options['fields']['field_voorpagina']['id'] = 'field_voorpagina';
  $handler->display->display_options['fields']['field_voorpagina']['table'] = 'field_data_field_voorpagina';
  $handler->display->display_options['fields']['field_voorpagina']['field'] = 'field_voorpagina';
  $handler->display->display_options['fields']['field_voorpagina']['label'] = '';
  $handler->display->display_options['fields']['field_voorpagina']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voorpagina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_voorpagina']['type'] = 'ds_taxonomy_view_mode';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'translate' => 'translate',
  );

  /* Display: Pagina */
  $handler = $view->new_display('page', 'Pagina', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Veld: Paragraphs */
  $handler->display->display_options['fields']['field_paragraphs']['id'] = 'field_paragraphs';
  $handler->display->display_options['fields']['field_paragraphs']['table'] = 'field_data_field_paragraphs';
  $handler->display->display_options['fields']['field_paragraphs']['field'] = 'field_paragraphs';
  $handler->display->display_options['fields']['field_paragraphs']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['path'] = 'translate';

  /* Display: Block page translate -> Werknemers */
  $handler = $view->new_display('block', 'Block page translate -> Werknemers', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relatie: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_vertalingspagina_node']['id'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['relationships']['reverse_field_vertalingspagina_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_vertalingspagina_node']['field'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['relationships']['reverse_field_vertalingspagina_node']['relationship'] = 'field_vertalingspagina_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Veld: Afbeelding */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Veld: Inhoud: Naam */
  $handler->display->display_options['fields']['field_naam']['id'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['table'] = 'field_data_field_naam';
  $handler->display->display_options['fields']['field_naam']['field'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['relationship'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['fields']['field_naam']['label'] = '';
  $handler->display->display_options['fields']['field_naam']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Functie */
  $handler->display->display_options['fields']['field_functie']['id'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['table'] = 'field_data_field_functie';
  $handler->display->display_options['fields']['field_functie']['field'] = 'field_functie';
  $handler->display->display_options['fields']['field_functie']['relationship'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['fields']['field_functie']['label'] = '';
  $handler->display->display_options['fields']['field_functie']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: e-mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['relationship'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['fields']['field_e_mail']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextueel filter: Inhoud: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'translate' => 'translate',
  );
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_vertalingspagina_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'werknemer' => 'werknemer',
  );
  $handler->display->display_options['block_description'] = 'werknemers';

  /* Display: flags */
  $handler = $view->new_display('block', 'flags', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Vlag */
  $handler->display->display_options['fields']['field_vlag']['id'] = 'field_vlag';
  $handler->display->display_options['fields']['field_vlag']['table'] = 'field_data_field_vlag';
  $handler->display->display_options['fields']['field_vlag']['field'] = 'field_vlag';
  $handler->display->display_options['fields']['field_vlag']['label'] = '';
  $handler->display->display_options['fields']['field_vlag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vlag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vlag']['settings'] = array(
    'image_style' => 'flags',
  );
  $translatables['translate'] = array(
    t('Master'),
    t('vertaling'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Pagina'),
    t('Block page translate -> Werknemers'),
    t('Inhoud referencing Inhoud from field_vertalingspagina'),
    t('Alle'),
    t('werknemers'),
    t('flags'),
  );
  $export['translate'] = $view;

  return $export;
}
