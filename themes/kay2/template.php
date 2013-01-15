<?php

/**
 * Implementation of template_preprocess_node()
 */
function kay2_preprocess_node(&$vars) {
  $vars['language_fields'] = field_language('node', $vars['node']);
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
