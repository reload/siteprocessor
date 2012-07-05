<?php
/**
 * @file
 * siteprocessor_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function siteprocessor_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function siteprocessor_event_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function siteprocessor_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Arrangement'),
      'base' => 'node_content',
      'description' => t('Use events for content describing events that take place in a given period at a given place'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
