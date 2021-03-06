<?php
/**
 * @file
 * napo_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function napo_contact_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact us';
  $page->admin_description = '';
  $page->path = 'faq';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Content',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '55',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Content 2',
        'keyword' => 'node_2',
        'name' => 'entity:node',
        'entity_id' => '58',
        'id' => 2,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'FAQ',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'form',
        ),
        'parent' => 'main',
        'class' => 'contact-content-wrapper',
        'hide_empty' => 1,
      ),
      'form' => array(
        'type' => 'region',
        'title' => 'Contact content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'container',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'form_',
        ),
        'parent' => 'main',
        'class' => 'contact-form-wrapper',
        'hide_empty' => 1,
      ),
      'form_' => array(
        'type' => 'region',
        'title' => 'Form',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'container',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'form' => NULL,
      'form_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title-field';
  $display->uuid = '09f4eb3a-d953-42a2-b462-034023030f5a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3d25cf45-016d-46c9-bc67-6cdc8d8c8a27';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'context_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d25cf45-016d-46c9-bc67-6cdc8d8c8a27';
    $display->content['new-3d25cf45-016d-46c9-bc67-6cdc8d8c8a27'] = $pane;
    $display->panels['center'][0] = 'new-3d25cf45-016d-46c9-bc67-6cdc8d8c8a27';
    $pane = new stdClass();
    $pane->pid = 'new-874d4ecb-3c87-42c4-a50c-95577656a7cd';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'faqs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '874d4ecb-3c87-42c4-a50c-95577656a7cd';
    $display->content['new-874d4ecb-3c87-42c4-a50c-95577656a7cd'] = $pane;
    $display->panels['content'][0] = 'new-874d4ecb-3c87-42c4-a50c-95577656a7cd';
    $pane = new stdClass();
    $pane->pid = 'new-c2cb699b-7106-4e61-ad68-4dad9497d7bd';
    $pane->panel = 'form';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h3',
        'title_link' => '',
        'title_class' => '',
        'field_formatter_class' => '',
      ),
      'context' => 'context_entity:node_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2cb699b-7106-4e61-ad68-4dad9497d7bd';
    $display->content['new-c2cb699b-7106-4e61-ad68-4dad9497d7bd'] = $pane;
    $display->panels['form'][0] = 'new-c2cb699b-7106-4e61-ad68-4dad9497d7bd';
    $pane = new stdClass();
    $pane->pid = 'new-28ec1392-70bf-481d-99dc-a49160341f16';
    $pane->panel = 'form';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'context_entity:node_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '28ec1392-70bf-481d-99dc-a49160341f16';
    $display->content['new-28ec1392-70bf-481d-99dc-a49160341f16'] = $pane;
    $display->panels['form'][1] = 'new-28ec1392-70bf-481d-99dc-a49160341f16';
    $pane = new stdClass();
    $pane->pid = 'new-6a3a4f4b-fdef-4eda-b9a5-6a953cba0c24';
    $pane->panel = 'form_';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-43';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a3a4f4b-fdef-4eda-b9a5-6a953cba0c24';
    $display->content['new-6a3a4f4b-fdef-4eda-b9a5-6a953cba0c24'] = $pane;
    $display->panels['form_'][0] = 'new-6a3a4f4b-fdef-4eda-b9a5-6a953cba0c24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-874d4ecb-3c87-42c4-a50c-95577656a7cd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'oira_faqs';
  $page->task = 'page';
  $page->admin_title = 'OiRA FAQs';
  $page->admin_description = 'OiRA FAQs';
  $page->path = 'oira-faqs';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_oira_faqs__panel';
  $handler->task = 'page';
  $handler->subtask = 'oira_faqs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'OiRA FAQs',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'oira-faqs-page container',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'OiRA FAQs',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'OiRA FAQs';
  $display->uuid = '3e3b7c50-25ff-44e6-8cc2-3efb6a91c2ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6fe1b51c-6c62-4fda-8ab8-37ca4c771cfc';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'faqs_oira';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6fe1b51c-6c62-4fda-8ab8-37ca4c771cfc';
    $display->content['new-6fe1b51c-6c62-4fda-8ab8-37ca4c771cfc'] = $pane;
    $display->panels['center'][0] = 'new-6fe1b51c-6c62-4fda-8ab8-37ca4c771cfc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6fe1b51c-6c62-4fda-8ab8-37ca4c771cfc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['oira_faqs'] = $page;

  return $pages;

}
