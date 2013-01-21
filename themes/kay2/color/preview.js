// Handle the color changes and update the preview window.
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Background
      $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bodybg]"]', form).val());
      $('#preview #preview-main', form).css('background-color', $('#palette input[name="palette[bg]"]', form).val());
      $('#preview-right-container .styled ul > li', form).css('background-color', $('#palette input[name="palette[sideblockbg]"]').val());
      $('#preview-right-container .styled .content, #preview-right-container .block h2', form).css('border-bottom-color', $('#palette input[name="palette[sideblockbg]"]').val());
      $('#preview-right-container .styled .content').css('border-top-color', $('#palette input[name="palette[sideblockbgshade]"]').val());
      $('#preview-right-container .styled ul > li').css('border-bottom-color', $('#palette input[name="palette[sideblockbgshade]"]').val());

      // Side menu
      $('#preview-right-container .sidemenu ul > li').css('background-color', $('#palette input[name="palette[sidemenubg]"]').val());
      $('#preview-right-container .sidemenu ul > li').css('border-bottom-color', $('#palette input[name="palette[sidemenubgshade]"]').val());
      $('#preview-right-container .sidemenu ul > li.hovered').css('background-color', $('#palette input[name="palette[sidemenubghover]"]').val());
      $('#preview-right-container .sidemenu .content, #preview-right-container .sidemenu h2').css('border-bottom-color', $('#palette input[name="palette[sidemenubg]"]').val());
      $('#preview-right-container .sidemenu .content').css('border-top-color', $('#palette input[name="palette[sidemenubgshade]"]').val());

      // Text
      $('#preview #preview-main', form).css('color', $('#palette input[name="palette[text]"]', form).val());
 
      // Titles
      $('#preview #preview-main h1, #preview #preview-main h2', form).css('color', $('#palette input[name="palette[title]"]', form).val());

      $('#preview #preview-right-container .block h2', form).css('background-color', $('#palette input[name="palette[mainmenubgtop]"]', form).val());
      $('#preview #preview-right-container .block h2', form).css('color', $('#palette input[name="palette[mainmenucolor]"]', form).val());

      // Links
      $('#preview #preview-main a', form).css('color', $('#palette input[name="palette[linkcolor]"]', form).val());
      $('#preview #preview-main a:hover', form).css('color', $('#palette input[name="palette[linkhover]"]', form).val());
      $('#preview #preview-main .secondary a', form).css('color', $('#palette input[name="palette[secondarylinkcolor]"]', form).val());
      $('#preview #preview-main .secondary a:hover', form).css('color', $('#palette input[name="palette[secondarylinkhover]"]', form).val());
 
      // Main menu background color
      $('#preview #preview-main-menu-links', form).css('backgroundColor', $('#palette input[name="palette[mainmenubg]"]', form).val());

      // Menu item link color
      $('#preview #preview-main-menu-links li a', form).css('color', $('#palette input[name="palette[mainmenucolor]"]', form).val());
 
      // Menu item active link color
      $('#preview ul#preview-main-menu-links li a.active', form).css('color', $('#palette input[name="palette[mainmenucolor]"]', form).val());
 
      // CSS3 Gradients.
      var gradient_start = $('#palette input[name="palette[mainmenubgtop]"]', form).val();
      var gradient_end = $('#palette input[name="palette[mainmenubgbottom]"]', form).val();
 
      $('#preview #preview-main-menu-links', form).attr('style', "background-color: " + gradient_start + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_start + "), to(" + gradient_end + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_start + ", " + gradient_end + ");");

      $('#preview #preview-main-menu-links li a.active', form).attr('style', "background-color: " + gradient_end + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_end + "), to(" + gradient_start + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_end + ", " + gradient_start + ");");

    }
  };
})(jQuery);
