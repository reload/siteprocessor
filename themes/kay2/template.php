<?php
function kay2_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}

/**
 * Implementation of template_preprocess_node()
 */
function kay2_preprocess_node(&$vars) {
  $vars['language_fields'] = field_language('node', $vars['node']);

  // Need to overwrite field_image style preset for only this theme.
  if ($vars['elements']['#view_mode'] == 'full') {
    if (isset($vars['content']['field_image'])) {
      $vars['content']['field_image'][0]['#item']['width'] = '250';
      $vars['content']['field_image'][0]['#item']['height'] = 'auto';
      $vars['content']['field_image'][0]['#image_style'] = 'node_image';
    }
  }
}


/**
 * Implements hook_process_html().
 */
function kay2_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/**
 * Override or insert variables into the page template.
 */
function kay2_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

/**
 * Implementation of template_preprocess_html
 */
function kay2_preprocess_html(&$variables){
  $element = array();
  
  // Set device zoom
  $element[] = array (
    '#tag' => 'meta',
    '#attributes' => array (
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=yes',
    ),
  );
  $i = 0;

  // Loop through the elements and add them to head
  foreach ($element as $row) {
    $i ++;
    drupal_add_html_head($row, 'unicorn-' . $i);
  }
}
