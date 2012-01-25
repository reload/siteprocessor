<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
      <h1><?php print $title; ?></h1>
    <?php if(isset($content['body']) && $content['body']['#items'][0]['summary']): ?>
      <div class="summary"><?php print render($content['body']['#items'][0]['summary']); ?></div>
    <?php endif; ?>
    <?php if ($display_submitted): ?>
      <div class="submitted">
        <?php print $submitted; ?>
      </div>
    <?php endif; ?>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_main_image']);
      print render($content);
    ?>
  </div>

  <?php if($node->showcomments):?>
    <div class="comments-box">
      <h2><?php print t('Comments');?></h2>
        <div class="fb-comments" data-num-posts="3" width="600" data-href="<?php print "http://" .$_SERVER['HTTP_HOST'] .$_SERVER['REQUEST_URI'];?>"></div>
    </div>
  <?php endif;?>
</div>
