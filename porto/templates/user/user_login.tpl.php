<?php 
/**
 * User login custom tpl.
 **/
 
?>
<div class="labels-inputs">
<?php
        print drupal_render($form['name']);
	print drupal_render($form['pass']);
  ?> 
   <div class="login">
   <?php
        // render login button
	print drupal_render($form['form_build_id']);
	print drupal_render($form['form_id']);
	print drupal_render($form['actions']);
    ?>
   </div><!--login-->

   </div><!--labels-inputs-->
       