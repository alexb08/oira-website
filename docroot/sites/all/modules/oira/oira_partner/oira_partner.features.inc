<?php
/**
 * @file
 * oira_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_partner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function oira_partner_node_info() {
  $items = array(
    'collaborator' => array(
      'name' => 'Collaborator',
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
    'partner' => array(
      'name' => 'Partner',
      'base' => 'node_content',
      'description' => 'Content type to store info about Official Campaign Partners and Media Partners',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}