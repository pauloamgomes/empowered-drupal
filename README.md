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
[admin_menu](http://drupal.org/project/admin_menu)  | 3.0-rc5
[admin_views](http://drupal.org/project/admin_views)  | 1.4
[module_filter](http://drupal.org/project/module_filter)  | 2.0
[ctools](http://drupal.org/project/ctools)  | 1.7
[date](http://drupal.org/project/date)  | 2.8
[features](http://drupal.org/project/features)  | 2.4
[feeds](http://drupal.org/project/feeds)  | 2.0-alpha8
[email](http://drupal.org/project/email)  | 1.3
[entityreference](http://drupal.org/project/entityreference)  | 1.1
[entitycache](http://drupal.org/project/entitycache)  | 1.2
[field_group](http://drupal.org/project/field_group)  | 1.4
[field_group_multiple](http://drupal.org/project/field_group_multiple)  | 1.0-beta3
[field_validation](http://drupal.org/project/field_validation)  | 2.4
[link](http://drupal.org/project/link)  | 1.3
[htmlmail](http://drupal.org/project/htmlmail)  | 2.65
[mailsystem](http://drupal.org/project/mailsystem)  | 2.34
[file_lock](http://drupal.org/project/file_lock)  | 2.0
[media](http://drupal.org/project/media)  | 1.5
[media_youtube](http://drupal.org/project/media_youtube)  | 2.0-rc5
[plupload](http://drupal.org/project/plupload)  | 1.7
[diff](http://drupal.org/project/diff)  | 3.2
[entity](http://drupal.org/project/entity)  | 1.6
[job_scheduler](http://drupal.org/project/job_scheduler)  | 2.0-alpha3
[libraries](http://drupal.org/project/libraries)  | 2.2
[linkit](http://drupal.org/project/linkit)  | 3.3
[m4032404](http://drupal.org/project/m4032404)  | 1.0-beta2
[menu_attributes](http://drupal.org/project/menu_attributes)  | 1.0-rc3
[pathauto](http://drupal.org/project/pathauto)  | 1.2
[strongarm](http://drupal.org/project/strongarm)  | 2.0
[token](http://drupal.org/project/token)  | 1.6
[transliteration](http://drupal.org/project/transliteration)  | 3.2
[globalredirect](http://drupal.org/project/globalredirect)  | 1.5
[rules](http://drupal.org/project/rules)  | 2.9
[uuid](http://drupal.org/project/uuid)  | 1.0-alpha6
[ckeditor](http://drupal.org/project/ckeditor)  | 1.16
[jquery_update](http://drupal.org/project/jquery_update)  | 2.5
[views](http://drupal.org/project/views)  | 3.10
[views_litepager](http://drupal.org/project/views_litepager)  | 3.0
[views_bulk_operations](http://drupal.org/project/views_bulk_operations)  | 3.2
[webform](http://drupal.org/project/webform)  | 4.7
[webform_validation](http://drupal.org/project/webform_validation)  | 1.9
[xmlsitemap](http://drupal.org/project/xmlsitemap)  | 2.2
[fences](http://drupal.org/project/fences)  | 1.0
[i18n](http://drupal.org/project/i18n)  | 1.12
[i18nviews](http://drupal.org/project/i18nviews)  | 3.x-dev
[l10n_update](http://drupal.org/project/l10n_update)  | 2.0
[select2](http://drupal.org/project/select2)  | 1.x-dev
[elysia_cron](http://drupal.org/project/elysia_cron)  | 2.1
[imageapi_optimize](http://drupal.org/project/imageapi_optimize)  | 1.2
[panels](http://drupal.org/project/panels)  | 3.5
[panelizer](http://drupal.org/project/panelizer)  | 3.1
[bean](http://drupal.org/project/bean)  | 1.9
[image_link_formatter](http://drupal.org/project/image_link_formatter)  | 1.0
[search_api](http://drupal.org/project/search_api)  | 1.14
[feeds_tamper](http://drupal.org/project/feeds_tamper)  | 1.0
[globalredirect](http://drupal.org/project/globalredirect)  | 1.5
[redirect](http://drupal.org/project/redirect)  | 1.0-rc1
[rabbit_hole](http://drupal.org/project/rabbit_hole)  | 2.23
[variable](http://drupal.org/project/variable)  | 2.5
[backup_migrate](http://drupal.org/project/backup_migrate)  | 3.1
[flood_control](http://drupal.org/project/flood_control)  | 1.0
[password_policy](http://drupal.org/project/password_policy)  | 1.11
[security_review](http://drupal.org/project/security_review)  | 1.2
[login_security](http://drupal.org/project/login_security)  | 1.9
[session_limit](http://drupal.org/project/session_limit)  | 2.0
[seckit](http://drupal.org/project/seckit)  | 1.9
[username_enumeration_prevention](http://drupal.org/project/username_enumeration_prevention)  | 1.0
[securepages](http://drupal.org/project/securepages)  | 1.0-beta2
[restrict_by_ip](http://drupal.org/project/restrict_by_ip)  | 3.0
[devel](http://drupal.org/project/devel)  | 1.5
[coder](http://drupal.org/project/coder)  | 2.5
[reroute_email](http://drupal.org/project/reroute_email)  | 1.2
[masquerade](http://drupal.org/project/masquerade)  | 1.0-rc7
[devel_contrib](http://drupal.org/project/devel_contrib)  | 1.0
[search_krumo](http://drupal.org/project/search_krumo)  | 1.6

## Libraries
Library | Version
--- | ---
[plupload](https://github.com/moxiecode/plupload) | 1.5.6
[Select2](https://github.com/ivaynberg/select2) | 3.4.5

