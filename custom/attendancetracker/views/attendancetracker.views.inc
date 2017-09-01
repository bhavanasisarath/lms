<?php

/**
 * @file
 * Expose 'trainings_attendancetracker' data table for views.
 */

/**
 * Implements hook_views_data().
 *
 * Views data definition for table trainings_attendancetracker.
 */
function attendancetracker_views_data() {
  $data = array();
  _trainings_attendancetracker_views_data($data);
  return $data;
}

/**
 * Callback to expose 'trainings_attendancetracker' data table for views.
 */
function _trainings_attendancetracker_views_data(&$data) {
  $data['trainings_attendancetracker']['table']['group'] = t('Attendance');
  $data['trainings_attendancetracker']['table']['base'] = array(
    'field' => 'id',
    'title' => t('AttendanceTracker'),
    'help' => t('trainings attendance record'),
  );
  $data['trainings_attendancetracker']['id'] = array(
    'title' => t('Id'),
    'help' => t('Primary key of trainings_attendancetracker table'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['trainings_attendancetracker']['user_id'] = array(
    'title' => t('Attendance taken/edited by Uid'),
    'help' => t('Attendance taken/edited by Uid'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'title' => t('Attendance modified by user and users table relationship'),
      'help' => t('Attendance modified by user and users table relationship'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'field' => 'user_id',
      'label' => t('Attendance modified by user and users relationship'),
    ),
  );
  $data['trainings_attendancetracker']['training_id'] = array(
    'title' => t('Training Id of training'),
    'help' => t('Training Id'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'node', // The name of the table to join with.
      'base field' => 'nid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('trainings_attendancetracker Relationship with node type training'),
      'title' => t('trainings_attendancetracker Relationship with node type training'),
      'help' => t('trainings_attendancetracker Relationship with node type training'),
    ),
  );
  $data['trainings_attendancetracker']['session_id'] = array(
    'title' => t('Session Id of Session'),
    'help' => t('Session Id of Session for which attendance is taken'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'node', // The name of the table to join with.
      'base field' => 'nid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('trainings_attendancetracker Relationship with node type session'),
      'title' => t('trainings_attendancetracker Relationship with node type session'),
      'help' => t('trainings_attendancetracker Relationship with node type session'),
    ),
  );
  $data['trainings_attendancetracker']['trainer_id'] = array(
    'title' => t('Trainer Id'),
    'help' => t('Trainer Id who has given this training'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'title' => t('Trainer and users table relationship'),
      'help' => t('Trainer table and users table relationship'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'field' => 'trainer_id',
      'label' => t('trainer and users relationship'),
    ),
  );
  $data['trainings_attendancetracker']['duration'] = array(
    'title' => t('Duration'),
    'help' => t('Duration for the session'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    )
  );
  $data['trainings_attendancetracker']['participant_id'] = array(
    'title' => t('Participant Id'),
    'help' => t('participant Id who has taken this training'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'title' => t('Participant and users table relationship'),
      'help' => t('Participant table and users table relationship'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'field' => 'participant_id',
      'label' => t('participant and users relationship'),
    ),
  );
  $data['trainings_attendancetracker']['at_status'] = array(
    'title' => t('Attendance Status'),
    'help' => t('Attendance Status'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    )
  );
}
