<?php
/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
 ?>
<div class="row" >
	<div class="col-md-4">
	  <div class="team-item thumbnail">
	    <?php print render($user_profile['user_picture']); ?>
	  </div>
	</div>
	
	<div class="col-md-8">	
		<h2 class="shorter">&nbsp;</h2>
		<h4><?php $name = render($user_profile['field_emp_first_name'])." ".render($user_profile['field_emp_last_name']); 
			print $name;
		?></h4>
		<h5><?php print render($user_profile['field_designation']); ?> <?php print render($user_profile['field_emp_id']); ?></h5>		
		<h6><?php print render($user_profile['field_prof_exp']); ?></h6>
		<h6><?php print render($user_profile['field_employment_details_']); ?></h6>
		<h6><?php print render($user_profile['field_educational_qualifications']); ?></h6>
                <span class="thumb-info-social-icons">
			<a rel="tooltip" data-placement="bottom" target="_blank" href="#" data-original-title="Facebook"><i class="icon icon-facebook"></i><span>Facebook</span></a>
			<a rel="tooltip" data-placement="bottom" href="#" data-original-title="Twitter"><i class="icon icon-twitter"></i><span>Twitter</span></a>
			<a rel="tooltip" data-placement="bottom" href="#" data-original-title="Linkedin"><i class="icon icon-linkedin"></i><span>Linkedin</span></a>
		</span>
	
	</div>
</div>
