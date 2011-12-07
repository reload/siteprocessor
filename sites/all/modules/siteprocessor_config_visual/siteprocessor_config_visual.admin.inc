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
      print ($key);
      print strlen($item['value']);
    }
  }
  
   // Submit Button.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return($form);
  
}

