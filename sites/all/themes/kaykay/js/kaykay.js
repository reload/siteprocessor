jQuery(document).ready(function() {
  jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('clear','left');
  jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('margin-right','20px');
  jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+2)').css('margin-right','20px');

  jQuery('.pane-views-panes').ajaxStop(function(){
    jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('clear','left');
    jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+1)').css('margin-right','20px');
    jQuery('.panel-col-1-1 li.imagetile-item:nth-child(3n+2)').css('margin-right','20px');
  });
});

