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

$final_output = "";
$curacc = user_load($GLOBALS['user']->uid);
$my_field = field_get_items('user', $curacc, 'field_training_details');
$values = [];
if (is_array($my_field)) {
  foreach ($my_field as $field_item) {
    $values[] = $field_item['value'];
  }
}
$final_output = "";
$matched = 0;
$final_output .= '<div class="item-list" ><ul>';
foreach ($row->field_field_comp_training_details as $output_item) {
  $li_class = "list-none";
  $ok_sysbol = "";
  $ok = "glyphicon glyphicon-minus";
  if (!taxonomy_get_children($output_item['raw']['tid'])) {
    if (in_array($output_item['raw']['tid'], $values)) {//Match
      $ok = "glyphicon glyphicon-ok ok-sign media-left";
      $li_class .= " competency-met";
      $matched++;
    }
    $ok_sysbol = "<i class='" . $ok . " media-left' ></i>";
    $final_output .= "<li class='" . $li_class . "' >";
    $final_output .= $ok_sysbol . "<span class='media-right' >";
    $final_output .= "<a href='training-list/" . $output_item['raw']['tid'] . "'>" . $output_item['rendered']['#markup'] . "</a>";
    $final_output .= "</span>";
    $final_output .= "</li>";
  }
  else {
    //$final_output .= "<li class='".$li_class."' >" . $output_item['rendered']['#markup'] . '</li><ul>';
  }
}
$final_output .= "</ul></div>";
//Change the color of the field to met
if ($matched == count($row->field_field_comp_training_details)) { //If all items are matched
  ?>
  <style>
      .view-competency-track td.views-field-field-comp-training-details   {
          background-color:wheat;
      }
  </style>
  <?php

}
print $final_output;
?>