<!DOCTYPE HTML>
<html>
  <head profile="<?php print isset($rdf) ? $rdf->profile : ''; ?>">
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <!--[if IE]>
      <link href="/profiles/siteprocessor/themes/kay2/css/ie.css" media="screen, projection" rel="stylesheet" type="text/css" />
    <![endif]-->
    <!--[if IE 8]>
      <link href="/profiles/siteprocessor/themes/kay2/css/ie8.css" media="screen, projection" rel="stylesheet" type="text/css" />
    <![endif]-->
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes;?>>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>
