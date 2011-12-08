<?php


function siteprocessor_config_visual_colors_form($form,&$form_state) {
  $colors=siteprocessor_config_visual_colors_get();
  $groups=siteprocessor_config_visual_color_groups_get();
  
  $fieldtype = module_exists('jquery_colorpicker') ? 'jquery_colorpicker' : 'textfield';
 
  $form = array();
  
  foreach($groups as $gkey=>$group){
    $form[$gkey] = array(
          '#type' => 'fieldset',
          '#title' => t($group),
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
    );    
  }
  
  foreach($colors as $gkey=>$group){
    foreach($group as $key=>$item){
      $form[$gkey][$key]=array(
        '#type'=>$fieldtype,
        '#title'=>t($item['name']),
        '#default_value'=>$item['value'],
      );
    }
  }
  
   // Submit Button.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return($form);
  
}


function siteprocessor_config_visual_images_form($form,&$form_state) {
  if ($image_fid = variable_get('siteprocessor_config_visual_top_image_fid', FALSE)) {
    $image = file_load($image_fid);
    $form['image'] = array(
      '#markup' => theme('image_style', array('path' => $image->uri, 'style_name' => 'thumbnail')),
    );
  }
  // Use the #managed_file FAPI element to upload an image file.
  $form['siteprocessor_config_visual_top_image_fid'] = array(
    '#title' => t('Top Block Image'),
    '#type' => 'managed_file',
    '#description' => t('The uploaded image will be displayed on the top of every page'),
    '#default_value' => variable_get('siteprocessor_config_visual_top_image_fid', ''),
    '#upload_location' => 'public://siteprocessor_config_visual_images/',
  );  

   
  
  if ($image_fid = variable_get('siteprocessor_config_visual_background_image_fid', FALSE)) {
    $image = file_load($image_fid);
    $form['background_image'] = array(
      '#markup' => theme('image_style', array('path' => $image->uri, 'style_name' => 'thumbnail')),
    );
  }
  // Use the #managed_file FAPI element to upload an image file.
  $form['siteprocessor_config_visual_background_image_fid'] = array(
    '#title' => t('Background Image'),
    '#type' => 'managed_file',
    '#description' => t('The uploaded image will be displayed on the top background of every page'),
    '#default_value' => variable_get('siteprocessor_config_visual_background_image_fid', ''),
    '#upload_location' => 'public://siteprocessor_config_visual_images/',
  );  
  
  
  if ($image_fid = variable_get('siteprocessor_config_visual_owner_image_fid', FALSE)) {
    $image = file_load($image_fid);
    $form['owner_image'] = array(
      '#markup' => theme('image_style', array('path' => $image->uri, 'style_name' => 'thumbnail')),
    );
  }
  // Use the #managed_file FAPI element to upload an image file.
  $form['siteprocessor_config_visual_owner_image_fid'] = array(
    '#title' => t('Owner logo'),
    '#type' => 'managed_file',
    '#description' => t('Owner logo will be displayed in the background of every page'),
    '#default_value' => variable_get('siteprocessor_config_visual_owner_image_fid', ''),
    '#upload_location' => 'public://siteprocessor_config_visual_images/',
  );  
    
  
  
   // Submit Button.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
  
  return system_settings_form($form);
}

