<div class="panel-100-25-50-25-100 row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="region top span12">
    <div class="inner">
      <?php print $content['1']; ?>
    </div>
  </div>

  <div class="region left span3">
    <div class="inner">
      <?php print $content['2_1']; ?>
    </div>
  </div>

  <div class="region middle span6">
    <div class="inner">
      <?php print $content['2_2']; ?>
    </div>
  </div>

  <div class="region right span3">
    <div class="inner">
      <?php print $content['2_3']; ?>
    </div>
  </div>

  <div class="region bottom span12">
    <div class="inner">
      <?php print $content['3']; ?>
    </div>
  </div>
</div>

