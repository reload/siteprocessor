//if (!jQuery.browser.msie || jQuery.browser.version >= 8) {
  (function(d, s, id) {
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) {
      return;
    }
    js = d.createElement(s); js.id = id;

    js.src = "//connect.facebook.net/" + Drupal.settings.siteprocessor_facebook_language + "/all.js#xfbml=1&appId=" + Drupal.settings.siteprocessor_facebook_appid;
    fjs.parentNode.insertBefore(js, fjs);
  }(document, 'script', 'facebook-jssdk'));
//}
