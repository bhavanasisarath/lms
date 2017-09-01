<div id="user-edit-<?php print $user->uid; ?>" class="user-edit-form col-md-12">
    <div class="user-edit-container" id="user-edit-container">
        <?php print render($form['form_id']); ?>
        <?php print render($form['form_build_id']); ?>
        <?php print render($form['form_token']); ?>
        <input type="input" id="ViewMode" class="currentedittab" name="ViewMode" value="" style="display: none;">

        <div class="useredittabcontainer col-md-4" id="useredittabcontainer">
            <ul class="usereditlist">
                <li id="accountinfo" class="useredittab accountinfo" onclick="clicktab('accountinfo');">Account Information</li>
                <li id="changeprofile" class="useredittab changeprofile" onclick="clicktab('changeprofile');">Profile Information</li>
                <li id="changeadditionalprofile" class="useredittab changeadditionalprofile" onclick="clicktab('changeadditionalprofile');">Competency Track</li>
             <!--   <li id="changepassword" class="useredittab changepassword" onclick="clicktab('changepassword');">Change Password</li> -->
                <li id="accountEdu" class="useredittab accountEdu" onclick="clicktab('accountEdu');">Education</li>
                <li id="accountExp" class="useredittab accountExp" onclick="clicktab('accountExp');">Experience</li>
                <li id="accountEmp" class="useredittab accountEmp" onclick="clicktab('accountEmp');">Employment</li>
                <li id="showalledit" class="useredittab showalledit" onclick="clicktab('showalledit');">Show All</li>

            </ul>
        </div>

        <div class="usereditborder col-md-8" id="usereditborder">
            <div class="showalledit toggleelement"><h3>Account Information</h3></div>
            <?php
            $userInfo = user_load($user->uid);
            $fname = reset($userInfo->field_emp_first_name);
            $mname = reset($userInfo->field_middle_name);
            $lname = reset($userInfo->field_emp_last_name);
            $name = $fname[0]['value'] . " " . $mname[0]['value'] . " " . $lname[0]['value'];
            //$curacc = $userInfo->field_designation['und'][0]['value'];
            $field = field_info_field('field_designation');
            $allowed_values = list_allowed_values($field);
            //print "<pre>";print_r($userInfo);exit; 
            ?>

            <div class="showalledit accountinfo toggleelement"><?php print render($form['account']['name']); ?></div>
            <div class="showalledit accountinfo toggleelement"><h4><?php print $name; ?></h4></div>
            <div class="showalledit accountinfo toggleelement"><h5><?php print $allowed_values[$userInfo->field_designation['und'][0]['value']]; ?> <?php print $userInfo->field_emp_id['und'][0]['value']; ?></h5>		
            </div>
            <div class="showalledit accountinfo toggleelement"><?php //print render($form['group_empdet_grp']['field_last_name']);  ?></div>
            <div class="showalledit accountinfo toggleelement"><?php print $userInfo->mail; ?></div>
            <div class="showalledit accountEmp toggleelement"><?php print render($form['field_employment_details_']); ?></div>
            <div class="showalledit accountExp toggleelement"><?php print render($form['field_prof_exp']); ?></div>
            <div class="showalledit accountEdu toggleelement"><?php print render($form['field_educational_qualifications']); ?></div>

            <div class="showalledit toggleelement"><hr></div>
            <div class="showalledit toggleelement"><h3>Change Password</h3></div>
            <div id="currpass" class="showalledit accountinfo changepassword toggleelement"><?php //print render($form['account']['current_pass']);  ?></div>
            <div class="showalledit changepassword toggleelement"><?php //print render($form['account']['pass']);  ?></div>
            <div class="showalledit toggleelement"><hr></div>
            <div class="showalledit toggleelement"><h3>Profile Information</h3></div>
            <div class="showalledit changeprofile toggleelement"><?php print render($form['group_empdet_grp']['field_address']); ?></div>
            <div class="showalledit changeprofile toggleelement"><?php print render(['group_empdet_grp']['field_emp_phone']); ?></div>
            <div class="showalledit changeprofile toggleelement"><?php print render($form['group_empdet_grp']['field_alias_name']); ?></div>
            <div class="showalledit changeprofile toggleelement"><?php print render($form['group_empdet_grp']['field_emp_id']); ?></div>
            <div class="showalledit changeprofile toggleelement"><?php //print render($form['group_empdet_grp']['field_department']);  ?></div>
            <div class="showalledit toggleelement"><hr></div>
            <div class="showalledit toggleelement"><h3>Competency Track</h3></div>
            <div class="showalledit changeprofile toggleelement"><?php print render($form['group_empdet_grp']['field_department']); ?><hr></div>
            <div class="showalledit changeprofile toggleelement"><?php print render($form['group_empdet_grp']['field_mentor_name']); ?><hr></div>
            <div class="showalledit changeprofile toggleelement"><?php print render($form['group_empdet_grp']['field_project_name ']); ?><hr></div>
            <div class="showalledit changeadditionalprofile toggleelement"><?php print render($form['group_empdet_grp']['timezone']); ?><hr></div>
            <div class="showalledit changeadditionalprofile toggleelement"><?php print render($form['group_ct']); ?><hr></div>
            <div class="showalledit changeadditionalprofile toggleelement"><?php print render($form['group_empdet_grp']['timezone']); ?><hr></div>
            <div class="showalledit changeadditionalprofile toggleelement"><?php print render($form['group_empdet_grp']['timezone']); ?><hr></div>
            <div class="showalledit accountinfo toggleelement"><?php print render($form['field_terms_of_use']); ?></div>
        </div>

