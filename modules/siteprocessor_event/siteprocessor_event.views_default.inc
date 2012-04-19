<?php
/**
 * @file
 * siteprocessor_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function siteprocessor_event_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'print_search_for_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Print search for events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filter events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorter efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_event_time_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_event_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_event_target_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix large-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No events found';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Event time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_event_time']['field_api_classes'] = 0;
  /* Felt: Indhold: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Foregår';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Sort criterion: Indhold: Event time -  start dato (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Indhold: Event time -  start dato (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_time_value']['expose']['operator_id'] = 'field_event_time_value_op';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['label'] = 'Tidspunkt -  start dato (field_event_time)';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['operator'] = 'field_event_time_value_op';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['identifier'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = '-1 week';
  $handler->display->display_options['filters']['field_event_time_value']['default_to_date'] = '1 year';
  /* Filter criterion: Indhold: Event category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator_id'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['label'] = 'Event category';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['identifier'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_category_tid']['vocabulary'] = 'event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['error_message'] = 1;
  /* Filter criterion: Indhold: Event target (field_event_target) */
  $handler->display->display_options['filters']['field_event_target_tid']['id'] = 'field_event_target_tid';
  $handler->display->display_options['filters']['field_event_target_tid']['table'] = 'field_data_field_event_target';
  $handler->display->display_options['filters']['field_event_target_tid']['field'] = 'field_event_target_tid';
  $handler->display->display_options['filters']['field_event_target_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['operator_id'] = 'field_event_target_tid_op';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['label'] = 'Event target';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['operator'] = 'field_event_target_tid_op';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['identifier'] = 'field_event_target_tid';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_target_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_target_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_target_tid']['vocabulary'] = 'event_target';
  $handler->display->display_options['filters']['field_event_target_tid']['error_message'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Print friendly event list */
  $handler = $view->new_display('panel_pane', 'Print friendly event list', 'panel_pane_3');
  $export['print_search_for_events'] = $view;

  $view = new view;
  $view->name = 'search_for_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search for events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find arrangementer';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Læs mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find!';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nulstil';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorter efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_event_time_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_event_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_event_target_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_bydel_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'large_item';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Der blev desværre ikke fundet nogle arrangementer, der matcher dine valg ovenfor.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Indhold: Event time -  start dato (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Indhold: Event time -  start dato (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_time_value']['expose']['operator_id'] = 'field_event_time_value_op';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['label'] = 'Vælg periode';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['operator'] = 'field_event_time_value_op';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['identifier'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['required'] = 1;
  $handler->display->display_options['filters']['field_event_time_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_time_value']['default_to_date'] = '+1 year';
  $handler->display->display_options['filters']['field_event_time_value']['year_range'] = '-0:+1';
  /* Filter criterion: Indhold: Event category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator_id'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['label'] = 'Emne';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['identifier'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_category_tid']['vocabulary'] = 'event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['error_message'] = 1;
  /* Filter criterion: Indhold: Event target (field_event_target) */
  $handler->display->display_options['filters']['field_event_target_tid']['id'] = 'field_event_target_tid';
  $handler->display->display_options['filters']['field_event_target_tid']['table'] = 'field_data_field_event_target';
  $handler->display->display_options['filters']['field_event_target_tid']['field'] = 'field_event_target_tid';
  $handler->display->display_options['filters']['field_event_target_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['operator_id'] = 'field_event_target_tid_op';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['label'] = 'Aldersgruppe';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['operator'] = 'field_event_target_tid_op';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['identifier'] = 'field_event_target_tid';
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_event_target_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_target_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_target_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_target_tid']['vocabulary'] = 'event_target';
  $handler->display->display_options['filters']['field_event_target_tid']['error_message'] = 1;
  /* Filter criterion: Indhold: Bydel (field_bydel) */
  $handler->display->display_options['filters']['field_bydel_tid']['id'] = 'field_bydel_tid';
  $handler->display->display_options['filters']['field_bydel_tid']['table'] = 'field_data_field_bydel';
  $handler->display->display_options['filters']['field_bydel_tid']['field'] = 'field_bydel_tid';
  $handler->display->display_options['filters']['field_bydel_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['operator_id'] = 'field_bydel_tid_op';
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['label'] = 'Bydel';
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['operator'] = 'field_bydel_tid_op';
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['identifier'] = 'field_bydel_tid';
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_bydel_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_bydel_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_bydel_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bydel_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['filters']['field_bydel_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_bydel_tid']['error_message'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Large Items */
  $handler = $view->new_display('panel_pane', 'Large Items', 'panel_pane_1');

  /* Display: Image tiles */
  $handler = $view->new_display('panel_pane', 'Image tiles', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'imagetile-item';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'imagetile_item';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['search_for_events'] = $view;

  $view = new view;
  $view->name = 'upcoming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorter efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix  list-item';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'list_item';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Indhold: Event time -  start dato (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    0 => 'AND',
    1 => 'OR',
  );
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Indhold: Event time -  start dato (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_time_value']['expose']['operator_id'] = 'field_event_time_value_op';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['operator'] = 'field_event_time_value_op';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['identifier'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['expose']['required'] = 1;
  $handler->display->display_options['filters']['field_event_time_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['field_event_time_value']['default_to_date'] = '+1 month';
  /* Filter criterion: Indhold: Event time - end date (field_event_time:value2) */
  $handler->display->display_options['filters']['field_event_time_value2']['id'] = 'field_event_time_value2';
  $handler->display->display_options['filters']['field_event_time_value2']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value2']['field'] = 'field_event_time_value2';
  $handler->display->display_options['filters']['field_event_time_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_time_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_time_value2']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: List Items */
  $handler = $view->new_display('panel_pane', 'List Items', 'panel_pane_1');

  /* Display: Large Items */
  $handler = $view->new_display('panel_pane', 'Large Items', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix  large-item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'large_item';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['upcoming_events'] = $view;

  return $export;
}
