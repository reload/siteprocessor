api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.14"

projects[siteprocessor][type] = "profile"
projects[siteprocessor][download][type] = "git"
projects[siteprocessor][download][url] = "https://github.com/reload/siteprocessor.git"
;Set this branch to match the release/hotfix version, when making release/hotfixes and commit the changed file to the release/hotfix branch. In the develop branch, this should always be set to "develop"
projects[siteprocessor][download][revision] = "7.14-1.0.7-rc5"
