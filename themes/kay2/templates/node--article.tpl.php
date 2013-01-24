<?php  if($view_mode=='full'):?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="clearfix content"<?php print $content_attributes; ?>>
        <h1><?php print $title; ?></h1>
      <?php if(isset($content['body']) && $content['body']['#items'][0]['summary']): ?>
        <div class="summary"><?php print render($content['body']['#items'][0]['summary']); ?></div>
      <?php endif; ?>
      <div class="property-bar">
        <?php print t('Written by !author on !date',array('!author'=>$node->name,'!date'=>format_date($node->created,'article_long'))); ?>
      </div>
      <div class="fb-like" data-send="true" data-width="600" data-show-faces="false"></div>  
      <?php print render($content['field_image']);?>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_main_image']);
        hide($content['field_page_top_image']);
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
        <div class="article-created"><?php print format_date($node->created,'article_short');?></div>
        <?php if($node->name):?>
          <div class="article-author"><?php print $node->name; ?></div>
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
      <h4><?php print l($title,'node/'.$node->nid, array('html'=>TRUE)); ?></h4>
      <div class="property-bar">
        <div class="article-created"><?php print format_date($node->created,'article_short');?></div>
        <?php if($node->name):?>
          <div class="article-author"><?php print $node->name; ?></div>
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
        <div class="article-created"><?php print format_date($node->created,'article_short');?></div>
      </div>
    </div>
    <h4><?php print l($title,'node/'.$node->nid, array('html'=>TRUE)); ?></h4>
  </div>
<?php endif; ?>
