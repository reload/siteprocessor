<?php
/**
 * Implementation of hook_admin_settings() for configuring the module
 */

function siteprocessor_topblock_settings_form($form,&$form_state) {
  if ($image_fid = variable_get('siteprocessor_topblock_image_fid', FALSE)) {
    $image = file_load($image_fid);
    $form['image'] = array(
      '#markup' => theme('image_style', array('path' => $image->uri, 'style_name' => 'thumbnail')),
    );
  }
  // Use the #managed_file FAPI element to upload an image file.
  $form['siteprocessor_topblock_image_fid'] = array(
    '#title' => t('Top Block Image'),
    '#type' => 'managed_file',
    '#description' => t('The uploaded image will be displayed on the top of every page'),
    '#default_value' => variable_get('siteprocessor_topblock_image_fid', ''),
    '#upload_location' => 'public://siteprocessor_topblock_images/',
  );  

  if ($image_fid = variable_get('siteprocessor_topblock_background_image_fid', FALSE)) {
    $image = file_load($image_fid);
    $form['background_image'] = array(
      '#markup' => theme('image_style', array('path' => $image->uri, 'style_name' => 'thumbnail')),
    );
  }
  // Use the #managed_file FAPI element to upload an image file.
  $form['siteprocessor_topblock_background_image_fid'] = array(
    '#title' => t('Top Background Image'),
    '#type' => 'managed_file',
    '#description' => t('The uploaded image will be displayed on the top background of every page'),
    '#default_value' => variable_get('siteprocessor_topblock_background_image_fid', ''),
    '#upload_location' => 'public://siteprocessor_topblock_images/',
  );  
  
  
  
   // Submit Button.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
  
  return system_settings_form($form);
}

