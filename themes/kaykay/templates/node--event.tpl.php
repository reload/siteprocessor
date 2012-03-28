<?php if($view_mode=='full'):?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="clearfix content"<?php print $content_attributes; ?>>
      <h1><?php print $title; ?></h1>
      <?php if(isset($content['body']) && $content['body']['#items'][0]['summary']): ?>
        <div class="summary"><?php print render($content['body']['#items'][0]['summary']); ?></div>
      <?php endif; ?>
      <?php if ($display_submitted): ?>
        <div class="submitted">
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>
     <?php print render($content['field_image']);?>
     <div class="fb-like" data-send="true" data-width="600" data-show-faces="false"></div>  
      <div class="event-properties">
        <?php if(isset($content['field_event_category'])):?>
          <div class="event-property event-category">
            <?php print render($content['field_event_category']);?>
          </div>
        <?php endif;?>
        <?php if(isset($content['field_event_target'])):?>
          <div class="event-property event-target">
            <?php print render($content['field_event_target']);?>
          </div>
        <?php endif;?>
        <?php if(isset($content['field_location'])):?>
          <div class="event-property event-location">
            <?php print render($content['field_location']);?>
          </div>
        <?php endif;?>
        <?php if(isset($content['field_event_time'])):?>
          <div class="event-property event-datetime">
            <?php print render($content['field_event_time']);?>
          </div>
        <?php endif;?>
        <?php if(isset($content['field_email'])||isset($content['field_links'])):?>
          <div class="event-property event-extras">
            <?php print render($content['field_email']);?>
            <?php print render($content['field_links']);?>
          </div>
        <?php endif;?>
      </div>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>
    </div>

    <?php if(property_exists($node, 'showcomments') && $node->showcomments):?>
      <div class="comments-box">
        <h2><?php print t('Comments');?></h2>
        <div class="fb-comments" data-num-posts="3" width="600" data-href="<?php print "http://" .$_SERVER['HTTP_HOST'] .$_SERVER['REQUEST_URI'];?>"></div>
      </div>
    <?php endif;?>
  </div>

<?php elseif($view_mode=='large_item'):?>
  <div class="large-item-wrapper">
    <?php print render($content['field_image']);?>
    <div class="large-item-content <?php if(!isset($content['field_image'])) print "no-image";?>">
      <h4><?php print l($title,'node/'.$node->nid, array('html'=>TRUE)); ?></h4>
      <div class="property-bar">
        <?php print render($content['field_event_time']);?>
        <?php if(isset($node->field_location[$node->language][0]['name'])):?>
          <div class="event-location-name"><?php print $node->field_location[$node->language][0]['name']; ?></div>
        <?php endif;?>
        <?php print render($content['field_event_category']);?>
        <?php print render($content['field_event_target']);?>
      </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    </div>
  </div>

<?php elseif($view_mode=='carousel_item'):?>
  <div class="carousel-item-wrapper">
    <?php print render($content['field_image']);?>
    <div class="carousel-item-content <?php if(!isset($content['field_image'])) print "no-image";?>">
      <h4><?php print l($title,'node/'.$node->nid, array('html'=>TRUE)); ?></h4>
      <div class="property-bar">
        <?php print render($content['field_event_time']);?>
        <?php if(isset($node->field_location[$node->language][0]['name'])):?>
          <div class="event-location-name"><?php print $node->field_location[$node->language][0]['name']; ?></div>
        <?php endif;?>
        <?php print render($content['field_event_category']);?>
        <?php print render($content['field_event_target']);?>
      </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    </div>
  </div>


<?php elseif($view_mode=='imagetile_item'):?>
  <div class="imagetile-item-wrapper">
    <h4><?php print l($title,'node/'.$node->nid, array('html'=>TRUE)); ?></h4>

    <?php print render($content['field_image']);?>
    <div class="imagetile-item-content <?php if(!isset($content['field_image'])) print "no-image";?>">
      <div class="property-bar">
        <?php print render($content['field_event_time']);?>
        <?php if(isset($node->field_location[$node->language][0]['name'])):?>
          <div class="event-location-name"><?php print $node->field_location[$node->language][0]['name']; ?></div>
        <?php endif;?>
        <?php print render($content['field_event_category']);?>
        <?php print render($content['field_event_target']);?>
      </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    </div>
  </div>



<?php elseif($view_mode=='list_item'):?>
  <div class="list-item-wrapper">
    <div class="list-item-content">
      <div class="property-bar">
        <?php print render($content['field_event_time']);?>
        <?php if(isset($node->field_location[$node->language][0]['name'])):?>
          <div class="event-location-name"><?php print $node->field_location[$node->language][0]['name']; ?></div>
        <?php endif;?>
        <?php print render($content['field_event_category']);?>
        <?php print render($content['field_event_target']);?>
      </div>
    </div>
    <h4><?php print l($title,'node/'.$node->nid, array('html'=>TRUE)); ?></h4>
  </div>
<?php endif; ?>
