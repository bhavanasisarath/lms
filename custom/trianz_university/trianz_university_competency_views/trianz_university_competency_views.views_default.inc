<?php
/**
 * @file
 * trianz_university_competency_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trianz_university_competency_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'add_or_remove_skills_to_competency';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Add or Remove Skills to Competency';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Competency Skills';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::competency_tracker_add_skills_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::competency_tracker_remove_skills_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
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
  /* Field: User: Grade */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
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
  /* Field: User: Skills Added By Admin */
  $handler->display->display_options['fields']['field_skills_added_by_admin']['id'] = 'field_skills_added_by_admin';
  $handler->display->display_options['fields']['field_skills_added_by_admin']['table'] = 'field_data_field_skills_added_by_admin';
  $handler->display->display_options['fields']['field_skills_added_by_admin']['field'] = 'field_skills_added_by_admin';
  $handler->display->display_options['fields']['field_skills_added_by_admin']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_skills_added_by_admin']['delta_offset'] = '0';
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
  $handler->display->display_options['filters']['uid']['group'] = 1;
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
  /* Filter criterion: User: Employee Code (field_employee_code) */
  $handler->display->display_options['filters']['field_employee_code_value']['id'] = 'field_employee_code_value';
  $handler->display->display_options['filters']['field_employee_code_value']['table'] = 'field_data_field_employee_code';
  $handler->display->display_options['filters']['field_employee_code_value']['field'] = 'field_employee_code_value';
  $handler->display->display_options['filters']['field_employee_code_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_employee_code_value']['group'] = 1;
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

  /* Display: Manage Competency Skills */
  $handler = $view->new_display('page', 'Manage Competency Skills', 'page_1');
  $handler->display->display_options['path'] = 'manage-competency-skills';
  $translatables['add_or_remove_skills_to_competency'] = array(
    t('Master'),
    t('Manage Competency Skills'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('No results found.'),
    t('field collection item from field_employment_details_'),
    t('User'),
    t('- Choose an operation -'),
    t('S.No'),
    t('Employee Code'),
    t('First Name'),
    t('Last Name'),
    t('Designation'),
    t('Grade'),
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
    t('Skills Added By Admin'),
    t('Name'),
  );
  $export['add_or_remove_skills_to_competency'] = $view;

  $view = new view();
  $view->name = 'competency_dictionary_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Competency Dictionary View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Competency Dictionary';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_delivery_group' => 'field_delivery_group',
    'field_designation' => 'field_designation',
    'field_experience_range' => 'field_experience_range',
    'field_skills_terms' => 'field_skills_terms',
    'field_training_details_1' => 'field_training_details_1',
    'field_overall_course_dur' => 'field_overall_course_dur',
    'field_assessment' => 'field_assessment',
    'field_certification' => 'field_certification',
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
    'field_delivery_group' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_skills_terms' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_details_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_overall_course_dur' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assessment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_certification' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'hover' => 'hover',
    'bordered' => 0,
    'condensed' => 0,
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No Results found.';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'S.No';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Track';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Competency Group */
  $handler->display->display_options['fields']['field_competency_group']['id'] = 'field_competency_group';
  $handler->display->display_options['fields']['field_competency_group']['table'] = 'field_data_field_competency_group';
  $handler->display->display_options['fields']['field_competency_group']['field'] = 'field_competency_group';
  $handler->display->display_options['fields']['field_competency_group']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competency_group']['settings'] = array(
    'token_display_selected' => '',
    'token_display_unselected' => '',
  );
  $handler->display->display_options['fields']['field_competency_group']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_competency_group']['multi_type'] = 'ul';
  /* Field: Content: Delivery Group */
  $handler->display->display_options['fields']['field_comp_delivery_group']['id'] = 'field_comp_delivery_group';
  $handler->display->display_options['fields']['field_comp_delivery_group']['table'] = 'field_data_field_comp_delivery_group';
  $handler->display->display_options['fields']['field_comp_delivery_group']['field'] = 'field_comp_delivery_group';
  $handler->display->display_options['fields']['field_comp_delivery_group']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_comp_grade']['id'] = 'field_comp_grade';
  $handler->display->display_options['fields']['field_comp_grade']['table'] = 'field_data_field_comp_grade';
  $handler->display->display_options['fields']['field_comp_grade']['field'] = 'field_comp_grade';
  /* Field: Field: Roles */
  $handler->display->display_options['fields']['field_roles_terms_1']['id'] = 'field_roles_terms_1';
  $handler->display->display_options['fields']['field_roles_terms_1']['table'] = 'field_data_field_roles_terms';
  $handler->display->display_options['fields']['field_roles_terms_1']['field'] = 'field_roles_terms';
  $handler->display->display_options['fields']['field_roles_terms_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_roles_terms_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_roles_terms_1']['multi_type'] = 'ul';
  /* Field: Content: Skills */
  $handler->display->display_options['fields']['field_skills_terms_1']['id'] = 'field_skills_terms_1';
  $handler->display->display_options['fields']['field_skills_terms_1']['table'] = 'field_data_field_skills_terms';
  $handler->display->display_options['fields']['field_skills_terms_1']['field'] = 'field_skills_terms';
  $handler->display->display_options['fields']['field_skills_terms_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_skills_terms_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_skills_terms_1']['multi_type'] = 'ul';
  /* Field: Content: Training Details */
  $handler->display->display_options['fields']['field_comp_training_details']['id'] = 'field_comp_training_details';
  $handler->display->display_options['fields']['field_comp_training_details']['table'] = 'field_data_field_comp_training_details';
  $handler->display->display_options['fields']['field_comp_training_details']['field'] = 'field_comp_training_details';
  $handler->display->display_options['fields']['field_comp_training_details']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_comp_training_details']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_comp_training_details']['multi_type'] = 'ol';
  /* Field: Content: Assessment */
  $handler->display->display_options['fields']['field_comp_assessment']['id'] = 'field_comp_assessment';
  $handler->display->display_options['fields']['field_comp_assessment']['table'] = 'field_data_field_comp_assessment';
  $handler->display->display_options['fields']['field_comp_assessment']['field'] = 'field_comp_assessment';
  $handler->display->display_options['fields']['field_comp_assessment']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Certification */
  $handler->display->display_options['fields']['field_comp_certification']['id'] = 'field_comp_certification';
  $handler->display->display_options['fields']['field_comp_certification']['table'] = 'field_data_field_comp_certification';
  $handler->display->display_options['fields']['field_comp_certification']['field'] = 'field_comp_certification';
  $handler->display->display_options['fields']['field_comp_certification']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_comp_certification']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'competency_track' => 'competency_track',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Competency Group (field_competency_group) */
  $handler->display->display_options['filters']['field_competency_group_tid']['id'] = 'field_competency_group_tid';
  $handler->display->display_options['filters']['field_competency_group_tid']['table'] = 'field_data_field_competency_group';
  $handler->display->display_options['filters']['field_competency_group_tid']['field'] = 'field_competency_group_tid';
  $handler->display->display_options['filters']['field_competency_group_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_competency_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_competency_group_tid']['expose']['operator_id'] = 'field_competency_group_tid_op';
  $handler->display->display_options['filters']['field_competency_group_tid']['expose']['label'] = 'Competency Group';
  $handler->display->display_options['filters']['field_competency_group_tid']['expose']['operator'] = 'field_competency_group_tid_op';
  $handler->display->display_options['filters']['field_competency_group_tid']['expose']['identifier'] = 'field_competency_group_tid';
  $handler->display->display_options['filters']['field_competency_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_competency_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_competency_group_tid']['vocabulary'] = 'competency_group_list';
  $handler->display->display_options['filters']['field_competency_group_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Delivery Group (field_comp_delivery_group) */
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['id'] = 'field_comp_delivery_group_tid';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['table'] = 'field_data_field_comp_delivery_group';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['field'] = 'field_comp_delivery_group_tid';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['expose']['operator_id'] = 'field_comp_delivery_group_tid_op';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['expose']['label'] = 'Delivery Group';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['expose']['operator'] = 'field_comp_delivery_group_tid_op';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['expose']['identifier'] = 'field_comp_delivery_group_tid';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['vocabulary'] = 'delivery_group';
  $handler->display->display_options['filters']['field_comp_delivery_group_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Grade (field_comp_grade) */
  $handler->display->display_options['filters']['field_comp_grade_value']['id'] = 'field_comp_grade_value';
  $handler->display->display_options['filters']['field_comp_grade_value']['table'] = 'field_data_field_comp_grade';
  $handler->display->display_options['filters']['field_comp_grade_value']['field'] = 'field_comp_grade_value';
  $handler->display->display_options['filters']['field_comp_grade_value']['group'] = 1;
  $handler->display->display_options['filters']['field_comp_grade_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_comp_grade_value']['expose']['operator_id'] = 'field_comp_grade_value_op';
  $handler->display->display_options['filters']['field_comp_grade_value']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_comp_grade_value']['expose']['operator'] = 'field_comp_grade_value_op';
  $handler->display->display_options['filters']['field_comp_grade_value']['expose']['identifier'] = 'field_comp_grade_value';
  $handler->display->display_options['filters']['field_comp_grade_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Skills (field_skills_terms) */
  $handler->display->display_options['filters']['field_skills_terms_tid']['id'] = 'field_skills_terms_tid';
  $handler->display->display_options['filters']['field_skills_terms_tid']['table'] = 'field_data_field_skills_terms';
  $handler->display->display_options['filters']['field_skills_terms_tid']['field'] = 'field_skills_terms_tid';
  $handler->display->display_options['filters']['field_skills_terms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_skills_terms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_skills_terms_tid']['expose']['operator_id'] = 'field_skills_terms_tid_op';
  $handler->display->display_options['filters']['field_skills_terms_tid']['expose']['label'] = 'Skills';
  $handler->display->display_options['filters']['field_skills_terms_tid']['expose']['operator'] = 'field_skills_terms_tid_op';
  $handler->display->display_options['filters']['field_skills_terms_tid']['expose']['identifier'] = 'field_skills_terms_tid';
  $handler->display->display_options['filters']['field_skills_terms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_skills_terms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_skills_terms_tid']['vocabulary'] = 'skills_set';
  $handler->display->display_options['filters']['field_skills_terms_tid']['hierarchy'] = 1;

  /* Display: All Competency List */
  $handler = $view->new_display('page', 'All Competency List', 'page_1');
  $handler->display->display_options['path'] = 'competency-list';
  $translatables['competency_dictionary_view'] = array(
    t('Master'),
    t('Competency Dictionary'),
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
    t('No Results found.'),
    t('S.No'),
    t('Track'),
    t('Competency Group'),
    t('Delivery Group'),
    t('Grade'),
    t('Roles'),
    t('Skills'),
    t('Training Details'),
    t('Assessment'),
    t('Certification'),
    t('All Competency List'),
  );
  $export['competency_dictionary_view'] = $view;

  $view = new view();
  $view->name = 'competency_track';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Competency Track';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Competency';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_competency_group_sel' => 'field_competency_group_sel',
    'field_delivery_group' => 'field_delivery_group',
    'field_designation' => 'field_designation',
    'field_experience_range' => 'field_experience_range',
    'field_roles_terms' => 'field_roles_terms',
    'field_skills_terms' => 'field_skills_terms',
    'field_training_details_1' => 'field_training_details_1',
    'field_certification' => 'field_certification',
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
    'field_competency_group_sel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_delivery_group' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_roles_terms' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_skills_terms' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_details_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_certification' => array(
      'sortable' => 0,
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
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No competency\'s available.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Competency Group */
  $handler->display->display_options['fields']['field_competency_group']['id'] = 'field_competency_group';
  $handler->display->display_options['fields']['field_competency_group']['table'] = 'field_data_field_competency_group';
  $handler->display->display_options['fields']['field_competency_group']['field'] = 'field_competency_group';
  $handler->display->display_options['fields']['field_competency_group']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_competency_group']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competency_group']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_competency_group']['delta_offset'] = '0';
  /* Field: Content: Delivery Group */
  $handler->display->display_options['fields']['field_comp_delivery_group']['id'] = 'field_comp_delivery_group';
  $handler->display->display_options['fields']['field_comp_delivery_group']['table'] = 'field_data_field_comp_delivery_group';
  $handler->display->display_options['fields']['field_comp_delivery_group']['field'] = 'field_comp_delivery_group';
  $handler->display->display_options['fields']['field_comp_delivery_group']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_comp_delivery_group']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_comp_grade']['id'] = 'field_comp_grade';
  $handler->display->display_options['fields']['field_comp_grade']['table'] = 'field_data_field_comp_grade';
  $handler->display->display_options['fields']['field_comp_grade']['field'] = 'field_comp_grade';
  $handler->display->display_options['fields']['field_comp_grade']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_comp_grade']['alter']['text'] = 'G[field_comp_grade]';
  $handler->display->display_options['fields']['field_comp_grade']['element_label_type'] = 'strong';
  /* Field: Field: Roles */
  $handler->display->display_options['fields']['field_roles_terms']['id'] = 'field_roles_terms';
  $handler->display->display_options['fields']['field_roles_terms']['table'] = 'field_data_field_roles_terms';
  $handler->display->display_options['fields']['field_roles_terms']['field'] = 'field_roles_terms';
  $handler->display->display_options['fields']['field_roles_terms']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_roles_terms']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_roles_terms']['delta_offset'] = '0';
  /* Field: Content: Skills */
  $handler->display->display_options['fields']['field_skills_terms']['id'] = 'field_skills_terms';
  $handler->display->display_options['fields']['field_skills_terms']['table'] = 'field_data_field_skills_terms';
  $handler->display->display_options['fields']['field_skills_terms']['field'] = 'field_skills_terms';
  $handler->display->display_options['fields']['field_skills_terms']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_skills_terms']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_skills_terms']['delta_offset'] = '0';
  /* Field: Content: Training Details */
  $handler->display->display_options['fields']['field_comp_training_details']['id'] = 'field_comp_training_details';
  $handler->display->display_options['fields']['field_comp_training_details']['table'] = 'field_data_field_comp_training_details';
  $handler->display->display_options['fields']['field_comp_training_details']['field'] = 'field_comp_training_details';
  $handler->display->display_options['fields']['field_comp_training_details']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_comp_training_details']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_comp_training_details']['delta_offset'] = '0';
  /* Field: Content: Assessment */
  $handler->display->display_options['fields']['field_comp_assessment']['id'] = 'field_comp_assessment';
  $handler->display->display_options['fields']['field_comp_assessment']['table'] = 'field_data_field_comp_assessment';
  $handler->display->display_options['fields']['field_comp_assessment']['field'] = 'field_comp_assessment';
  $handler->display->display_options['fields']['field_comp_assessment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_comp_assessment']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_comp_assessment']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Certification */
  $handler->display->display_options['fields']['field_comp_certification']['id'] = 'field_comp_certification';
  $handler->display->display_options['fields']['field_comp_certification']['table'] = 'field_data_field_comp_certification';
  $handler->display->display_options['fields']['field_comp_certification']['field'] = 'field_comp_certification';
  $handler->display->display_options['fields']['field_comp_certification']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_comp_certification']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_comp_certification']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Grade (field_comp_grade) */
  $handler->display->display_options['arguments']['field_comp_grade_value']['id'] = 'field_comp_grade_value';
  $handler->display->display_options['arguments']['field_comp_grade_value']['table'] = 'field_data_field_comp_grade';
  $handler->display->display_options['arguments']['field_comp_grade_value']['field'] = 'field_comp_grade_value';
  $handler->display->display_options['arguments']['field_comp_grade_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_comp_grade_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_comp_grade_value']['default_argument_options']['code'] = '$curacc = user_load($GLOBALS[\'user\']->uid);
$my_field = field_get_items(\'user\', $curacc, \'field_grade\');
$value = "";
if ($my_field) {
   $my_field_item = reset($my_field);
   $value = $my_field_item[\'value\'];
}
if ($value) {
 return $value;
}';
  $handler->display->display_options['arguments']['field_comp_grade_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_comp_grade_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_comp_grade_value']['summary_options']['items_per_page'] = '25';
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
    'competency_track' => 'competency_track',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Grid Block */
  $handler = $view->new_display('block', 'Grid Block', 'grid_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: My Competency */
  $handler = $view->new_display('page', 'My Competency', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'my-competency';
  $handler->display->display_options['menu']['title'] = 'My Competency';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['competency_track'] = array(
    t('Master'),
    t('My Competency'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No competency\'s available.'),
    t('Competency Group'),
    t('Delivery Group'),
    t('Grade'),
    t('G[field_comp_grade]'),
    t('Roles'),
    t('Skills'),
    t('Training Details'),
    t('Assessment'),
    t('Certification'),
    t('All'),
    t('Block'),
    t('Grid Block'),
  );
  $export['competency_track'] = $view;

  return $export;
}
