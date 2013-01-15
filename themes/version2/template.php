<?php

/**
 * Implementation of template_preprocess_node()
 */
function version2_preprocess_node(&$vars) {
  $vars['language_fields'] = field_language('node', $vars['node']);
}
