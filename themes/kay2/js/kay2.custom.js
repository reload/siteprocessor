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
      var $button = $('<button class="toggleMenu" />');
      jRes.addFunc({
        breakpoint: 'handheld',
        enter: function() {
          $container.wrapInner('<div class="inner" />');
          $button.text('Menu').click(function(){
            
            if (!$button.hasClass('active')) {
              $('ul li', $container).hide().fadeIn(600);
            }

            else {
              $('ul li', $container).fadeOut(400);
            }

            $('ul', $container).slideToggle(500, function(){
              $button.toggleClass('active');
              $container.toggleClass('open');
            });
          }).insertBefore($container);
        },
        exit: function() {
          $('.toggleMenu').remove();
          $('ul', $container).unwrap().removeAttr('style');
          $('ul li', $container).removeAttr('style');
        }
      });
    }
  });

  $('.pane-page-primary-links').ddMenu();
});
