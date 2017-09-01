<?php
/**
 * @file
 * trianz_university_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trianz_university_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access coffee'.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user_roleform',
  );

  // Exported permission: 'change the training status'.
  $permissions['change the training status'] = array(
    'name' => 'change the training status',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'attendancetracker',
  );

  // Exported permission: 'create body'.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create competency_track content'.
  $permissions['create competency_track content'] = array(
    'name' => 'create competency_track content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create educational_organizations_school content'.
  $permissions['create educational_organizations_school content'] = array(
    'name' => 'create educational_organizations_school content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_participants_list'.
  $permissions['create field_participants_list'] = array(
    'name' => 'create field_participants_list',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_session_date_time'.
  $permissions['create field_session_date_time'] = array(
    'name' => 'create field_session_date_time',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_status'.
  $permissions['create field_status'] = array(
    'name' => 'create field_status',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_trainer'.
  $permissions['create field_trainer'] = array(
    'name' => 'create field_trainer',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_trg_name'.
  $permissions['create field_trg_name'] = array(
    'name' => 'create field_trg_name',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_venue'.
  $permissions['create field_venue'] = array(
    'name' => 'create field_venue',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create organization_name content'.
  $permissions['create organization_name content'] = array(
    'name' => 'create organization_name content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_listing content'.
  $permissions['create project_listing content'] = array(
    'name' => 'create project_listing content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sessions content'.
  $permissions['create sessions content'] = array(
    'name' => 'create sessions content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create training content'.
  $permissions['create training content'] = array(
    'name' => 'create training content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create university_master content'.
  $permissions['create university_master content'] = array(
    'name' => 'create university_master content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any competency_track content'.
  $permissions['delete any competency_track content'] = array(
    'name' => 'delete any competency_track content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any educational_organizations_school content'.
  $permissions['delete any educational_organizations_school content'] = array(
    'name' => 'delete any educational_organizations_school content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sessions content'.
  $permissions['delete any sessions content'] = array(
    'name' => 'delete any sessions content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training content'.
  $permissions['delete any training content'] = array(
    'name' => 'delete any training content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own competency_track content'.
  $permissions['delete own competency_track content'] = array(
    'name' => 'delete own competency_track content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own educational_organizations_school content'.
  $permissions['delete own educational_organizations_school content'] = array(
    'name' => 'delete own educational_organizations_school content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organization_name content'.
  $permissions['delete own organization_name content'] = array(
    'name' => 'delete own organization_name content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sessions content'.
  $permissions['delete own sessions content'] = array(
    'name' => 'delete own sessions content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training content'.
  $permissions['delete own training content'] = array(
    'name' => 'delete own training content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in competency_group'.
  $permissions['delete terms in competency_group'] = array(
    'name' => 'delete terms in competency_group',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in locations'.
  $permissions['delete terms in locations'] = array(
    'name' => 'delete terms in locations',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in roles_terms'.
  $permissions['delete terms in roles_terms'] = array(
    'name' => 'delete terms in roles_terms',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in skills'.
  $permissions['delete terms in skills'] = array(
    'name' => 'delete terms in skills',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in skills_set'.
  $permissions['delete terms in skills_set'] = array(
    'name' => 'delete terms in skills_set',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in trainings_terms'.
  $permissions['delete terms in trainings_terms'] = array(
    'name' => 'delete terms in trainings_terms',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'diff view changes'.
  $permissions['diff view changes'] = array(
    'name' => 'diff view changes',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'diff',
  );

  // Exported permission: 'edit any competency_track content'.
  $permissions['edit any competency_track content'] = array(
    'name' => 'edit any competency_track content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any educational_organizations_school content'.
  $permissions['edit any educational_organizations_school content'] = array(
    'name' => 'edit any educational_organizations_school content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sessions content'.
  $permissions['edit any sessions content'] = array(
    'name' => 'edit any sessions content',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training content'.
  $permissions['edit any training content'] = array(
    'name' => 'edit any training content',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit body'.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_participants_list'.
  $permissions['edit field_participants_list'] = array(
    'name' => 'edit field_participants_list',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_session_date_time'.
  $permissions['edit field_session_date_time'] = array(
    'name' => 'edit field_session_date_time',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_skills_added_by_admin'.
  $permissions['edit field_skills_added_by_admin'] = array(
    'name' => 'edit field_skills_added_by_admin',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_status'.
  $permissions['edit field_status'] = array(
    'name' => 'edit field_status',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_trainer'.
  $permissions['edit field_trainer'] = array(
    'name' => 'edit field_trainer',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_trg_name'.
  $permissions['edit field_trg_name'] = array(
    'name' => 'edit field_trg_name',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_venue'.
  $permissions['edit field_venue'] = array(
    'name' => 'edit field_venue',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own body'.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own competency_track content'.
  $permissions['edit own competency_track content'] = array(
    'name' => 'edit own competency_track content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own educational_organizations_school content'.
  $permissions['edit own educational_organizations_school content'] = array(
    'name' => 'edit own educational_organizations_school content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_participants_list'.
  $permissions['edit own field_participants_list'] = array(
    'name' => 'edit own field_participants_list',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_date_time'.
  $permissions['edit own field_session_date_time'] = array(
    'name' => 'edit own field_session_date_time',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_skills_added_by_admin'.
  $permissions['edit own field_skills_added_by_admin'] = array(
    'name' => 'edit own field_skills_added_by_admin',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_status'.
  $permissions['edit own field_status'] = array(
    'name' => 'edit own field_status',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_trainer'.
  $permissions['edit own field_trainer'] = array(
    'name' => 'edit own field_trainer',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_trg_name'.
  $permissions['edit own field_trg_name'] = array(
    'name' => 'edit own field_trg_name',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_venue'.
  $permissions['edit own field_venue'] = array(
    'name' => 'edit own field_venue',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own project_listing content'.
  $permissions['edit own project_listing content'] = array(
    'name' => 'edit own project_listing content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sessions content'.
  $permissions['edit own sessions content'] = array(
    'name' => 'edit own sessions content',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training content'.
  $permissions['edit own training content'] = array(
    'name' => 'edit own training content',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own university_master content'.
  $permissions['edit own university_master content'] = array(
    'name' => 'edit own university_master content',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in competency_group'.
  $permissions['edit terms in competency_group'] = array(
    'name' => 'edit terms in competency_group',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in locations'.
  $permissions['edit terms in locations'] = array(
    'name' => 'edit terms in locations',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in roles_terms'.
  $permissions['edit terms in roles_terms'] = array(
    'name' => 'edit terms in roles_terms',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in skills'.
  $permissions['edit terms in skills'] = array(
    'name' => 'edit terms in skills',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in skills_set'.
  $permissions['edit terms in skills_set'] = array(
    'name' => 'edit terms in skills_set',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in trainings_terms'.
  $permissions['edit terms in trainings_terms'] = array(
    'name' => 'edit terms in trainings_terms',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute competency_tracker_add_skills_action'.
  $permissions['execute competency_tracker_add_skills_action'] = array(
    'name' => 'execute competency_tracker_add_skills_action',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute competency_tracker_remove_skills_action'.
  $permissions['execute competency_tracker_remove_skills_action'] = array(
    'name' => 'execute competency_tracker_remove_skills_action',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute trianzkm_update_active_action'.
  $permissions['execute trianzkm_update_active_action'] = array(
    'name' => 'execute trianzkm_update_active_action',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute trianzkm_update_close_action'.
  $permissions['execute trianzkm_update_close_action'] = array(
    'name' => 'execute trianzkm_update_close_action',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute trianzkm_update_inprogress_action'.
  $permissions['execute trianzkm_update_inprogress_action'] = array(
    'name' => 'execute trianzkm_update_inprogress_action',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'loft_data_grids:CSVExporter'.
  $permissions['loft_data_grids:CSVExporter'] = array(
    'name' => 'loft_data_grids:CSVExporter',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'search',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'take the attendance'.
  $permissions['take the attendance'] = array(
    'name' => 'take the attendance',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'attendancetracker',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use exclude node title'.
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'users_export:export as CSVExporter'.
  $permissions['users_export:export as CSVExporter'] = array(
    'name' => 'users_export:export as CSVExporter',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'users_export',
  );

  // Exported permission: 'view body'.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_participants_list'.
  $permissions['view field_participants_list'] = array(
    'name' => 'view field_participants_list',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_date_time'.
  $permissions['view field_session_date_time'] = array(
    'name' => 'view field_session_date_time',
    'roles' => array(
      'Participant' => 'Participant',
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_skills_added_by_admin'.
  $permissions['view field_skills_added_by_admin'] = array(
    'name' => 'view field_skills_added_by_admin',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_status'.
  $permissions['view field_status'] = array(
    'name' => 'view field_status',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_trainer'.
  $permissions['view field_trainer'] = array(
    'name' => 'view field_trainer',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_trg_name'.
  $permissions['view field_trg_name'] = array(
    'name' => 'view field_trg_name',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_venue'.
  $permissions['view field_venue'] = array(
    'name' => 'view field_venue',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own body'.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_participants_list'.
  $permissions['view own field_participants_list'] = array(
    'name' => 'view own field_participants_list',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_date_time'.
  $permissions['view own field_session_date_time'] = array(
    'name' => 'view own field_session_date_time',
    'roles' => array(
      'Participant' => 'Participant',
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_skills_added_by_admin'.
  $permissions['view own field_skills_added_by_admin'] = array(
    'name' => 'view own field_skills_added_by_admin',
    'roles' => array(
      'admin' => 'admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_status'.
  $permissions['view own field_status'] = array(
    'name' => 'view own field_status',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_trainer'.
  $permissions['view own field_trainer'] = array(
    'name' => 'view own field_trainer',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_trg_name'.
  $permissions['view own field_trg_name'] = array(
    'name' => 'view own field_trg_name',
    'roles' => array(
      'Trainer' => 'Trainer',
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_venue'.
  $permissions['view own field_venue'] = array(
    'name' => 'view own field_venue',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
