# Installations profile #

## Installation ##

### Automatic installation ###

Create a folder where you want the site.

	mkdir WEBFOLDER

Go into that folder

	cd WEBFOLDER

Execute the build_siteprocessor.make file

	drush make https://raw.github.com/reload/siteprocessor/master/build_siteprocessor.make

### Manual installation ###

Download drupal 7.x core.

	cd DRUPAL/profiles

Fetch the installation profile from git.

	git clone https://github.com/reload/siteprocessor.git

Go back to drupal core directory

	cd ../

Install SiteProcessor profile.

	drush make --no-core profiles/siteprocessor/siteprocessor.make


### Step 2 ###
After that, in your browser go to your new site, and install it. Choose the SiteProcessor profile.
