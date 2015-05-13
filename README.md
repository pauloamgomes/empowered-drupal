# Empowered Distro

  ___                                       _ 
 | __|_ __  _ __  _____ __ _____ _ _ ___ __| |
 | _|| '  \| '_ \/ _ \ V  V / -_) '_/ -_) _` |
 |___|_|_|_| .__/\___/\_/\_/\___|_| \___\__,_|
           |_|                                

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

