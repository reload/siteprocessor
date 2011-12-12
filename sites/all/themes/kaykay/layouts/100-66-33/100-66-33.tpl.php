<div class="panel-display panel-100-66-33 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="toparea-wrapper">
    <div class="center-wrapper panel-row panel-row-1 panel-row-first clearfix">
      <div class="panel-panel panel-col panel-col-last panel-col-first">
        <div class="inside"><?php print $content['1']; ?></div>
      </div>
    </div>
  </div>
  <div class="content-wrapper">
    <div class="center-wrapper panel-row panel-row-2 panel-row-last panel-row-split clearfix">
      <div class="panel-panel panel-col panel-col-first panel-col-maincontent">
        <div class="inside"><?php print $content['2_1']; ?></div>
      </div>
      <div class="panel-panel panel-col panel-col-last panel-col-right panel-sidebar">
        <div class="inside"><?php print $content['2_2']; ?></div>
      </div>
    </div>
  </div>
</div>
