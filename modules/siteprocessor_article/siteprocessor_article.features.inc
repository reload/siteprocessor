<?php
/**
 * @file
 * siteprocessor_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function siteprocessor_article_ctools_plugin_api() {
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
function siteprocessor_article_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function siteprocessor_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Brug <em>artikler</em> til tidsfølsomt indhold som nyheder, pressemeddelelser eller blogindlæg.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
