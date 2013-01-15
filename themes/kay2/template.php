<?php

/**
 * Implementation of template_preprocess_node()
 */
function kay2_preprocess_node(&$vars) {
  $vars['language_fields'] = field_language('node', $vars['node']);
}
