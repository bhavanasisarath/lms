<?php
/**
 * @file
 * certification_field_added_in_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function certification_field_added_in_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'skills_set' => array(
      'name' => 'Skills Set',
      'machine_name' => 'skills_set',
      'description' => 'Skills with categories',
      'hierarchy' => 2,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
