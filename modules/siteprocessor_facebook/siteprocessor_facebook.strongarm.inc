<?php
/**
 * @file
 * siteprocessor_facebook.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function siteprocessor_facebook_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siteprocessor_facebook_language';
  $strongarm->value = 'da_DK';
  $export['siteprocessor_facebook_language'] = $strongarm;

  return $export;
}
