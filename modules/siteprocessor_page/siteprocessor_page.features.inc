<?php
/**
 * @file
 * siteprocessor_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function siteprocessor_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function siteprocessor_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Simpel side'),
      'base' => 'node_content',
      'description' => t('Brug <em>simple sider</em> til dit statiske indhold, som f.eks. en "om os"-side.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
