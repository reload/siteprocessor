jQuery(function($){
  $('.mini-day-on').click(function(e) {
    e.preventDefault();
    link = $(this).children('a').attr('href');
    splittetLink = link.split('/');

    $('input[name="field_event_time_value[min][date]"]').val(splittetLink[4]);
    $('input[name="field_event_time_value[max][date]"]').val(splittetLink[4]);
    $('input[name="field_event_time_value[max][date]"]').change();
  });
});
