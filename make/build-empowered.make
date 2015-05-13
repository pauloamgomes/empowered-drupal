;  ___                                       _
; | __|_ __  _ __  _____ __ _____ _ _ ___ __| |
; | _|| '  \| '_ \/ _ \ V  V / -_) '_/ -_) _` |
; |___|_|_|_| .__/\___/\_/\_/\___|_| \___\__,_|
;           |_|

; Empowered make file for d.o. usage
api = 2
core = 7.x

defaults[projects][subdir] = "contrib"

; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make
includes[] = drupal-org-translations.make
includes[] = drupal-org-themes.make
includes[] = drupal-org-modules.make
includes[] = drupal-org-libraries.make



