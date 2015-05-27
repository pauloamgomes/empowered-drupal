; +++++ Libraries +++++

; Plupload
libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "library"
libraries[plupload][destination] = "libraries"
libraries[plupload][patch][] = "https://www.drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-21.patch"
libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"

; jquery ui multiselect widget
libraries[multiselect][type] = "libraries"
libraries[multiselect][download][type] = "file"
libraries[multiselect][download][url] = "https://github.com/ehynds/jquery-ui-multiselect-widget/archive/1.13.zip"
libraries[multiselect][directory_name] = "jquery-ui-multiselect-widget"
libraries[multiselect][destination] = "libraries"

; imagesloaded - dependency for manual crop
libraries[imagesloaded][type] = "libraries"
libraries[imagesloaded][download][type] = "file"
libraries[imagesloaded][download][url] = "https://github.com/desandro/imagesloaded/archive/v2.1.2.tar.gz"
libraries[imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[imagesloaded][destination] = "libraries"

; imgAreaSelect - dependency for manual crop
libraries[imgAreaSelect][type] = "libraries"
libraries[imgAreaSelect][download][type] = "file"
libraries[imgAreaSelect][download][url] = "http://odyniec.net/projects/imgareaselect/jquery.imgareaselect-0.9.10.zip"
libraries[imgAreaSelect][directory_name] = "jquery.imgareaselect"
libraries[imgAreaSelect][destination] = "libraries"

; ckeditor 4.4.7
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.7/ckeditor_4.4.7_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; ckeditor twitter bootstrap skin
libraries[bootstrapck][type] = "libraries"
libraries[bootstrapck][download][type] = "file"
libraries[bootstrapck][download][url] = "http://download.ckeditor.com/bootstrapck/releases/bootstrapck_1.0_0.zip"
libraries[bootstrapck][directory_name] = "bootstrapck"
libraries[bootstrapck][destination] = "libraries/ckeditor/skins"

; ckeditor lineutils plugin
libraries[lineutils][type] = "libraries"
libraries[lineutils][download][type] = "file"
libraries[lineutils][download][url] = "http://download.ckeditor.com/lineutils/releases/lineutils_4.4.7.zip"
libraries[lineutils][directory_name] = "lineutils"
libraries[lineutils][destination] = "libraries/ckeditor/plugins"

; ckeditor widget plugin
libraries[widget][type] = "libraries"
libraries[widget][download][type] = "file"
libraries[widget][download][url] = "http://download.ckeditor.com/widget/releases/widget_4.4.7.zip"
libraries[widget][directory_name] = "widget"
libraries[widget][destination] = "libraries/ckeditor/plugins"
