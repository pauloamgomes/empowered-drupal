<?php
/**
 * @file
 * empowered_security.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function empowered_security_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_activity_threshold';
  $strongarm->value = '50';
  $export['login_security_activity_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_disable_core_login_error';
  $strongarm->value = 1;
  $export['login_security_disable_core_login_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_hard_banned';
  $strongarm->value = 'The IP address @ip is banned at @site, and will not be able to access any of its content from now on. Please contact the site administrator.';
  $export['login_security_host_hard_banned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_soft_banned';
  $strongarm->value = 'This host is not allowed to log in to @site. Please contact your site administrator.';
  $export['login_security_host_soft_banned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_wrong_count';
  $strongarm->value = '20';
  $export['login_security_host_wrong_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_wrong_count_hard';
  $strongarm->value = '100';
  $export['login_security_host_wrong_count_hard'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_last_access_timestamp';
  $strongarm->value = 1;
  $export['login_security_last_access_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_last_login_timestamp';
  $strongarm->value = 1;
  $export['login_security_last_login_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_login_activity_email_body';
  $strongarm->value = 'The configured threshold of @activity_threshold logins has been reached with a total of @tracking_current_count invalid login attempts. You should review your log information about login attempts at @site.';
  $export['login_security_login_activity_email_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_login_activity_email_subject';
  $strongarm->value = 'Security information: Unexpected login activity has been detected at @site.';
  $export['login_security_login_activity_email_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_login_activity_email_user';
  $strongarm->value = '';
  $export['login_security_login_activity_email_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_notice_attempts_available';
  $strongarm->value = 0;
  $export['login_security_notice_attempts_available'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_notice_attempts_message';
  $strongarm->value = 'You have used @user_current_count out of @user_block_attempts login attempts. After all @user_block_attempts have been used, you will be unable to login.';
  $export['login_security_notice_attempts_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_track_time';
  $strongarm->value = '1';
  $export['login_security_track_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked';
  $strongarm->value = 'The user @username has been blocked due to failed login attempts.';
  $export['login_security_user_blocked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked_email_body';
  $strongarm->value = 'The user @username (@edit_uri) has been blocked at @site due to the amount of failed login attempts. Please check the logs for more information.';
  $export['login_security_user_blocked_email_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked_email_subject';
  $strongarm->value = 'Security action: The user @username has been blocked.';
  $export['login_security_user_blocked_email_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked_email_user';
  $strongarm->value = '';
  $export['login_security_user_blocked_email_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_wrong_count';
  $strongarm->value = '20';
  $export['login_security_user_wrong_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_admin';
  $strongarm->value = 1;
  $export['password_policy_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_begin';
  $strongarm->value = '0';
  $export['password_policy_begin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_block';
  $strongarm->value = '0';
  $export['password_policy_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_force_change_reset';
  $strongarm->value = 0;
  $export['password_policy_force_change_reset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_show_restrictions';
  $strongarm->value = 0;
  $export['password_policy_show_restrictions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_body';
  $strongarm->value = '!username,

Your password at !site will expire in less than !days_left day(s).

Please go to !edit_uri to change your password.';
  $export['password_policy_warning_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_subject';
  $strongarm->value = 'Password expiration warning for !username at !site';
  $export['password_policy_warning_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_rid_2';
  $strongarm->value = '0';
  $export['session_limit_rid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_rid_3';
  $strongarm->value = '1';
  $export['session_limit_rid_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_rid_4';
  $strongarm->value = '1';
  $export['session_limit_rid_4'] = $strongarm;

  return $export;
}
