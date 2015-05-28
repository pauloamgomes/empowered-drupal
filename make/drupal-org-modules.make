; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc5"

projects[admin_views][version] = "1.4"

projects[module_filter][version] = "2.0"

projects[ctools][version] = "1.7"

projects[context][version] = "3.6"

projects[date][version] = "2.8"

projects[features][version] = "2.5"

projects[features_roles_permissions][version] = "1.2"

projects[uuid_features][version] = "1.0-alpha4"

projects[feeds][version] = "2.0-alpha8"

projects[email][version] = "1.3"

projects[entityreference][version] = "1.1"

projects[entitycache][version] = "1.2"

projects[field_group][version] = "1.4"

projects[field_group_multiple][version] = "1.0-beta3"

projects[field_collection][version] = "1.0-beta8"

projects[field_validation][version] = "2.4"

projects[link][version] = "1.3"

projects[htmlmail][version] = "2.65"

projects[mailsystem][version] = "2.34"

projects[file_lock][version] = "2.0"

projects[multiform][version] = "1.1"

projects[jquery_ui_multiselect_widget][version] = "1.12"

projects[media_youtube][version] = "2.0-rc5"

projects[plupload][version] = "1.7"

projects[diff][version] = "3.2"

projects[entity][version] = "1.6"

projects[job_scheduler][version] = "2.0-alpha3"

projects[libraries][version] = "2.2"

projects[linkit][version] = "3.3"

projects[m4032404][version] = "1.0-beta2"

projects[menu_attributes][version] = "1.0-rc3"

projects[pathauto][version] = "1.2"

projects[strongarm][version] = "2.0"

projects[token][version] = "1.6"

projects[token_insert][version] = "2.4"

projects[transliteration][version] = "3.2"

projects[globalredirect][version] = "1.5"

projects[rules][version] = "2.9"

projects[uuid][version] = "1.0-alpha6"

projects[jquery_update][version] = "2.5"

projects[views][version] = "3.11"

projects[views_litepager][version] = "3.0"

projects[views_bulk_operations][version] = "3.2"

projects[webform][version] = "4.7"

projects[webform_validation][version] = "1.9"

projects[xmlsitemap][version] = "2.2"

projects[fences][version] = "1.0"

projects[i18n][version] = "1.13"

projects[l10n_update][version] = "2.0"

projects[elysia_cron][version] = "2.1"

projects[imageapi_optimize][version] = "1.2"

projects[panels][version] = "3.5"

projects[panels_accordion][version] = "1.0"

projects[panelizer][version] = "3.1"

projects[bean][version] = "1.9"

projects[image_link_formatter][version] = "1.0"

projects[search_api][version] = "1.14"

projects[feeds_tamper][version] = "1.0"

projects[globalredirect][version] = "1.5"

projects[redirect][version] = "1.0-rc1"

projects[rabbit_hole][version] = "2.23"

projects[variable][version] = "2.5"

projects[backup_migrate][version] = "3.1"

projects[advanced_text_formatter][version] = "1.4"

projects[l10n_update][version] = "1.1"

projects[speedy][version] = "1.18"

; +++++ Modules Dev/specific revisions +++++
; dev versions - best practice is download from git using commit number and append reason

projects[media][version] = "2.x-dev"
; Issues with jquery on dialog browser
projects[oembed][version] = "2.x-dev"
projects[oembed][download][type] = "git"
projects[oembed][download][revision] = "9f7142b"
projects[oembed][download][branch] = "7.x-2.x"

; From Nov 24, 2014
; Issues with ckeditor
projects[oembed][version] = "1.x-dev"
projects[oembed][download][type] = "git"
projects[oembed][download][revision] = "1664b19"
projects[oembed][download][branch] = "7.x-1.x"

; From May 22, 2015
; For supporting Media 2.x
projects[media_browser_plus][version] = "3.x-dev"
projects[media_browser_plus][download][type] = "git"
projects[media_browser_plus][download][revision] = "86aa82a"
projects[media_browser_plus][download][branch] = "7.x-3.x"

; From Aug 15, 2014
; Stable release is too old
projects[views_tree][version] = "2.x-dev"
projects[views_tree][download][type] = "git"
projects[views_tree][download][revision] = "7dd712b"
projects[views_tree][download][branch] = "7.x-3.x"

; From Apr 21, 2015
; Issues with media
projects[file_entity][version] = "2.x-dev"
projects[file_entity][download][type] = "git"
projects[file_entity][download][revision] = "5effd7a"
projects[file_entity][download][branch] = "7.x-2.x"

; From May 26, 2015
; Issues with ckeditor
projects[entity_embed][version] = "1.x-dev"
projects[entity_embed][download][type] = "git"
projects[entity_embed][download][revision] = "1075ab9"
projects[entity_embed][download][branch] = "7.x-1.x"

; From Apr 01, 2015
; Multiple issues
projects[ckeditor][version] = "1.x-dev"
projects[ckeditor][download][type] = "git"
projects[ckeditor][download][revision] = "32f0973"
projects[ckeditor][download][branch] = "7.x-1.x"

; From Jan 30, 2015
; Issues with ckeditor
projects[wysiwyg_template][version] = "2.x-dev"
projects[wysiwyg_template][download][type] = "git"
projects[wysiwyg_template][download][revision] = "81ddf38"
projects[wysiwyg_template][download][branch] = "7.x-2.x"

; From Oct 23, 2014
; No stable version yet
projects[i18nviews][version] = "3.x-dev"
projects[i18nviews][download][type] = "git"
projects[i18nviews][download][revision] = "27e9809"
projects[i18nviews][download][branch] = "7.x-3.x"


; security

projects[flood_control][version] = "1.0"
projects[flood_control][subdir] = "security"

projects[password_policy][version] = "1.11"
projects[password_policy][subdir] = "security"

projects[security_review][version] = "1.2"
projects[security_review][subdir] = "security"

projects[login_security][version] = "1.9"
projects[login_security][subdir] = "security"

projects[session_limit][version] = "2.0"
projects[session_limit][subdir] = "security"

projects[seckit][version] = "1.9"
projects[seckit][subdir] = "security"

projects[username_enumeration_prevention][version] = "1.1"
projects[username_enumeration_prevention][subdir] = "security"

projects[securepages][version] = "1.0-beta2"
projects[securepages][subdir] = "security"

projects[restrict_by_ip][version] = "3.0"
projects[restrict_by_ip][subdir] = "security"

; dev tools

projects[devel][version] = "1.5"
projects[devel][subdir] = "dev"

projects[coder][version] = "2.5"
projects[coder][subdir] = "dev"

projects[reroute_email][version] = 1.2
projects[reroute_email][subdir] = "dev"

projects[masquerade][version] = "1.0-rc7"
projects[masquerade][subdir] = "dev"

projects[devel_contrib][version] = "1.0"
projects[devel_contrib][subdir] = "dev"

projects[search_krumo][version] = "1.6"
projects[search_krumo][subdir] = "dev"

projects[advanced_help][version] = "1.3"
projects[advanced_help][subdir] = "dev"


