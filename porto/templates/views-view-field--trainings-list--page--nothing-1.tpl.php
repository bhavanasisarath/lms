<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
$training_id = $row->nid;
if (!empty($training_id)) {
  $session_ids = trianzkm_get_training_sessions($training_id, '');
  if (!empty($session_ids)) {
    $result = trianzkm_get_training_timings($session_ids);
  }
}

if (!empty($result)) {
  $start_date = date_create($result[0]->start_date);
  $start_date_format = date_format($start_date,"m/d/Y");

  $end_date = date_create($result[0]->end_date);
  $end_date_format = date_format($end_date,"m/d/Y");
  
  $output = $start_date_format . " - " . $end_date_format;
}
?>
<?php print $output; ?>
