<div id="galleriffic-container">
adskbhjasdbhksadbkjbksajdjkbasbjk
  <div id="thumbs">
    <a class="pageLink prev" style="visibility: hidden;" href="#" title="Prev Page"></a>      
    <ul class="thumbs noscript clearfix">
      <?php
      foreach($elements['field_gallery_images']['#items'] as $key => $value ):
        $element=$elements['field_gallery_images'][$key]['entity']['field_collection_item'][$value['value']];
        $image_uri=$element['field_gallery_image']['#items'][0]['uri'];
        $image_fid=$element['field_gallery_image']['#items'][0]['fid'];
        $image_title=$element['field_gallery_image']['#items'][0]['title'];
        $image_description=$element['field_gallery_image_description']['#items'][0]['safe_value'];
        $image_thumb=theme('image_style', array(
          'style_name'=>'gallery_thumbnail',
          'path'=>$image_uri,          
          'alt'=>$image_title,          
          'title'=>$image_title,                    
        )
        );
        $image_full_url=image_style_url('full_width', $image_uri);

      ?>
        <li>
            <a class="thumb" name="<?php print $image_fid; ?>" href="<?php print $image_full_url; ?>" title="<?php print $image_title; ?>">
                <?php print $image_thumb; ?>
            </a>
            <div class="caption">
                <h2><?php print $image_title; ?></h2>
                <div class="caption-description"><?php print $image_description; ?></div>
            </div>
        </li>
      <?php endforeach; ?>
    </ul>
    <a class="pageLink next" style="visibility: hidden;" href="#" title="Next Page"></a>        
  </div>
  <div id="controls-container" class="clearfix">
    <div id="controls"></div>
    <div class="photo-index"></div>
  </div>
 
  <div id="slideshow-container">
    <div id="loading"></div>
    <div id="slideshow"></div>
    <div id="caption"></div>
  </div>
</div>
