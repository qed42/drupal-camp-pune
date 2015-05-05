<?php
/**
 * @file
 * dcp_home_page.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function dcp_home_page_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Facebook Like Box';
  $snippet->name = 'facebook_like_box';
  $snippet->title = 'Facebook Like Box';
  $export['facebook_like_box'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Tweet';
  $snippet->name = 'tweet';
  $snippet->title = '';
  $export['tweet'] = $snippet;

  return $export;
}
