api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.37

; +++++ Patches +++++

; Allow install profiles to change the system requirements
projects[drupal][patch][1772316] = https://www.drupal.org/files/issues/drupal-7.x-allow_profile_change_sys_req-1772316-28.patch

; Registry rebuild should not parse the same file twice in the same request
projects[drupal][patch][1470656] = https://www.drupal.org/files/issues/drupal-1470656-26.patch

; Load multiple revisions at once
; http://drupal.org/node/1730874
projects[drupal][patch][] = http://drupal.org/files/1730874_0.patch

; user_role_grant_permissions() throws PDOException when used for a disabled
; module's permission or with non-existent permissions
; http://drupal.org/comment/7285420#comment-7285420
projects[drupal][patch][] = "http://drupal.org/files/drupal-fix_pdoexception_grant_permissions-737816-36-do-not-test.patch"

; image_get_info always populates file_size, even if already set.
; http://drupal.org/node/2289493
projects[drupal][patch][] = "http://drupal.org/files/issues/drupal-2289493-3-image_get_info-filesize-D7.patch"

; Remove all occurences of sourceMappingURL and sourceURL
; when JS files are aggregated
; http://drupal.org/node/2400287
projects[drupal][patch][] = "http://drupal.org/files/issues/Issue-2400287-by-hass-Remove-JS-source-and-source-map-D7_0.patch"

; +++++ Settings +++++

defaults[projects][subdir] = "contrib"
