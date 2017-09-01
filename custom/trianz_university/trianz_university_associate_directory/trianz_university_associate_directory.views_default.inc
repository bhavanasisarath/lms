<?php
/**
 * @file
 * trianz_university_associate_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trianz_university_associate_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'final_grid_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Associate Directory View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ASSOCIATE DIRECTORY';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No results found.';
  /* Relationship: User: Employment Details (field_employment_details_) */
  $handler->display->display_options['relationships']['field_employment_details__value']['id'] = 'field_employment_details__value';
  $handler->display->display_options['relationships']['field_employment_details__value']['table'] = 'field_data_field_employment_details_';
  $handler->display->display_options['relationships']['field_employment_details__value']['field'] = 'field_employment_details__value';
  $handler->display->display_options['relationships']['field_employment_details__value']['delta'] = '-1';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'S.No';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Employee Code */
  $handler->display->display_options['fields']['field_employee_code']['id'] = 'field_employee_code';
  $handler->display->display_options['fields']['field_employee_code']['table'] = 'field_data_field_employee_code';
  $handler->display->display_options['fields']['field_employee_code']['field'] = 'field_employee_code';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_emp_first_name']['id'] = 'field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['fields']['field_emp_first_name']['field'] = 'field_emp_first_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_emp_last_name']['id'] = 'field_emp_last_name';
  $handler->display->display_options['fields']['field_emp_last_name']['table'] = 'field_data_field_emp_last_name';
  $handler->display->display_options['fields']['field_emp_last_name']['field'] = 'field_emp_last_name';
  /* Field: User: Designation */
  $handler->display->display_options['fields']['field_employee_designation']['id'] = 'field_employee_designation';
  $handler->display->display_options['fields']['field_employee_designation']['table'] = 'field_data_field_employee_designation';
  $handler->display->display_options['fields']['field_employee_designation']['field'] = 'field_employee_designation';
  $handler->display->display_options['fields']['field_employee_designation']['exclude'] = TRUE;
  /* Field: User: Practice */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  /* Field: User: Manager Name */
  $handler->display->display_options['fields']['field_manager_name']['id'] = 'field_manager_name';
  $handler->display->display_options['fields']['field_manager_name']['table'] = 'field_data_field_manager_name';
  $handler->display->display_options['fields']['field_manager_name']['field'] = 'field_manager_name';
  /* Field: User: Grade */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_emp_location']['id'] = 'field_emp_location';
  $handler->display->display_options['fields']['field_emp_location']['table'] = 'field_data_field_emp_location';
  $handler->display->display_options['fields']['field_emp_location']['field'] = 'field_emp_location';
  $handler->display->display_options['fields']['field_emp_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Cost Center */
  $handler->display->display_options['fields']['field_cost_center']['id'] = 'field_cost_center';
  $handler->display->display_options['fields']['field_cost_center']['table'] = 'field_data_field_cost_center';
  $handler->display->display_options['fields']['field_cost_center']['field'] = 'field_cost_center';
  $handler->display->display_options['fields']['field_cost_center']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cost_center']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: LocationType */
  $handler->display->display_options['fields']['field_locationtype']['id'] = 'field_locationtype';
  $handler->display->display_options['fields']['field_locationtype']['table'] = 'field_data_field_locationtype';
  $handler->display->display_options['fields']['field_locationtype']['field'] = 'field_locationtype';
  $handler->display->display_options['fields']['field_locationtype']['exclude'] = TRUE;
  /* Field: Field collection item: Project Name */
  $handler->display->display_options['fields']['field_assis_project_name']['id'] = 'field_assis_project_name';
  $handler->display->display_options['fields']['field_assis_project_name']['table'] = 'field_data_field_assis_project_name';
  $handler->display->display_options['fields']['field_assis_project_name']['field'] = 'field_assis_project_name';
  $handler->display->display_options['fields']['field_assis_project_name']['relationship'] = 'field_employment_details__value';
  $handler->display->display_options['fields']['field_assis_project_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_assis_project_name']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Project Duration */
  $handler->display->display_options['fields']['field_project_duration']['id'] = 'field_project_duration';
  $handler->display->display_options['fields']['field_project_duration']['table'] = 'field_data_field_project_duration';
  $handler->display->display_options['fields']['field_project_duration']['field'] = 'field_project_duration';
  $handler->display->display_options['fields']['field_project_duration']['relationship'] = 'field_employment_details__value';
  $handler->display->display_options['fields']['field_project_duration']['label'] = 'Project Start Date';
  $handler->display->display_options['fields']['field_project_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_duration']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field collection item: Project Duration */
  $handler->display->display_options['fields']['field_project_duration_1']['id'] = 'field_project_duration_1';
  $handler->display->display_options['fields']['field_project_duration_1']['table'] = 'field_data_field_project_duration';
  $handler->display->display_options['fields']['field_project_duration_1']['field'] = 'field_project_duration';
  $handler->display->display_options['fields']['field_project_duration_1']['relationship'] = 'field_employment_details__value';
  $handler->display->display_options['fields']['field_project_duration_1']['label'] = 'Project End Date';
  $handler->display->display_options['fields']['field_project_duration_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_duration_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-12">
	<div class="col-md-3">
		<div class="col-md-12"><b>[field_emp_first_name]&nbsp;[field_emp_last_name]</b></div>
		<div class="col-md-12"><b>Email</b>: [mail]</div>
	</div>
	<div class="col-md-3">
		<div class="col-md-12"><b>Designation</b>: [field_employee_designation] </div>
		<div class="col-md-12"><b>Grade</b>: G[field_grade]</div>
	</div>
	<div class="col-md-3">
		<div class="col-md-12"><b>Manager Name</b>: [field_manager_name]</div>
		<div class="col-md-12"><b>Practice</b>: [field_department]</div>
	</div>
	<div class="col-md-3">
		<div class="col-md-12"><b>Project Name</b>: [field_assis_project_name]</div>
		<div class="col-md-12"><b>Location</b>: [field_emp_location]</div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: User: Employee Code (field_employee_code) */
  $handler->display->display_options['filters']['field_employee_code_value']['id'] = 'field_employee_code_value';
  $handler->display->display_options['filters']['field_employee_code_value']['table'] = 'field_data_field_employee_code';
  $handler->display->display_options['filters']['field_employee_code_value']['field'] = 'field_employee_code_value';
  $handler->display->display_options['filters']['field_employee_code_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_employee_code_value']['group'] = 1;
  /* Filter criterion: Field collection item: Project Status(Task) (field_project_status_task_) */
  $handler->display->display_options['filters']['field_project_status_task__value']['id'] = 'field_project_status_task__value';
  $handler->display->display_options['filters']['field_project_status_task__value']['table'] = 'field_data_field_project_status_task_';
  $handler->display->display_options['filters']['field_project_status_task__value']['field'] = 'field_project_status_task__value';
  $handler->display->display_options['filters']['field_project_status_task__value']['relationship'] = 'field_employment_details__value';
  $handler->display->display_options['filters']['field_project_status_task__value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_project_status_task__value']['group'] = 1;
  /* Filter criterion: User: First Name (field_emp_first_name) */
  $handler->display->display_options['filters']['field_emp_first_name_value']['id'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['table'] = 'field_data_field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value']['field'] = 'field_emp_first_name_value';
  $handler->display->display_options['filters']['field_emp_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_emp_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['operator_id'] = 'field_emp_first_name_value_op';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['label'] = 'First Name';
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
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_field'] = 'field_emp_first_name';
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_emp_first_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Last Name (field_emp_last_name) */
  $handler->display->display_options['filters']['field_emp_last_name_value']['id'] = 'field_emp_last_name_value';
  $handler->display->display_options['filters']['field_emp_last_name_value']['table'] = 'field_data_field_emp_last_name';
  $handler->display->display_options['filters']['field_emp_last_name_value']['field'] = 'field_emp_last_name_value';
  $handler->display->display_options['filters']['field_emp_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_emp_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_emp_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['operator_id'] = 'field_emp_last_name_value_op';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['operator'] = 'field_emp_last_name_value_op';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['identifier'] = 'field_emp_last_name_value';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['autocomplete_field'] = 'field_emp_last_name';
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_emp_last_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Designation (field_employee_designation) */
  $handler->display->display_options['filters']['field_employee_designation_value']['id'] = 'field_employee_designation_value';
  $handler->display->display_options['filters']['field_employee_designation_value']['table'] = 'field_data_field_employee_designation';
  $handler->display->display_options['filters']['field_employee_designation_value']['field'] = 'field_employee_designation_value';
  $handler->display->display_options['filters']['field_employee_designation_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_employee_designation_value']['group'] = 1;
  $handler->display->display_options['filters']['field_employee_designation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['operator_id'] = 'field_employee_designation_value_op';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['label'] = 'Designation';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['operator'] = 'field_employee_designation_value_op';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['identifier'] = 'field_employee_designation_value';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['autocomplete_field'] = 'field_employee_designation';
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_employee_designation_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Grade (field_grade) */
  $handler->display->display_options['filters']['field_grade_value']['id'] = 'field_grade_value';
  $handler->display->display_options['filters']['field_grade_value']['table'] = 'field_data_field_grade';
  $handler->display->display_options['filters']['field_grade_value']['field'] = 'field_grade_value';
  $handler->display->display_options['filters']['field_grade_value']['group'] = 1;
  $handler->display->display_options['filters']['field_grade_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grade_value']['expose']['operator_id'] = 'field_grade_value_op';
  $handler->display->display_options['filters']['field_grade_value']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_grade_value']['expose']['operator'] = 'field_grade_value_op';
  $handler->display->display_options['filters']['field_grade_value']['expose']['identifier'] = 'field_grade_value';
  $handler->display->display_options['filters']['field_grade_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_grade_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_grade_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_grade_value']['expose']['autocomplete_field'] = 'field_grade';
  $handler->display->display_options['filters']['field_grade_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_grade_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_grade_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Practice (field_department) */
  $handler->display->display_options['filters']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_department_value']['group'] = 1;
  $handler->display->display_options['filters']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['operator_id'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['label'] = 'Practice';
  $handler->display->display_options['filters']['field_department_value']['expose']['operator'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_field'] = 'field_department';
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_department_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Manager Name (field_manager_name) */
  $handler->display->display_options['filters']['field_manager_name_value']['id'] = 'field_manager_name_value';
  $handler->display->display_options['filters']['field_manager_name_value']['table'] = 'field_data_field_manager_name';
  $handler->display->display_options['filters']['field_manager_name_value']['field'] = 'field_manager_name_value';
  $handler->display->display_options['filters']['field_manager_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_manager_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_manager_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['operator_id'] = 'field_manager_name_value_op';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['label'] = 'Manager Name';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['operator'] = 'field_manager_name_value_op';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['identifier'] = 'field_manager_name_value';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['autocomplete_field'] = 'field_manager_name';
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_manager_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field collection item: Project Name (field_assis_project_name) */
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['id'] = 'field_assis_project_name_target_id';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['table'] = 'field_data_field_assis_project_name';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['field'] = 'field_assis_project_name_target_id';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['relationship'] = 'field_employment_details__value';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['expose']['operator_id'] = 'field_assis_project_name_target_id_op';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['expose']['label'] = 'Project Name';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['expose']['operator'] = 'field_assis_project_name_target_id_op';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['expose']['identifier'] = 'field_assis_project_name_target_id';
  $handler->display->display_options['filters']['field_assis_project_name_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Location (field_emp_location) */
  $handler->display->display_options['filters']['field_emp_location_tid']['id'] = 'field_emp_location_tid';
  $handler->display->display_options['filters']['field_emp_location_tid']['table'] = 'field_data_field_emp_location';
  $handler->display->display_options['filters']['field_emp_location_tid']['field'] = 'field_emp_location_tid';
  $handler->display->display_options['filters']['field_emp_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_emp_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emp_location_tid']['expose']['operator_id'] = 'field_emp_location_tid_op';
  $handler->display->display_options['filters']['field_emp_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_emp_location_tid']['expose']['operator'] = 'field_emp_location_tid_op';
  $handler->display->display_options['filters']['field_emp_location_tid']['expose']['identifier'] = 'field_emp_location_tid';
  $handler->display->display_options['filters']['field_emp_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_emp_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_emp_location_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_emp_location_tid']['hierarchy'] = 1;

  /* Display: ASSOCIATE DIRECTORY View */
  $handler = $view->new_display('page', 'ASSOCIATE DIRECTORY View', 'page_1');
  $handler->display->display_options['path'] = 'associate-directory';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'final_ad_grid.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'associate-directory/download';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['final_grid_view'] = array(
    t('Master'),
    t('ASSOCIATE DIRECTORY'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('No results found.'),
    t('field collection item from field_employment_details_'),
    t('S.No'),
    t('Employee Code'),
    t('E-mail'),
    t('First Name'),
    t('Last Name'),
    t('Designation'),
    t('Practice'),
    t('Manager Name'),
    t('Grade'),
    t('Location'),
    t('Cost Center'),
    t('LocationType'),
    t('Project Name'),
    t('Project Start Date'),
    t('Project End Date'),
    t('<div class="col-md-12">
	<div class="col-md-3">
		<div class="col-md-12"><b>[field_emp_first_name]&nbsp;[field_emp_last_name]</b></div>
		<div class="col-md-12"><b>Email</b>: [mail]</div>
	</div>
	<div class="col-md-3">
		<div class="col-md-12"><b>Designation</b>: [field_employee_designation] </div>
		<div class="col-md-12"><b>Grade</b>: G[field_grade]</div>
	</div>
	<div class="col-md-3">
		<div class="col-md-12"><b>Manager Name</b>: [field_manager_name]</div>
		<div class="col-md-12"><b>Practice</b>: [field_department]</div>
	</div>
	<div class="col-md-3">
		<div class="col-md-12"><b>Project Name</b>: [field_assis_project_name]</div>
		<div class="col-md-12"><b>Location</b>: [field_emp_location]</div>
	</div>
</div>'),
    t('ASSOCIATE DIRECTORY View'),
    t('Data export'),
  );
  $export['final_grid_view'] = $view;

  return $export;
}
