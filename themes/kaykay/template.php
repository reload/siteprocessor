<?php

/**
 * Implementation of template_preprocess_node()
 */
function kaykay_preprocess_node(&$vars) {
  $vars['language_fields'] = field_language('node', $vars['node']);
}