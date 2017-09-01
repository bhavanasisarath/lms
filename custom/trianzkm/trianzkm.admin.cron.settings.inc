<?php

/**
 * @file
 * Defines cron job urls for the Trianz modules.
 */

/**
 * Implements hook_cronapi().
 * Allows data import from LDAP and EBIZ based on the time of everyday.
 */
function trianzkm_cronapi($op, $job = NULL) {
  $items = array();

  $items['trianzkm_import_ldap_users'] = array(
    'title' => 'Cron for Import users from LDAP',
    'scheduler' => array(
      'name' => 'crontab',
      'crontab' => array(
        'rules' => array(
          '00 6 * * *'
        ),
      ),
    ),
  );

  $items['trianzkm_import_ebiz_users'] = array(
    'title' => 'Cron for Import users data from EBIZ',
    'scheduler' => array(
      'name' => 'crontab',
      'crontab' => array(
        'rules' => array(
          '30 6 * * *'
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Import users from LDAP.
 */
function trianzkm_import_ldap_users($job) {
  $ldapquery = ldap_query_get_queries("pull_ldap_users", "enabled", TRUE, TRUE);
  $ldap_users = $ldapquery->query();

  foreach ($ldap_users as $ldap_user) {
    $username = isset($ldap_user['samaccountname'][0]) ? $ldap_user['samaccountname'][0] : '';
    $email = isset($ldap_user['mail'][0]) ? $ldap_user['mail'][0] : '';
    $employee_id = isset($ldap_user['employeeid'][0]) ? $ldap_user['employeeid'][0] : '';
    if (!empty($username) && !empty($email) && filter_var($email, FILTER_VALIDATE_EMAIL) && !empty($employee_id)) {
      $existing_user_check = trianzkm_existing_user_check($email);
      if ($existing_user_check == 0) {
        $ldap_user_conf = ldap_user_conf();
        $user_edit = array('name' => $username);
        $save = TRUE;
        $ldap_user_conf->provisionDrupalAccount(NULL, $user_edit, NULL, $save);
      }
      else {
        ldap_user_synch_to_drupal($ldap_user['samaccountname'][0]);
      }
    }
  }
  watchdog('cron', 'LDAP Users have been imported successfully!');
}

/**
 * Migrate EBIZ data into Drupal Trianz KM.
 */
function trianzkm_import_ebiz_users() {
  $users = entity_load('user');
  foreach ($users as $key => $value) {
    if (!empty($value->field_employee_code)) {
      if ($value->field_employee_code[LANGUAGE_NONE]['0']['value'] != 1) {
        $cc = $value->field_employee_code[LANGUAGE_NONE]['0']['value'];
        // This is the json array from the "APIs".
        $json = "https://nylskillpoc.trianz.com/EnterpriseServices/NYLSkillPoc/NYLSkill.svc/SelfServiceDetails?EmployeeID=";

        // Append the campus code to the url so you can dynamically use the url.
        $url = $json . $cc;

        // Retreive and parse the json from URL.
        $request = drupal_http_request($url);
        $user_data = drupal_json_decode($request->data);
        $user = user_load($value->uid);

        $edit['field_region'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['Region']) ? trim($user_data[0]['Region']) : '';
        $edit['field_previous_experience'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['PreviousExperience']) ? trim($user_data[0]['PreviousExperience']) : '';
        $locations_id = trianzkm_taxonomy_term_tid("locations", $user_data[0]['Location']);
        if (isset($locations_id)) {
          $edit['field_emp_location'][LANGUAGE_NONE][0]['tid'] = $locations_id;
        }
        $edit['field_gender'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['Gender']) ? trim($user_data[0]['Gender']) : '';
        if (isset($user_data[0]['DOB'])) {
          $edit['field_date_of_birth'][LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime(str_replace('/', '-', $user_data[0]['DOB'])));
        }
        $business_group_id = trianzkm_node_identify("business_group", trim($user_data[0]['BusinessGroup']));
        if (isset($business_group_id)) {
          $edit['field_business_group'][LANGUAGE_NONE][0]['target_id'] = $business_group_id;
        }
        $costcenter_id = trianzkm_node_identify("costcenter", trim($user_data[0]['CostCenter']));
        if (isset($costcenter_id)) {
          $edit['field_cost_center'][LANGUAGE_NONE][0]['target_id'] = $costcenter_id;
        }
        if (isset($user_data[0]['DOJ'])) {
          $edit['field_date_of_joining'][LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime(str_replace('/', '-', $user_data[0]['DOJ'])));
        }
        $edit['field_grade'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['Grade']) ? trim($user_data[0]['Grade']) : '';
        $edit['field_highest_degree'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['HighestDegree']) ? trim($user_data[0]['HighestDegree']) : '';
        //$edit['field_servicing_notice_period'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['IsServicingNoticePeriod']) ? $user_data[0]['IsServicingNoticePeriod'] : '';
        $edit['field_locationtype'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['LocationType']) ? trim($user_data[0]['LocationType']) : '';
        $edit['field_region'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['Region']) ? trim($user_data[0]['Region']) : '';
        $edit['field_mobile_number'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['MobileNumber']) ? trim($user_data[0]['MobileNumber']) : '';
        $edit['field_trianz_experience'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['TrianzExp']) ? trim($user_data[0]['TrianzExp']) : '';
        $edit['field_emp_address'][LANGUAGE_NONE][0]['value'] = isset($user_data[0]['PermanentAddress']) ? trim($user_data[0]['PermanentAddress']) : '';

        // Get the field collection ID for Assignments details
        $assignment_eid = isset($user->field_employment_details_[LANGUAGE_NONE][0]['value']) ? $user->field_employment_details_[LANGUAGE_NONE][0]['value'] : '';
        if (!empty($assignment_eid)) {
          $assignment_item = entity_load('field_collection_item', array($assignment_eid));
          foreach ($user_data[0]['Assignments'] as $key => $value) {
            $assignment_item[$assignment_eid]->field_employment_title[LANGUAGE_NONE][$key]['value'] = isset($value['ProjectCode']) ? trim($value['ProjectCode']) : '';
            $assignment_item[$assignment_eid]->field_project_manager[LANGUAGE_NONE][$key]['value'] = isset($value['ProjectManager']) ? trim($value['ProjectManager']) : '';
            $assignment_item[$assignment_eid]->field_assis_project_name[LANGUAGE_NONE][$key]['target_id'] = trianzkm_node_identify("project_listing", trim($value['ProjectName']));
            if (isset($value['StartDate'])) {
              $assignment_item[$assignment_eid]->field_project_duration[LANGUAGE_NONE][$key]['value'] = date('Y-m-d H:i:s', strtotime(str_replace('/', '-', trim($value['StartDate']))));
            }
            if (isset($value['EndDate'])) {
              $assignment_item[$assignment_eid]->field_project_duration[LANGUAGE_NONE][$key]['value2'] = date('Y-m-d H:i:s', strtotime(str_replace('/', '-', trim($value['EndDate']))));
            }
            $assignment_item[$assignment_eid]->field_project_billing_status[LANGUAGE_NONE][$key]['value'] = isset($value['BillingStatus']) ? trim($value['BillingStatus']) : '';
            $assignment_item[$assignment_eid]->field_project_status_task_[LANGUAGE_NONE][$key]['value'] = isset($value['Status']) ? trim($value['Status']) : '';
            $assignment_item[$assignment_eid]->field_employement_utilizat[LANGUAGE_NONE][$key]['value'] = isset($value['Utilization']) ? trim($value['Utilization']) : '';
            $assignment_item[$assignment_eid]->save(TRUE);
          }
        }
        else {
          $assignment_item = array();
          $assignment_item['field_name'] = 'field_employment_details_';
          if (isset($user_data[0]['Assignments'])) {
            foreach ($user_data[0]['Assignments'] as $key => $value) {
              $assignment_item['field_employment_title'][LANGUAGE_NONE][0]['value'] = isset($value['ProjectCode']) ? trim($value['ProjectCode']) : '';
              $assignment_item['field_project_manager'][LANGUAGE_NONE][0]['value'] = isset($value['ProjectManager']) ? trim($value['ProjectManager']) : '';
              $assignment_item['field_assis_project_name'][LANGUAGE_NONE][0]['target_id'] = trianzkm_node_identify("project_listing", trim($value['ProjectName']));
              if (isset($value['StartDate'])) {
                $assignment_item['field_project_duration'][LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime(str_replace('/', '-', trim($value['StartDate']))));
              }
              if (isset($value['EndDate'])) {
                $assignment_item['field_project_duration'][LANGUAGE_NONE][0]['value2'] = date('Y-m-d H:i:s', strtotime(str_replace('/', '-', trim($value['EndDate']))));
              }
              $assignment_item['field_project_billing_status'][LANGUAGE_NONE][0]['value'] = isset($value['BillingStatus']) ? trim($value['BillingStatus']) : '';
              $assignment_item['field_project_status_task_'][LANGUAGE_NONE][0]['value'] = isset($value['Status']) ? trim($value['Status']) : '';
              $assignment_item['field_employement_utilizat'][LANGUAGE_NONE][0]['value'] = isset($value['Utilization']) ? trim($value['Utilization']) : 0;
              $entity = entity_create('field_collection_item', $assignment_item);
              $entity->setHostEntity('user', $user);
              $entity->save();
            }
          }
        }

        // Get the field collection ID for Skills details.
        $skills_eid = isset($user->field_personal_skills[LANGUAGE_NONE][0]['value']) ? $user->field_personal_skills[LANGUAGE_NONE][0]['value'] : '';
        if (!empty($skills_eid)) {
          $skills_item = entity_load('field_collection_item', array($skills_eid));
          if (isset($user_data[0]['Skills'])) {
            foreach ($user_data[0]['Skills'] as $key => $value) {
              $skills_item[$skills_eid]->field_skill_category[LANGUAGE_NONE][$key]['value'] = isset($value['SkillCategory']) ? trim($value['SkillCategory']) : '';
              $skills_item[$skills_eid]->field_employee_skill[LANGUAGE_NONE][$key]['tid'] = trianzkm_taxonomy_term_tid("skills", trim($value['Skillset']));
              $skills_item[$skills_eid]->save(TRUE);
            }
          }
        }
        else {
          $skills_item = array();
          $skills_item['field_name'] = 'field_personal_skills';
          if (isset($user_data[0]['Skills'])) {
            foreach ($user_data[0]['Skills'] as $key => $value) {
              $skills_item['field_skill_category'][LANGUAGE_NONE][0]['value'] = isset($value['SkillCategory']) ? trim($value['SkillCategory']) : '';
              $skills_item['field_employee_skill'][LANGUAGE_NONE][0]['tid'] = trianzkm_taxonomy_term_tid("skills", trim($value['Skillset']));
              $entity = entity_create('field_collection_item', $skills_item);
              $entity->setHostEntity('user', $user);
              $entity->save();
            }
          }
        }
        user_save($user, $edit);
      }
    }
  }
  watchdog('cron', 'EBIZ data has been migrated successfully!');
}