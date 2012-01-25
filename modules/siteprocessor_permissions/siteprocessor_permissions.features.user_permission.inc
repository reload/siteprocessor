<?php
/**
 * @file
 * siteprocessor_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function siteprocessor_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'editor',
      3 => 'site admin',
      4 => 'superadmin',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer date tools
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'features',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'image',
  );

  // Exported permission: administer jquery colorpicker
  $permissions['administer jquery colorpicker'] = array(
    'name' => 'administer jquery colorpicker',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'jquery_colorpicker',
  );

  // Exported permission: administer languages
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer media
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodequeue
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer site processor custom css
  $permissions['administer site processor custom css'] = array(
    'name' => 'administer site processor custom css',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config_visual',
  );

  // Exported permission: administer site processor images
  $permissions['administer site processor images'] = array(
    'name' => 'administer site processor images',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config_visual',
  );

  // Exported permission: administer siteprocessor colors
  $permissions['administer siteprocessor colors'] = array(
    'name' => 'administer siteprocessor colors',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config_visual',
  );

  // Exported permission: administer siteprocessor configuration
  $permissions['administer siteprocessor configuration'] = array(
    'name' => 'administer siteprocessor configuration',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config',
  );

  // Exported permission: administer siteprocessor footer
  $permissions['administer siteprocessor footer'] = array(
    'name' => 'administer siteprocessor footer',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_footer',
  );

  // Exported permission: administer siteprocessor layout configuration
  $permissions['administer siteprocessor layout configuration'] = array(
    'name' => 'administer siteprocessor layout configuration',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config',
  );

  // Exported permission: administer siteprocessor theme configuration
  $permissions['administer siteprocessor theme configuration'] = array(
    'name' => 'administer siteprocessor theme configuration',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config',
  );

  // Exported permission: administer siteprocessor variable configuration
  $permissions['administer siteprocessor variable configuration'] = array(
    'name' => 'administer siteprocessor variable configuration',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'siteprocessor_config',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit media
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'media',
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: import media
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'features',
  );

  // Exported permission: manipulate all queues
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'superadmin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: opt-in or out of tracking
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'superadmin',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'superadmin',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'comment',
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'location',
  );

  // Exported permission: switch shortcut sets
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: translate interface
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'site admin',
      1 => 'superadmin',
    ),
    'module' => 'locale',
  );

  // Exported permission: use PHP for tracking visibility
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'filter',
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'date',
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'location',
  );

  // Exported permission: view media
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'superadmin',
    ),
    'module' => 'media',
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'location',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
      2 => 'sponsor',
      3 => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      0 => 'superadmin',
    ),
    'module' => 'location',
  );

  return $permissions;
}
