<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Share on Twitter box'),
  'description' => t('Show a simple box with a Share on Twitter link'),
  'category' => t('Siteprocessor'),
  'hook theme' => 'siteprocessor_base_twitter_content_type_theme',
);

/**
 * Custom ctools plugin render function.
 */
function siteprocessor_base_twitter_content_type_render($subtype, $conf, $panel_args, $context) {

  // Check if the box is enabled on SiteProcessor Config page.
  if (variable_get('siteprocessor_config_twitter', FALSE)) {
    $block = new stdClass();

    $block->module = 'siteprocessor-config';
    $block->title = t('Share on twitter');
    $block->content = theme('siteprocessor_base_twitter');

    return $block;
  }

  return FALSE;
}

/**
 * Enable pane admin settings form.
 */
function siteprocessor_base_twitter_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}

/**
 * Custom ctools plugin theme function.
 */
function siteprocessor_base_twitter_content_type_theme(&$theme, $plugin) {
  $theme['siteprocessor_base_twitter'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'siteprocessor-base-twitter',
  );
}
