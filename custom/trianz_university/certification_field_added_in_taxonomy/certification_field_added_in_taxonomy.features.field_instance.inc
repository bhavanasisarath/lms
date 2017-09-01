<?php
/**
 * @file
 * certification_field_added_in_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function certification_field_added_in_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_skill_certifications-field_certification_description'.
  $field_instances['field_collection_item-field_skill_certifications-field_certification_description'] = array(
    'bundle' => 'field_skill_certifications',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_certification_description',
    'label' => 'Certification Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_skill_certifications-field_certification_name'.
  $field_instances['field_collection_item-field_skill_certifications-field_certification_name'] = array(
    'bundle' => 'field_skill_certifications',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_certification_name',
    'label' => 'Certification Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-skills_set-field_add_skill_certification'.
  $field_instances['taxonomy_term-skills_set-field_add_skill_certification'] = array(
    'bundle' => 'skills_set',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you want add certification, please check this checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_add_skill_certification',
    'label' => 'Add Skill Certification',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-skills_set-field_skill_certifications'.
  $field_instances['taxonomy_term-skills_set-field_skill_certifications'] = array(
    'bundle' => 'skills_set',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_skill_certifications',
    'label' => 'Certifications',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Skill Certification');
  t('Certification Description');
  t('Certification Name');
  t('Certifications');
  t('If you want add certification, please check this checkbox.');

  return $field_instances;
}
