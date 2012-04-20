api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.12"

project[calendar][subdir] = "contrib"
project[calendar][version] = "3.1"

projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][download][type] = "git"
projects[better_exposed_filters][download][url] = "http://git.drupal.org/project/better_exposed_filters.git"
projects[better_exposed_filters][download][revision] = "bafa93446ccc440645b80b11f85d398c3a3de74d"

projects[conditional_styles][subdir] = "contrib"
projects[conditional_styles][version] = "2.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0"

projects[date][subdir] = "contrib"
projects[date][version] = "2.5"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.2"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0"

projects[email][subdir] = "contrib"
projects[email][version] = "1.0"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0-beta6"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.2"

projects[jquery_colorpicker][subdir] = "contrib"
projects[jquery_colorpicker][version] = "1.0-beta3"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0"

projects[variable][subdir] = "contrib"
projects[variable][version] = "1.1"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.3"

projects[i18nviews][type] = "module"
projects[i18nviews][subdir] = "contrib"
projects[i18nviews][download][type] = "git"
projects[i18nviews][download][url] = "http://git.drupal.org/project/i18nviews.git"
projects[i18nviews][download][revision] = "3cd62248d392f52fc708a4f74ca5418470bb3ad7"

projects[location][type] = "module"
projects[location][subdir] = "contrib"
projects[location][download][type] = "git"
projects[location][download][url] = "http://git.drupal.org/project/location.git"
projects[location][download][revision] = "9d5228364d021e2192662d2d05ef538d20937c5c"

projects[media][subdir] = "contrib"
projects[media][version] = "1.0-rc3"

projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = "2.2"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.0-beta1"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.0-alpha3"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0-beta5"

projects[views][subdir] = "contrib"
projects[views][version] = "3.3"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.1"

projects[webtrends][type] = "module"
projects[webtrends][download][type] = "git"
projects[webtrends][download][url] = "https://github.com/reload/webtrends.git"
projects[webtrends][download][branch] = "7.x"

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5/ckeditor_3.5.tar.gz

;This file is from http://www.eyecon.ro/colorpicker/ but stored at github because the original location rejects all HTTP requests made with a "curl" user agent - and this makes life hard when using drush make....
libraries[colorpicker][download][type] = "get"
libraries[colorpicker][download][url] = "https://github.com/downloads/reload/siteprocessor/colorpicker.zip"
libraries[colorpicker][directory_name] = "colorpicker"
libraries[colorpicker][destination] = "modules/contrib/jquery_colorpicker"
