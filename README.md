# Empowered Distro

This is an Drupal Installation Profile that provides a full Drupal 7.x installation plus a bunch of contrib modules and libraries. Focus was on identifying most critical contrib modules (related to administration, content editing, security and user interface).


## Building

Building the distro from scratch will require Drush (6+)

```shell
# Get the codebase
git clone git@github.com:pauloamgomes/empowered-drupal.git

# Enter cloned repo and build drupal on webroot
drush make --prepare-install make/build-empowered.make /webroot

# Copy the installation profile to your profiles directory
cp -r empowered /webroot/profiles
```

## Installation

Installation can be executed directly from drupal's default installer or using drush:

```shell
drush site-install empowered_profile --db-url="mysql://DB_USER:DB_PASS@locahost/DBNAME"
```

## Contrib modules

Module | Version
--- | ---
admin_menu | 3.0-rc5
admin_views | 1.4
module_filter | 2.0
ctools | 1.7
date | 2.8
features | 2.4
feeds | 2.0-alpha8
email | 1.3
entityreference | 1.1
entitycache | 1.2
field_group | 1.4
field_group_multiple | 1.0-beta3
field_validation | 2.4
link | 1.3
htmlmail | 2.65
mailsystem | 2.34
file_lock | 2.0
media | 1.5
media_youtube | 2.0-rc5
plupload | 1.7
diff | 3.2
entity | 1.6
job_scheduler | 2.0-alpha3
libraries | 2.2
linkit | 3.3
m4032404 | 1.0-beta2
menu_attributes | 1.0-rc3
pathauto | 1.2
strongarm | 2.0
token | 1.6
transliteration | 3.2
globalredirect | 1.5
rules | 2.9
uuid | 1.0-alpha6
ckeditor | 1.16
jquery_update | 2.5
views | 3.10
views_litepager | 3.0
views_bulk_operations | 3.2
webform | 4.7
webform_validation | 1.9
xmlsitemap | 2.2
fences | 1.0
i18n | 1.12
i18nviews | 3.x-dev
l10n_update | 2.0
select2 | 1.x-dev
elysia_cron | 2.1
imageapi_optimize | 1.2
panels | 3.5
panelizer | 3.1
bean | 1.9
image_link_formatter | 1.0
search_api | 1.14
feeds_tamper | 1.0
globalredirect | 1.5
redirect | 1.0-rc1
rabbit_hole | 2.23
variable | 2.5
backup_migrate | 3.1
flood_control | 1.0
password_policy | 1.11
security_review | 1.2
login_security | 1.9
session_limit | 2.0
seckit | 1.9
username_enumeration_prevention | 1.0
securepages | 1.0-beta2
restrict_by_ip | 3.0
devel | 1.5
coder | 2.5
reroute_email | 1.2
masquerade | 1.0-rc7
devel_contrib | 1.0
search_krumo | 1.6

## Libraries
Library | Version
--- | ---
plupload | 1.5.6
Select2 | 3.4.5

