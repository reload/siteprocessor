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

/**
 * Implements hook_image_default_styles().
 */
function siteprocessor_frontpage_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_image
  $styles['carousel_image'] = array(
    'name' => 'carousel_image',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '600',
          'height' => '450',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
