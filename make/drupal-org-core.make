api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.37

# patches

; Allow install profiles to change the system requirements
projects[drupal][patch][1772316] = https://www.drupal.org/files/issues/drupal-7.x-allow_profile_change_sys_req-1772316-28.patch

; Registry rebuild should not parse the same file twice in the same request
projects[drupal][patch][] = https://www.drupal.org/files/issues/drupal-1470656-26.patch

defaults[projects][subdir] = "contrib"
