<?php
/**
 * @file
 * osha.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function osha_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'related_content';
  $mini->category = 'oira';
  $mini->admin_title = 'Related content';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
          2 => 2,
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 1,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '38.66677745441103',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'column',
        'width' => '31.19314693900329',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'column',
        'width' => '30.140075606585665',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 1,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd9b3dd78-0cf4-4a3a-ae46-f63c401e10de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6701ded4-5a2d-4409-9649-b01150e80862';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'oira_blocks-related_ncw_publications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Publications',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6701ded4-5a2d-4409-9649-b01150e80862';
    $display->content['new-6701ded4-5a2d-4409-9649-b01150e80862'] = $pane;
    $display->panels['center'][0] = 'new-6701ded4-5a2d-4409-9649-b01150e80862';
    $pane = new stdClass();
    $pane->pid = 'new-a7b310d5-0d1f-4ebe-af3d-73858cf51eae';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'oira_blocks-oshwiki_featured_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'OSH Wiki',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7b310d5-0d1f-4ebe-af3d-73858cf51eae';
    $display->content['new-a7b310d5-0d1f-4ebe-af3d-73858cf51eae'] = $pane;
    $display->panels['left'][0] = 'new-a7b310d5-0d1f-4ebe-af3d-73858cf51eae';
    $pane = new stdClass();
    $pane->pid = 'new-0e31649c-8c54-4013-a253-a3ae420ea455';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => 'News',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e31649c-8c54-4013-a253-a3ae420ea455';
    $display->content['new-0e31649c-8c54-4013-a253-a3ae420ea455'] = $pane;
    $display->panels['right'][0] = 'new-0e31649c-8c54-4013-a253-a3ae420ea455';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['related_content'] = $mini;

  return $export;
}
