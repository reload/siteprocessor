<?php

// Plugin definition
$plugin = array(
  'title' => t('100%, 25% + 50% + 25%, 100%'),
  'category' => t('Siteprocessor'),
  'icon' => '100-25-50-25-100.png',
  'theme' => '100-25-50-25-100',
  'css' => '100-25-50-25-100.css',
  'regions' => array(
    '1' => t('Top area'),
    '2_1' => t('Left column'),
    '2_2' => t('Middle column'),
    '2_3' => t('Right column'),
    '3' => t('Bottom area'),
  ),
);
