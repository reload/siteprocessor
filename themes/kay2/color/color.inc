<?php
/**
 * All color hex values must be lowercase
 */
$info = array(
  'fields' => array(
    'bodybg' => t('Body container background'),
    'bg' => t('Background'),
    'text' => t('Main text'),
    'mainmenubgtop' => t('Main menu top background'),
    'mainmenubgbottom' => t('Main menu bottom background'),
    'mainmenucolor' => t('Main menu color'),
    'linkcolor' => t('Main link color'),
    'linkhover' => t('Main link hover color'),
    'secondarylinkcolor' => t('Secondary link color'),
    'secondarylinkhover' => t('Secondary link hover color'),
    'sideblockbg' => t('Sidebar block background color'),
    'sideblockbgshade' => t('Sidebar block background shade'),
    'sidemenubg' => t('Sidebar menu background color'),
    'sidemenubgshade' => t('Sidebar menu background shade'),
    'sidemenubghover' => t('Sidebar menu link hover color'),
    'title' => t('Title'),
  ),

  'schemes' => array(
    'default' => array(
      'title' => t('Grey (default)'),
      'colors' => array(
        'bodybg' => '#efefef',
        'bg' => '#ffffff',
        'text' => '#666666',
        'mainmenubgtop' => '#222222',
        'mainmenubgbottom' => '#999999',
        'mainmenucolor' => '#eeeeee',
        'linkcolor' => '#000000',
        'linkhover' => '#111111',
        'secondarylinkcolor' => '#333333',
        'secondarylinkhover' => '#444444',
        'sideblockbg' => '#f5f5f5',
        'sideblockbgshade' => '#e0e0e0',
        'title' => '#555555',
        'sidemenubg' => '#dddddd',
        'sidemenubgshade' => '#cccccc',
        'sidemenubghover' => '#cccccd',
      ),
    ),
    'blue' => array(
      'title' => t('Blue'),
      'colors' => array(
        'bodybg' => '#efefef',
        'bg' => '#ffffff',
        'text' => '#111111',
        'mainmenubgtop' => '#223f81',
        'mainmenubgbottom' => '#8eabec',
        'mainmenucolor' => '#ffffff',
        'linkcolor' => '#000000',
        'linkhover' => '#111111',
        'secondarylinkcolor' => '#333333',
        'secondarylinkhover' => '#444444',
        'title' => '#de7102',
      ),
    ),
    'green' => array(
      'title' => t('Green'),
      'colors' => array(
        'bodybg' => '#efefef',
        'bg' => '#ffffff',
        'text' => '#111111',
        'mainmenubgtop' => '#476d40',
        'mainmenubgbottom' => '#40d425',
        'mainmenucolor' => '#ffffff',
        'linkcolor' => '#000000',
        'linkhover' => '#111111',
        'secondarylinkcolor' => '#333333',
        'secondarylinkhover' => '#444444',
        'title' => '#de7102',
      ),
    ),
  ),

  'css' => array('css/colors.css'),

  'copy' => array(),

  'gradients' => array(),

  'fill' => array(),

  'slices' => array(),

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',

);
