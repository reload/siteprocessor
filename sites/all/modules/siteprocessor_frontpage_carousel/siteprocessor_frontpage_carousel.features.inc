<?php
/**
 * @file
 * siteprocessor_frontpage_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function siteprocessor_frontpage_carousel_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
