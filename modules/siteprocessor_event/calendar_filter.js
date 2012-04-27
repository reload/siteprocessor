jQuery(function($){
  $('.mini-day-on').click(function(e) {
    e.preventDefault();
    link = $(this).children('a').attr('href');
    splittetLink = link.split('/');

    $('input[name="field_event_time_value[min][date]"]').val(splittetLink[splittetLink.length -1]);
    $('input[name="field_event_time_value[max][date]"]').val(splittetLink[splittetLink.length -1]);
    $('.view-id-search_for_events_by_calendar select').trigger('change');
  });
});
