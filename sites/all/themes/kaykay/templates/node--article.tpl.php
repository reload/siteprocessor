<?php  if($view_mode=='full'):?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="clearfix content"<?php print $content_attributes; ?>>
        <h1><?php print $title; ?></h1>
      <?php if($content['body']['#items'][0]['summary']): ?>
        <div class="summary"><?php print render($content['body']['#items'][0]['summary']); ?></div>
      <?php endif; ?>
      <div class="property-bar">
        <?php print t('Written by !author on !date',array('!author'=>$node->name,'!date'=>format_date($node->created,'article_long'))); ?>
      </div>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_main_image']);
        print render($content);
      ?>
    </div>

    <?php /*FIXME move to module and print $comments*/if($node->comment==COMMENT_NODE_OPEN):?>
      <div class="comments-box">
        <h2><?php print t('Comments');?></h2>
        <div class="fb-comments" data-num-posts="3" width="600"></div>
      </div>
    <?php endif;?>
  </div>

<?php elseif($view_mode=='large_item'):?>
  <div class="large-item-wrapper">
    <?php print render($content['field_image']);?>
    <div class="large-item-content <?php if(!isset($content['field_image'])) print "no-image";?>">
      <h4><?php print l($title,'node/'.$node->nid); ?></h4>
      <div class="property-bar">
        <?php print format_date($node->created,'article_short');?>
        <?php if(isset($node->field_location[$node->language][0]['name'])):?>
          <div class="article-author"><?php print $node->author; ?></div>
        <?php endif;?>
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
      <h4><?php print l($title,'node/'.$node->nid); ?></h4>
      <div class="property-bar">
        <?php print format_date($node->created,'article_short');?>
        <?php if(isset($node->field_location[$node->language][0]['name'])):?>
          <div class="article-author"><?php print $node->author; ?></div>
        <?php endif;?>
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
        <?php print format_date($node->created,'article_short');?>
      </div>
    </div>
    <h4><?php print l($title,'node/'.$node->nid); ?></h4>
  </div>
<?php endif; ?>
