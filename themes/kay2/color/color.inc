<?php

$info = array(
  'fields' => array(
    'bg' => t('Background'),
    'text' => t('Main text'),
    'mainmenubgtop' => t('Main menu top background'),
    'mainmenubgbottom' => t('Main menu bottom background'),
    'mainmenucolor' => t('Main menu color'),
    'title' => t('Title'),
  ),

  'schemes' => array(
    'default' => array(
      'title' => t('Grey (default)'),
      'colors' => array(
        'bg' => '#ffffff',
        'text' => '#666666',
        'mainmenubgtop' => '#222222',
        'mainmenubgbottom' => '#999999',
        'mainmenucolor' => '#eeeeee',
        'title' => '#333333',
      ),
    ),
    'blue' => array(
      'title' => t('Blue'),
      'colors' => array(
        'bg' => '#ffffff',
        'text' => '#111111',
        'mainmenubgtop' => '#223f81',
        'mainmenubgbottom' => '#8eabec',
        'mainmenucolor' => '#ffffff',
        'title' => '#de7102',
      ),
    ),
    'green' => array(
      'title' => t('Green'),
      'colors' => array(
        'bg' => '#ffffff',
        'text' => '#111111',
        'mainmenubgtop' => '#476d40',
        'mainmenubgbottom' => '#40d425',
        'mainmenucolor' => '#ffffff',
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
