<?php
/**
 * Page tpl for the login page.inheried the better login tpl.
 * content for user login getting from user-login.tpl.php.
**/ ?>
<div id="auth_box" class="login">
    <div id="top_part">
        <h1 id="the_logo">
            <a href="<?php print url('<front>'); ?>">
                <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
            </a>
        </h1>
    </div>

    <div id="middle_part form" class="middle-login">

       
            <div class="form-shadow">
                <h2 class="title login-text"><p><?php //print $title; ?>User Login</p></h2>

                <?php print $messages; ?>

                <?php print render($page['content']); ?>
            </div>
        
    </div>
</div>