<?php print render($form['actions']); ?>
    </div><!--end user-edit container-->

    <script type="text/javascript">
        afterpageload();
        function afterpageload() {
            var themode = getmode();
<?php
//  print('var prevMode =  \'');
// print($_REQUEST['ViewMode']); 
//  print('\';');
?>

            switch (themode) {
                case "chpwd":
                    prevMode = '';
                    break;
                case "chpwdonly":
                    prevMode = '';
                    break;
            }


            switch (themode) {
                case "chpwd":
                    break;
                case "chpwdonly":
                    break;
                default:
                    if (prevMode.length > 0) {
                        themode = prevMode;
                    }
                    break;
            }


            switch (themode) {
                case "chpwd":
                    //select the Change Password tab
                    clicktab("changepassword");
                    //Hide the selector tabs to clean up the interface
                    document.getElementById("useredittabcontainer").style.display = 'none';
                    break;
                case "chpwdonly":
                    //select the Change Password tab
                    clicktab("changepassword");
                    //This is used for password reset, so hide the Current Password field.
                    document.getElementById("currpass").style.display = 'none';
                    //Hide the selector tabs to clean up the interface
                    document.getElementById("useredittabcontainer").style.display = 'none';
                    break;
                case "showchpwd":
                    //Select the Change Password tab.
                    clicktab("changepassword");
                    break;
                case "showprofile":
                    //Select the Profile tab
                    clicktab("changeprofile");
                    break;
                case "showaddlprofile":
                    //Select the Additional Profile Information tab
                    clicktab("changeadditionalprofile");
                    break;
                case "accountEdu":
                    //Select the Additional Profile Information tab
                    clicktab("accountEdu");
                    break;
                case "accountExp":
                    //Select the Additional Profile Information tab
                    clicktab("accountExp");
                    break;
                case "accountEmp":
                    //Select the Additional Profile Information tab
                    clicktab("accountEmp");
                    break;
                case "showall":
                    //Select the Show All tab
                    clicktab("showalledit");
                    break;
                case "showaccount":
                default:
                    //Select the Account Information tab. This is the default behavior.
                    clicktab("accountinfo");
                    break;
            }
        }

        function getmode() {
            //Get the ?viewmode= argument, if any.
<?php
print('var returnmode = \'');
print($_GET["viewmode"]);
print('\';');
?>

            if (returnmode.length == 0) {
                //If there is no ?viewmode= argument, check to see
                //if this is a password reset
                returnmode = ispasswordreset()
            }

            return returnmode;
        }

        function ispasswordreset() {
            //Get the ?pass-reset-token= argument, if any.
<?php
print('var passreset = \'');
print($_GET["pass-reset-token"]);
print('\';');
?>

            if (passreset.length == 0) {
                //This is not a password reset, so start up in the default (normal) tab
                return "normal";
            } else
            {
                //This is a password reset. Start up with the password fields only.
                return "chpwdonly";
            }
        }

        function clicktab(showclass) {
            //Get all of the elements that have the 'toggleelement' class.
            var items = document.getElementsByClassName('toggleelement');

            //Loop through each element, looking for the 'donothide' class.
            //This will allow some elements to be displayed in all modes.
            for (var iCtr = 0; iCtr < items.length; iCtr++) {
                if (!hasClass(items[iCtr], "donothide")) {
                    //This does not have the 'donothide' class. Keep processing.
                    if (hasClass(items[iCtr], showclass)) {
                        //This is marked with the selected class (variable showclass).
                        //Make sure it is visible.
                        items[iCtr].style.display = '';
                    } else
                    {
                        //This is not marked with the selected class. Hide it.
                        items[iCtr].style.display = 'none';
                    }
                }
            }
            //Now that the elements are shown or hidden,
            //Indicate the current tab.
            settabproperties(showclass);
            setParameter(showclass);
        }

        function settabproperties(activetab) {
            //Get all of the elements in the user edit menu/tab list.
            var tabs = document.getElementsByClassName('useredittab');

            //Loop through, looking for the active tab, indicated by the variable activetab.
            for (var iCtr = 0; iCtr < tabs.length; iCtr++) {
                if (hasClass(tabs[iCtr], activetab)) {
                    //This is the active tab.
                    tabs[iCtr].style.backgroundColor = 'red';
                    tabs[iCtr].style.color = 'white';
                    tabs[iCtr].style.borderColor = 'red';
                } else
                {
                    //This is an inactive tab.
                    tabs[iCtr].style.backgroundColor = '#eeeeee';
                    tabs[iCtr].style.color = 'black';
                    tabs[iCtr].style.borderColor = '#bbbbbb';
                }
            }
        }

        function hasClass(element, cls) {
            //Pad the className with spaces, and search for the class (cls).
            //cls is also padded to ensure that any results found are not substrings
            //of other classes.
            return (' ' + element.className + ' ').search(' ' + cls + ' ') > -1;
        }

        function setParameter(currTab) {
            var newViewmode = '';
            switch (currTab) {
                case "accountinfo":
                    newViewmode = 'showaccount';
                    break;
                case "changeprofile":
                    newViewmode = 'showprofile';
                    break;
                case "changeadditionalprofile":
                    newViewmode = 'showaddlprofile';
                    break;
                case "changepassword":
                    newViewmode = 'showchpwd';
                    break;
                case "showalledit":
                    newViewmode = 'showall';
                    break;
                default:
                    newViewmode = "default";
                    break;
            }
            document.getElementById('ViewMode').value = newViewmode;
        }
    </script>
</div><!--end user-edit-->
