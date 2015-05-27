<?php
/**
 * @file
 * empowered_basic_contents.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function empowered_basic_contents_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Videos',
    'description' => 'Video related assets',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '65e03535-7ca8-4200-8fe6-cab46a917431',
    'vocabulary_machine_name' => 'media_folders',
    'parent' => array(
      0 => 'e8a0c35c-14ea-4d0f-b58a-02e5215c1c34',
    ),
  );
  $terms[] = array(
    'name' => 'Media Root',
    'description' => 'default media folder',
    'format' => NULL,
    'weight' => -10,
    'uuid' => '716424c5-f6ed-4b57-83a0-de39c75437be',
    'vocabulary_machine_name' => 'media_folders',
    'parent' => array(
      0 => 'a396fd9e-eb09-4dee-90d0-899d8751dab0',
    ),
  );
  $terms[] = array(
    'name' => 'Shared',
    'description' => 'Shared assets across website(s)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7d745998-d684-4267-9826-68d05c0679a5',
    'vocabulary_machine_name' => 'media_folders',
    'parent' => array(
      0 => 'e8a0c35c-14ea-4d0f-b58a-02e5215c1c34',
    ),
  );
  $terms[] = array(
    'name' => 'Media Root',
    'description' => 'default media folder',
    'format' => NULL,
    'weight' => 4,
    'uuid' => 'a396fd9e-eb09-4dee-90d0-899d8751dab0',
    'vocabulary_machine_name' => 'media_folders',
  );
  $terms[] = array(
    'name' => 'Pictures',
    'description' => 'Picture related assets',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf88cca2-0676-404c-ae47-696ca0e5634d',
    'vocabulary_machine_name' => 'media_folders',
    'parent' => array(
      0 => 'e8a0c35c-14ea-4d0f-b58a-02e5215c1c34',
    ),
  );
  $terms[] = array(
    'name' => 'Media Root',
    'description' => 'default media folder',
    'format' => NULL,
    'weight' => -10,
    'uuid' => 'e8a0c35c-14ea-4d0f-b58a-02e5215c1c34',
    'vocabulary_machine_name' => 'media_folders',
    'parent' => array(
      0 => '716424c5-f6ed-4b57-83a0-de39c75437be',
    ),
  );
  return $terms;
}
