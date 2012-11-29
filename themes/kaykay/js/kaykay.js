var fixTileHeights=function(){
  var maxHeight=0;
  var lastLine=[];
  var lastYPos=0;
  var yPos=0;
  jQuery('.imagetile-item').each(function(){
    yPos=jQuery(this).offset().top;
    if((yPos-lastYPos)>1 && lastYPos>0) {
      for(var i in lastLine){
        maxHeight=Math.max(maxHeight,jQuery(lastLine[i]).height());
      }
      for(var i in lastLine){
        jQuery(lastLine[i]).height(maxHeight);
      }
      lastLine=[];
      maxHeight=0;
    }
    lastYPos=yPos;
    lastLine.push(this);
  });
}

jQuery(document).ready(function() {
  // Load external links in new tab/window.
  jQuery("a[href^=http]").each(function(){
      if(this.href.indexOf(location.hostname) == -1) {
         jQuery(this).attr({
            target: "_blank"
         });
      }
   })
  jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('clear','left');
  jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('margin-right','22px');
  jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+2)').css('margin-right','22px');
  fixTileHeights();
  jQuery('.pane-views-panes').ajaxStop(function(){
    jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('clear','left');
    jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('margin-right','22px');
    jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+2)').css('margin-right','22px');
    fixTileHeights();
  });
});

