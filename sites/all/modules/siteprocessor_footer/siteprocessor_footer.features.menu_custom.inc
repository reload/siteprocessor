<?php
/**
 * @file
 * siteprocessor_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function siteprocessor_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Menu for footer items',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Menu for footer items');


  return $menus;
}
