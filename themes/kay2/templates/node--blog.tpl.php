<?php
hide($content['comments']);
?>
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
      print render($content);
    ?>
  </div>
  <?php print render($content['comments']); ?>
</div>