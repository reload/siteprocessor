# Installations profile #

## Installation ##

Download drupal 7.x core.

	cd DRUPAL/profiles

Fetch the installation profile from git.

	git clone https://github.com/reload/siteprocessor.git

Go back to drupal core directory

	cd ../

Install SiteProcessor profile.

	drush make --no-core profiles/siteprocessor/siteprocessor.make

After that, in your browser go to your new site, and install it. Choose the SiteProcessor profile.