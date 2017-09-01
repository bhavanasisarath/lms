<?php

/**
 * @file
 * Trianz university admin configurations file. 
 */

/**
 * Trianz universitry admin settings form.
 */
function trianzkm_university_settings_admin_form($form, &$form_state) {
  $form['company_designations'] = array(
    '#type' => 'textarea',
    '#title' => t('Company Designations'),
    '#default_value' => variable_get('company_designations', ''),
    '#description' => t('Provide company designations data.'),
    '#required' => TRUE,
  );
  $form['company_grades'] = array(
    '#type' => 'textarea',
    '#title' => t('Company Grades'),
    '#default_value' => variable_get('company_grades', ''),
    '#description' => t('Provide company grades data.'),
    '#required' => TRUE,
  );
  $form['company_practice'] = array(
    '#type' => 'textarea',
    '#title' => t('Company Practices'),
    '#default_value' => variable_get('company_practice', ''),
    '#description' => t('Provide company practce data.'),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}
