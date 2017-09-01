<?php
/**
 * @file
 * trianz_university_attendance_tracker.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trianz_university_attendance_tracker_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'emplyee_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Employee List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employee List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    2 => '2',
    6 => '6',
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'name' => 'name',
    'field_emp_first_name' => 'field_emp_first_name',
    'field_emp_last_name' => 'field_emp_last_name',
    'rid' => 'rid',
    'field_employee_code' => 'field_employee_code',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_emp_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_emp_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_employee_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="roleAssgin"  style="font-size: 26px;;"><i class="fa fa-plus" aria-hidden="true"></i>Assign Role</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User ID';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_emp_first_name']['id'] = 'field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['field'] = 'field_emp_first_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_emp_last_name']['id'] = 'field_emp_last_name';
  $handler->display->display_options['fields']['field_emp_last_name']['table'] = 'field_data_field_emp_last_name';
  $handler->display->display_options['fields']['field_emp_last_name']['field'] = 'field_emp_last_name';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Employee Code */
  $handler->display->display_options['fields']['field_employee_code']['id'] = 'field_employee_code';
  $handler->display->display_options['fields']['field_employee_code']['table'] = 'field_data_field_employee_code';
  $handler->display->display_options['fields']['field_employee_code']['field'] = 'field_employee_code';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = '%admin%';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'users';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = '!=';
  $handler->display->display_options['filters']['name_1']['value'] = '%-%';

  /* Display: Employee List */
  $handler = $view->new_display('page', 'Employee List', 'page');
  $handler->display->display_options['path'] = 'employee-list';
  $translatables['emplyee_list'] = array(
    t('Master'),
    t('Employee List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="roleAssgin"  style="font-size: 26px;;"><i class="fa fa-plus" aria-hidden="true"></i>Assign Role</a>'),
    t('Picture'),
    t('User ID'),
    t('First Name'),
    t('Last Name'),
    t('Roles'),
    t('Employee Code'),
    t('Name'),
  );
  $export['emplyee_list'] = $view;

  $view = new view();
  $view->name = 'my_cls_trainings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'my trainings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Trainings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_training_title_1' => 'field_training_title_1',
    'field_training_title' => 'field_training_title',
    'field_venue' => 'field_venue',
    'field_status' => 'field_status',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Result Found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_title_target_id']['id'] = 'field_training_title_target_id';
  $handler->display->display_options['relationships']['field_training_title_target_id']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['relationships']['field_training_title_target_id']['field'] = 'field_training_title_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_training_title_1']['id'] = 'field_training_title_1';
  $handler->display->display_options['fields']['field_training_title_1']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['fields']['field_training_title_1']['field'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title_1']['label'] = 'Training id';
  $handler->display->display_options['fields']['field_training_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_title_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_training_title_1']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_training_title']['id'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['fields']['field_training_title']['field'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title']['label'] = 'Training Name';
  $handler->display->display_options['fields']['field_training_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_training_title']['alter']['path'] = 'my-sessions1/[field_training_title_1]';
  $handler->display->display_options['fields']['field_training_title']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_training_title_target_id';
  $handler->display->display_options['fields']['field_venue']['hide_empty'] = TRUE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'field_training_title_target_id';
  $handler->display->display_options['fields']['field_status']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="my-sessions1/[field_training_title_1]">View Sessions</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Trainer (field_trainer) */
  $handler->display->display_options['arguments']['field_trainer_target_id']['id'] = 'field_trainer_target_id';
  $handler->display->display_options['arguments']['field_trainer_target_id']['table'] = 'field_data_field_trainer';
  $handler->display->display_options['arguments']['field_trainer_target_id']['field'] = 'field_trainer_target_id';
  $handler->display->display_options['arguments']['field_trainer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_trainer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_trainer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trainer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trainer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sessions' => 'sessions',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-trainings';
  $translatables['my_cls_trainings'] = array(
    t('Master'),
    t('My Trainings'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Result Found.'),
    t('Content entity referenced from field_training_title'),
    t('Training id'),
    t('Training Name'),
    t('Venue'),
    t('Status'),
    t('<a href="my-sessions1/[field_training_title_1]">View Sessions</a>'),
    t('All'),
    t('Page'),
  );
  $export['my_cls_trainings'] = $view;

  $view = new view();
  $view->name = 'my_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    2 => '2',
    6 => '6',
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_training_title_1' => 'field_training_title_1',
    'title' => 'title',
    'nid' => 'nid',
    'field_trainer' => 'field_trainer',
    'field_training_title' => 'field_training_title',
    'base_url' => 'base_url',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_training_title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trainer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'base_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Result Found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_title_target_id']['id'] = 'field_training_title_target_id';
  $handler->display->display_options['relationships']['field_training_title_target_id']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['relationships']['field_training_title_target_id']['field'] = 'field_training_title_target_id';
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_training_title_1']['id'] = 'field_training_title_1';
  $handler->display->display_options['fields']['field_training_title_1']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['fields']['field_training_title_1']['field'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title_1']['label'] = 'Training Program';
  $handler->display->display_options['fields']['field_training_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_title_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'session Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Trainer */
  $handler->display->display_options['fields']['field_trainer']['id'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer']['table'] = 'field_data_field_trainer';
  $handler->display->display_options['fields']['field_trainer']['field'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer']['label'] = 'Trainer id';
  $handler->display->display_options['fields']['field_trainer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainer']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_trainer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_training_title']['id'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['fields']['field_training_title']['field'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title']['label'] = 'Training id';
  $handler->display->display_options['fields']['field_training_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_title']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_training_title']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Action';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[base_url]/node/[nid]/edit">Change Time</a>&nbsp;&nbsp;&nbsp;<a href="[base_url]/node/[field_training_title]/edit">Add Participants</a>&nbsp;&nbsp;&nbsp;<a href="[base_url]/attendance/[field_trainer]/[field_training_title]/[nid]/take-attendance">Take Attendance</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Training Title (field_training_title) */
  $handler->display->display_options['arguments']['field_training_title_target_id']['id'] = 'field_training_title_target_id';
  $handler->display->display_options['arguments']['field_training_title_target_id']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['arguments']['field_training_title_target_id']['field'] = 'field_training_title_target_id';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Trainer (field_trainer) */
  $handler->display->display_options['arguments']['field_trainer_target_id']['id'] = 'field_trainer_target_id';
  $handler->display->display_options['arguments']['field_trainer_target_id']['table'] = 'field_data_field_trainer';
  $handler->display->display_options['arguments']['field_trainer_target_id']['field'] = 'field_trainer_target_id';
  $handler->display->display_options['arguments']['field_trainer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_trainer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_trainer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trainer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trainer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sessions' => 'sessions',
  );

  /* Display: My Sessions */
  $handler = $view->new_display('page', 'My Sessions', 'page');
  $handler->display->display_options['path'] = 'my-sessions1';
  $translatables['my_sessions'] = array(
    t('Master'),
    t('My Sessions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Result Found.'),
    t('Content entity referenced from field_training_title'),
    t('Training Program'),
    t('Session'),
    t('session Nid'),
    t('Trainer id'),
    t('Training id'),
    t('Base url'),
    t('Action'),
    t('<a href="[base_url]/node/[nid]/edit">Change Time</a>&nbsp;&nbsp;&nbsp;<a href="[base_url]/node/[field_training_title]/edit">Add Participants</a>&nbsp;&nbsp;&nbsp;<a href="[base_url]/attendance/[field_trainer]/[field_training_title]/[nid]/take-attendance">Take Attendance</a>'),
    t('All'),
  );
  $export['my_sessions'] = $view;

  $view = new view();
  $view->name = 'track_attendance';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'trainings_attendancetracker';
  $view->human_name = 'Track Attendance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Track Attendance';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'at_status' => 'at_status',
    'user_id' => 'user_id',
    'id_1' => 'id_1',
    'session_id' => 'session_id',
    'duration' => 'duration',
    'trainer_id' => 'trainer_id',
    'training_id' => 'training_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'at_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'user_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'session_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'trainer_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'training_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No content available.';
  /* Relationship: Attendance: Attendance modified by user and users table relationship */
  $handler->display->display_options['relationships']['user_id']['id'] = 'user_id';
  $handler->display->display_options['relationships']['user_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['relationships']['user_id']['field'] = 'user_id';
  $handler->display->display_options['relationships']['user_id']['label'] = 'trainings_attendancetracker and users relationship';
  /* Relationship: Attendance: Trainer and users table relationship */
  $handler->display->display_options['relationships']['trainer_id']['id'] = 'trainer_id';
  $handler->display->display_options['relationships']['trainer_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['relationships']['trainer_id']['field'] = 'trainer_id';
  /* Relationship: Attendance: trainings_attendancetracker Relationship with node type session */
  $handler->display->display_options['relationships']['session_id']['id'] = 'session_id';
  $handler->display->display_options['relationships']['session_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['relationships']['session_id']['field'] = 'session_id';
  /* Relationship: Attendance: trainings_attendancetracker Relationship with node type training */
  $handler->display->display_options['relationships']['training_id']['id'] = 'training_id';
  $handler->display->display_options['relationships']['training_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['relationships']['training_id']['field'] = 'training_id';
  /* Relationship: Attendance: Participant and users table relationship */
  $handler->display->display_options['relationships']['participant_id']['id'] = 'participant_id';
  $handler->display->display_options['relationships']['participant_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['relationships']['participant_id']['field'] = 'participant_id';
  /* Field: Attendance: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Attendance: Attendance taken/edited by Uid */
  $handler->display->display_options['fields']['user_id']['id'] = 'user_id';
  $handler->display->display_options['fields']['user_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['user_id']['field'] = 'user_id';
  $handler->display->display_options['fields']['user_id']['exclude'] = TRUE;
  /* Field: Attendance: Session Id of Session */
  $handler->display->display_options['fields']['session_id']['id'] = 'session_id';
  $handler->display->display_options['fields']['session_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['session_id']['field'] = 'session_id';
  $handler->display->display_options['fields']['session_id']['exclude'] = TRUE;
  /* Field: Attendance: Trainer Id */
  $handler->display->display_options['fields']['trainer_id']['id'] = 'trainer_id';
  $handler->display->display_options['fields']['trainer_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['trainer_id']['field'] = 'trainer_id';
  $handler->display->display_options['fields']['trainer_id']['exclude'] = TRUE;
  /* Field: Attendance: Training Id of training  */
  $handler->display->display_options['fields']['training_id']['id'] = 'training_id';
  $handler->display->display_options['fields']['training_id']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['training_id']['field'] = 'training_id';
  $handler->display->display_options['fields']['training_id']['label'] = 'Training Id of training';
  $handler->display->display_options['fields']['training_id']['exclude'] = TRUE;
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_trg_name']['id'] = 'field_trg_name';
  $handler->display->display_options['fields']['field_trg_name']['table'] = 'field_data_field_trg_name';
  $handler->display->display_options['fields']['field_trg_name']['field'] = 'field_trg_name';
  $handler->display->display_options['fields']['field_trg_name']['relationship'] = 'training_id';
  $handler->display->display_options['fields']['field_trg_name']['label'] = 'Training Program';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'session_id';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  /* Field: Content: Session Date & Time */
  $handler->display->display_options['fields']['field_session_date_time']['id'] = 'field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['table'] = 'field_data_field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['field'] = 'field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['relationship'] = 'session_id';
  $handler->display->display_options['fields']['field_session_date_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_emp_first_name']['id'] = 'field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['field'] = 'field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['relationship'] = 'trainer_id';
  $handler->display->display_options['fields']['field_emp_first_name']['label'] = 'Trainer';
  /* Field: Attendance: Duration */
  $handler->display->display_options['fields']['duration_1']['id'] = 'duration_1';
  $handler->display->display_options['fields']['duration_1']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['duration_1']['field'] = 'duration';
  $handler->display->display_options['fields']['duration_1']['label'] = 'Duration in hrs';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_emp_first_name_2']['id'] = 'field_emp_first_name_2';
  $handler->display->display_options['fields']['field_emp_first_name_2']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name_2']['field'] = 'field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name_2']['relationship'] = 'participant_id';
  $handler->display->display_options['fields']['field_emp_first_name_2']['label'] = 'Participant Name';
  /* Field: Attendance: Attendance Status */
  $handler->display->display_options['fields']['at_status']['id'] = 'at_status';
  $handler->display->display_options['fields']['at_status']['table'] = 'trainings_attendancetracker';
  $handler->display->display_options['fields']['at_status']['field'] = 'at_status';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_emp_first_name_1']['id'] = 'field_emp_first_name_1';
  $handler->display->display_options['fields']['field_emp_first_name_1']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name_1']['field'] = 'field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name_1']['relationship'] = 'user_id';
  $handler->display->display_options['fields']['field_emp_first_name_1']['label'] = 'Attendance modified by';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'training_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'session_id';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid_1']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';

  /* Display: All Training Attendance */
  $handler = $view->new_display('page', 'All Training Attendance', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training Attendance Report';
  $handler->display->display_options['display_description'] = 'attendance report for all trainings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Training Title (field_trg_name) */
  $handler->display->display_options['filters']['field_trg_name_tid']['id'] = 'field_trg_name_tid';
  $handler->display->display_options['filters']['field_trg_name_tid']['table'] = 'field_data_field_trg_name';
  $handler->display->display_options['filters']['field_trg_name_tid']['field'] = 'field_trg_name_tid';
  $handler->display->display_options['filters']['field_trg_name_tid']['relationship'] = 'training_id';
  $handler->display->display_options['filters']['field_trg_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_trg_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_trg_name_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['operator_id'] = 'field_trg_name_tid_op';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['label'] = 'Training Program';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['operator'] = 'field_trg_name_tid_op';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['identifier'] = 'field_trg_name_tid';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_trg_name_tid']['vocabulary'] = 'trainings_terms';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'session_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Session Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: First Name (field_emp_first_name) */
  $handler->display->display_options['filters']['field_emp_first_name_value']['id'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value']['field'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['relationship'] = 'trainer_id';
  $handler->display->display_options['filters']['field_emp_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_emp_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['operator_id'] = 'field_emp_first_name_value_op';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['label'] = 'Trainer';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['operator'] = 'field_emp_first_name_value_op';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['identifier'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_field'] = 'field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: First Name (field_emp_first_name) */
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['id'] = 'field_emp_first_name_value_1';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['field'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['relationship'] = 'participant_id';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['operator_id'] = 'field_emp_first_name_value_1_op';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['label'] = 'Participant';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['operator'] = 'field_emp_first_name_value_1_op';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['identifier'] = 'field_emp_first_name_value_1';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_field'] = 'field_emp_first_name_2';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'track-attendance';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'attendance_list.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Training Title (field_trg_name) */
  $handler->display->display_options['filters']['field_trg_name_tid']['id'] = 'field_trg_name_tid';
  $handler->display->display_options['filters']['field_trg_name_tid']['table'] = 'field_data_field_trg_name';
  $handler->display->display_options['filters']['field_trg_name_tid']['field'] = 'field_trg_name_tid';
  $handler->display->display_options['filters']['field_trg_name_tid']['relationship'] = 'training_id';
  $handler->display->display_options['filters']['field_trg_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_trg_name_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['operator_id'] = 'field_trg_name_tid_op';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['label'] = 'Training Program';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['operator'] = 'field_trg_name_tid_op';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['identifier'] = 'field_trg_name_tid';
  $handler->display->display_options['filters']['field_trg_name_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_trg_name_tid']['vocabulary'] = 'trainings_terms';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'session_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Session Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: First Name (field_emp_first_name) */
  $handler->display->display_options['filters']['field_emp_first_name_value']['id'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value']['field'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['relationship'] = 'trainer_id';
  $handler->display->display_options['filters']['field_emp_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_emp_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['operator_id'] = 'field_emp_first_name_value_op';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['label'] = 'Trainer';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['operator'] = 'field_emp_first_name_value_op';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['identifier'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_field'] = 'field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: First Name (field_emp_first_name) */
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['id'] = 'field_emp_first_name_value_1';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['field'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['relationship'] = 'participant_id';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['operator_id'] = 'field_emp_first_name_value_1_op';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['label'] = 'Participant';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['operator'] = 'field_emp_first_name_value_1_op';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['identifier'] = 'field_emp_first_name_value_1';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_field'] = 'field_emp_first_name_2';
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value_1']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'track_attendance/download';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Session Attendance */
  $handler = $view->new_display('page', 'Session Attendance', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Session Attendance Report';
  $handler->display->display_options['display_description'] = 'attendance report for individual session';
  $handler->display->display_options['path'] = 'track-attendance/%/%';

  /* Display: Data export 2 */
  $handler = $view->new_display('views_data_export', 'Data export 2', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'session-attendance-list.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'track-attendance/%/%/download';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $translatables['track_attendance'] = array(
    t('Master'),
    t('Track Attendance'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No content available.'),
    t('trainings_attendancetracker and users relationship'),
    t('trainer and users relationship'),
    t('trainings_attendancetracker Relationship with node type session'),
    t('trainings_attendancetracker Relationship with node type training'),
    t('participant and users relationship'),
    t('Id'),
    t('Attendance taken/edited by Uid'),
    t('Session Id of Session'),
    t('Trainer Id'),
    t('Training Id of training'),
    t('Training Program'),
    t('Session'),
    t('Session Date & Time'),
    t('Trainer'),
    t('Duration in hrs'),
    t('Participant Name'),
    t('Attendance Status'),
    t('Attendance modified by'),
    t('All'),
    t('All Training Attendance'),
    t('Training Attendance Report'),
    t('attendance report for all trainings'),
    t('Session Name'),
    t('Participant'),
    t('Data export'),
    t('Session Attendance'),
    t('Session Attendance Report'),
    t('attendance report for individual session'),
    t('Data export 2'),
  );
  $export['track_attendance'] = $view;

  $view = new view();
  $view->name = 'trainings_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trainings List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Training List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Training Title (field_trg_name) */
  $handler->display->display_options['arguments']['field_trg_name_tid']['id'] = 'field_trg_name_tid';
  $handler->display->display_options['arguments']['field_trg_name_tid']['table'] = 'field_data_field_trg_name';
  $handler->display->display_options['arguments']['field_trg_name_tid']['field'] = 'field_trg_name_tid';
  $handler->display->display_options['arguments']['field_trg_name_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_trg_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trg_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trg_name_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trainings List';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_trg_name' => 'field_trg_name',
    'field_venue' => 'field_venue',
    'field_status' => 'field_status',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trg_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No trainings are available.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::trianzkm_update_active_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::trianzkm_update_close_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::trianzkm_update_inprogress_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Training Program';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'sessions-list/[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Current Status';
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '[field_status]

';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Change Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="change/training-status/[nid]/1">Closed</a>&nbsp;|&nbsp;<a href="change/training-status/[nid]/2">Active</a>&nbsp;|&nbsp;<a href="change/training-status/[nid]/3">In-Progress</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Start Date - End Date';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Training Program';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'training-list';
  $translatables['trainings_list'] = array(
    t('Master'),
    t('Training List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Page'),
    t('Trainings List'),
    t('No trainings are available.'),
    t('Content'),
    t('- Choose an operation -'),
    t('Nid'),
    t('Training Program'),
    t('Venue'),
    t('Current Status'),
    t('[field_status]

'),
    t('Change Status'),
    t('<a href="change/training-status/[nid]/1">Closed</a>&nbsp;|&nbsp;<a href="change/training-status/[nid]/2">Active</a>&nbsp;|&nbsp;<a href="change/training-status/[nid]/3">In-Progress</a>'),
    t('Start Date - End Date'),
    t('Status'),
  );
  $export['trainings_list'] = $view;

  $view = new view();
  $view->name = 'user_roles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'user roles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'user roles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-roles';

  /* Display: Trainers */
  $handler = $view->new_display('entityreference', 'Trainers', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Participants */
  $handler = $view->new_display('entityreference', 'Participants', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $translatables['user_roles'] = array(
    t('Master'),
    t('user roles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('Trainers'),
    t('Participants'),
  );
  $export['user_roles'] = $view;

  $view = new view();
  $view->name = 'view_sessions_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_session_date_time' => 'field_session_date_time',
    'field_trainer' => 'field_trainer',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_date_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trainer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Result Found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Sessions';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Session Date & Time */
  $handler->display->display_options['fields']['field_session_date_time']['id'] = 'field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['table'] = 'field_data_field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['field'] = 'field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['label'] = 'Date & Time Duration';
  $handler->display->display_options['fields']['field_session_date_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Trainer */
  $handler->display->display_options['fields']['field_trainer']['id'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer']['table'] = 'field_data_field_trainer';
  $handler->display->display_options['fields']['field_trainer']['field'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Action';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Track Attendance';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'track-attendance/%1/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Training Title (field_training_title) */
  $handler->display->display_options['arguments']['field_training_title_target_id']['id'] = 'field_training_title_target_id';
  $handler->display->display_options['arguments']['field_training_title_target_id']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['arguments']['field_training_title_target_id']['field'] = 'field_training_title_target_id';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sessions' => 'sessions',
  );

  /* Display: Sessions List */
  $handler = $view->new_display('page', 'Sessions List', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_training_title' => 'field_training_title',
    'nid' => 'nid',
    'title' => 'title',
    'field_training_title_1' => 'field_training_title_1',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_training_title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_training_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_training_title']['id'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['fields']['field_training_title']['field'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title']['label'] = '';
  $handler->display->display_options['fields']['field_training_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_title']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Training Title */
  $handler->display->display_options['fields']['field_training_title_1']['id'] = 'field_training_title_1';
  $handler->display->display_options['fields']['field_training_title_1']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['fields']['field_training_title_1']['field'] = 'field_training_title';
  $handler->display->display_options['fields']['field_training_title_1']['label'] = 'Training ID';
  $handler->display->display_options['fields']['field_training_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_title_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_training_title_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-12"><a href="node/[nid]/edit">Change Time</a></span></div><div class="col-md-12"><span><a href="track-attendance/[field_training_title_1]/[nid]">Track Attendance</a></span></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'sessions-list';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Training Sessions List */
  $handler = $view->new_display('page', 'Training Sessions List', 'page_2');
  $handler->display->display_options['display_description'] = 'list of sessions for selected training';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_session_date_time' => 'field_session_date_time',
    'field_trainer' => 'field_trainer',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_date_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trainer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_title_target_id']['id'] = 'field_training_title_target_id';
  $handler->display->display_options['relationships']['field_training_title_target_id']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['relationships']['field_training_title_target_id']['field'] = 'field_training_title_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Sessions';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Session Date & Time */
  $handler->display->display_options['fields']['field_session_date_time']['id'] = 'field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['table'] = 'field_data_field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['field'] = 'field_session_date_time';
  $handler->display->display_options['fields']['field_session_date_time']['label'] = 'Date & Time Duration';
  $handler->display->display_options['fields']['field_session_date_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Trainer */
  $handler->display->display_options['fields']['field_trainer']['id'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer']['table'] = 'field_data_field_trainer';
  $handler->display->display_options['fields']['field_trainer']['field'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Trainer */
  $handler->display->display_options['fields']['field_trainer_1']['id'] = 'field_trainer_1';
  $handler->display->display_options['fields']['field_trainer_1']['table'] = 'field_data_field_trainer';
  $handler->display->display_options['fields']['field_trainer_1']['field'] = 'field_trainer';
  $handler->display->display_options['fields']['field_trainer_1']['label'] = 'Trainer Id';
  $handler->display->display_options['fields']['field_trainer_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trainer_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_trainer_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_training_title_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[base_url]/attendance/[field_trainer_1]/[nid_1]/[nid]/take-attendance">Take Attendance</a> &nbsp;&nbsp;&nbsp;<a href="[base_url]/track-attendance/%1/[nid]">Report </a>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'track-attendance/%1/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Training Title (field_training_title) */
  $handler->display->display_options['arguments']['field_training_title_target_id']['id'] = 'field_training_title_target_id';
  $handler->display->display_options['arguments']['field_training_title_target_id']['table'] = 'field_data_field_training_title';
  $handler->display->display_options['arguments']['field_training_title_target_id']['field'] = 'field_training_title_target_id';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_training_title_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_title_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'sessions-list/%';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['view_sessions_list'] = array(
    t('Master'),
    t('Sessions List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Result Found.'),
    t('Nid'),
    t('Sessions'),
    t('Date & Time Duration'),
    t('Trainer'),
    t('Action'),
    t('Track Attendance'),
    t('All'),
    t('Training ID'),
    t('<div class="col-md-12"><a href="node/[nid]/edit">Change Time</a></span></div><div class="col-md-12"><span><a href="track-attendance/[field_training_title_1]/[nid]">Track Attendance</a></span></div>'),
    t('Training Sessions List'),
    t('list of sessions for selected training'),
    t('Content entity referenced from field_training_title'),
    t('Base url'),
    t('Trainer Id'),
    t('Actions'),
    t('<a href="[base_url]/attendance/[field_trainer_1]/[nid_1]/[nid]/take-attendance">Take Attendance</a> &nbsp;&nbsp;&nbsp;<a href="[base_url]/track-attendance/%1/[nid]">Report </a>'),
  );
  $export['view_sessions_list'] = $view;

  return $export;
}
