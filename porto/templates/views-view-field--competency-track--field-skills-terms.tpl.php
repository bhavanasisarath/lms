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
$my_field = field_get_items('user', $curacc, 'field_skills_terms');
$values = [];
if (is_array($my_field)) {
  foreach ($my_field as $field_item) {
    $values[] = $field_item['tid'];
  }
}
$final_output = "";
$matched = 0;
$data = $row->field_field_skills_terms;
$final_output .= '<div class="item-list" ><ul>';

foreach ($row->field_field_skills_terms as $output_item) {
  $li_class = "list-none";
  $ok_sysbol = "";
  $ok = "glyphicon glyphicon-minus";
  if (!taxonomy_get_children($output_item['raw']['tid'])) {
    if (in_array($output_item['raw']['tid'], $values)) { //Match 
      $ok = "glyphicon glyphicon-ok";
      $li_class .= " competency-met";
      $matched++;
    }
    $ok_sysbol = "<i class='" . $ok . " media-left' ></i>";
    $final_output .= "<li class='" . $li_class . "' >";
    $final_output .= $ok_sysbol . "<span class='media-right' >";
    $final_output .= $output_item['rendered']['#markup'];
    $final_output .= "</span>";
    $final_output .= "</li>";
  }
  else {
    //$final_output .= "<li class='".$li_class."' >" . $output_item['rendered']['#markup'] . '</li><ul>';
  }
}

if (isset($curacc->field_skills_added_by_admin['und'])) {
  foreach ($curacc->field_skills_added_by_admin['und'] as $key => $value) {
    if (in_array($value['tid'], $values)) { //Match 
      $ok = "glyphicon glyphicon-ok";
      $li_class .= " competency-met";
      $matched++;
    }
    $term = taxonomy_term_load($value['tid']);
    $name = $term->name;
    $ok_sysbol = "<i class='" . $ok . " media-left' ></i>";
    $final_output .= "<li class='" . $li_class . "' >";
    $final_output .= $ok_sysbol . "<span class='media-right' >";
    $final_output .= $name;
    $final_output .= "</span>";
    $final_output .= "</li>";
  }
}
$final_output .= "</ul></div>";
//Change the color of the field to met
if ($matched == count($row->field_field_skills_terms)) { //If all items are matched
  ?>
  <style>
      .view-competency-track td.views-field-field-skills-terms  {
          background-color:wheat;
      }
  </style>
  <?php

}
print $final_output;
?>