This module allows the user to:

*** Set up 3 images to be shown as background, logo and owner logo on the site ***
  using blocks and custom added CSS

Available at admin/config/siteprocessor/images

*** Enter custom CSS that will be added to the page views ***

Available at admin/config/siteprocessor/custom_css

*** Set site colors using a colorpicker interface ***

Available at admin/config/siteprocessor/colors

The color selection form is based on the colors defined in the .info file for
the theme, and any defined colors are inherited from parent base themes, but
clashing color names are overwritten by the selected theme.

Colors and color groups are defined like this:

  siteprocessor[color_groups][page]=Page
  siteprocessor[color_groups][content]=Content
  siteprocessor[colors][content][content_summary_text][name]=Content Summary Text
  siteprocessor[colors][content][content_summary_text][value]=444444
  siteprocessor[colors][page][page_body_text][name]=Page body text
  siteprocessor[colors][page][page_body_text][value]=000000

Groups have a key (machine name) and a name

Colors are placed in groups (based on groups' machine names) and have a machine
name, a name and a default value. All values have to be 6 hexadecimal digits,
WITHOUT the #. 3-digit colors like FFF are not accepted and should be written as
FFFFFF.

To use the colors on the page, a color temlate style sheet has to be created.

In the theme .info file, add a line with the path of the color_css template, and
use the theme name as key 

  siteprocessor[color_css][kaykay][]=css/colortemplate.css

This will add the file "css/colortemplate.css" from the theme kaykay to the list 
of color templates, that are added as extra CSS to the page views.

In the color template, custom colors can be referred like this:

  .node-event .event-properties .event-property {
    border-color:[[content_event_property_border]];
  }

  .node-event .event-properties .field-label{
    color: [[content_event_properties_label_text]];
  }

Remember the double square brackets, and leave out the # - it will be added
automatically. 