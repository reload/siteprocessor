var jRes = jRespond([
    {
        label: 'handheld',
        enter: 0,
        exit: 769
    },{
        label: 'tablet',
        enter: 770,
        exit: 979
    },{
        label: 'screen',
        enter: 980,
        exit: 10000
    }
]);

jQuery(function($){
  jQuery.fn.extend({
    ddMenu: function() {
      var $container = $('.pane-content', this);
      var $menu = $container.children();
      var $button = $('<button class="toggleMenu" />');
      jRes.addFunc({
        breakpoint: 'handheld',
        enter: function() {
          $menu.wrap('<div class="inner" />');
          $button.text('Menu').click(function(){
            
            if (!$button.hasClass('active')) {
              $menu.children().hide().fadeIn(400);
            }

            else {
              $menu.children().fadeOut(200);
            }

            $($menu).slideToggle(300, function(){
              $button.toggleClass('active');
              $container.toggleClass('open');
            });
          }).insertBefore($container);
        },
        exit: function() {
          $('.toggleMenu').remove();
          $container.removeAttr('style');
          $menu.unwrap().removeAttr('style');
          $menu.children().removeAttr('style');
        }
      });
    }
  });
  $('.pane-page-primary-links, .pane-system-main-menu').ddMenu();
});
