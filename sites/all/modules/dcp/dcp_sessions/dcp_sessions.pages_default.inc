<?php
/**
 * @file
 * dcp_sessions.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dcp_sessions_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dcp_schedule_page';
  $page->task = 'page';
  $page->admin_title = 'DCP Schedule page';
  $page->admin_description = '';
  $page->path = 'node/%node/dcp-schedule';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Conference',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dcp_schedule_page__panel_context_007e3528-6dcb-41e8-a47b-4e0cd50a8bd8';
  $handler->task = 'page';
  $handler->subtask = 'dcp_schedule_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Schedule Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Schedule';
  $display->uuid = '77ac51b8-f86c-4684-8b15-b3f0ea5cdd0c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-da4f4f1a-2b55-4e8e-95ce-e40a92a0dbfb';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'cod_schedule-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da4f4f1a-2b55-4e8e-95ce-e40a92a0dbfb';
    $display->content['new-da4f4f1a-2b55-4e8e-95ce-e40a92a0dbfb'] = $pane;
    $display->panels['left'][0] = 'new-da4f4f1a-2b55-4e8e-95ce-e40a92a0dbfb';
    $pane = new stdClass();
    $pane->pid = 'new-6765adcc-5ccd-41cc-bfa8-598dd6feaf38';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'tweet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '6765adcc-5ccd-41cc-bfa8-598dd6feaf38';
    $display->content['new-6765adcc-5ccd-41cc-bfa8-598dd6feaf38'] = $pane;
    $display->panels['right'][0] = 'new-6765adcc-5ccd-41cc-bfa8-598dd6feaf38';
    $pane = new stdClass();
    $pane->pid = 'new-c3f03e08-2805-47e1-a19b-e874f808087d';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'facebook_like_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'c3f03e08-2805-47e1-a19b-e874f808087d';
    $display->content['new-c3f03e08-2805-47e1-a19b-e874f808087d'] = $pane;
    $display->panels['right'][1] = 'new-c3f03e08-2805-47e1-a19b-e874f808087d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da4f4f1a-2b55-4e8e-95ce-e40a92a0dbfb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dcp_schedule_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'propose_a_session';
  $page->task = 'page';
  $page->admin_title = 'Propose a session';
  $page->admin_description = 'Propose a session';
  $page->path = 'session/propose';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_propose_a_session__panel_context_66799b03-a890-4529-bb9f-ddd89a2a8892';
  $handler->task = 'page';
  $handler->subtask = 'propose_a_session';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Propose a session',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node add form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'session',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ea851b94-befd-40e7-bdd2-32115e5485d5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3dc3f040-4960-46b5-a269-5a6e4c887fee';
    $pane->panel = 'left';
    $pane->type = 'snippet';
    $pane->subtype = 'call_for_papers_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '3dc3f040-4960-46b5-a269-5a6e4c887fee';
    $display->content['new-3dc3f040-4960-46b5-a269-5a6e4c887fee'] = $pane;
    $display->panels['left'][0] = 'new-3dc3f040-4960-46b5-a269-5a6e4c887fee';
    $pane = new stdClass();
    $pane->pid = 'new-617681a4-73bf-4120-bb97-63df66058bca';
    $pane->panel = 'left';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = '617681a4-73bf-4120-bb97-63df66058bca';
    $display->content['new-617681a4-73bf-4120-bb97-63df66058bca'] = $pane;
    $display->panels['left'][1] = 'new-617681a4-73bf-4120-bb97-63df66058bca';
    $pane = new stdClass();
    $pane->pid = 'new-c5c7d16e-b294-438c-94cd-35d888357ef1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c5c7d16e-b294-438c-94cd-35d888357ef1';
    $display->content['new-c5c7d16e-b294-438c-94cd-35d888357ef1'] = $pane;
    $display->panels['left'][2] = 'new-c5c7d16e-b294-438c-94cd-35d888357ef1';
    $pane = new stdClass();
    $pane->pid = 'new-1d262388-d182-4574-bdc9-8c0b8dbe7a74';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'tweet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '1d262388-d182-4574-bdc9-8c0b8dbe7a74';
    $display->content['new-1d262388-d182-4574-bdc9-8c0b8dbe7a74'] = $pane;
    $display->panels['right'][0] = 'new-1d262388-d182-4574-bdc9-8c0b8dbe7a74';
    $pane = new stdClass();
    $pane->pid = 'new-b0e8df78-a2bf-40ab-9021-4dd3e1956f36';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'facebook_like_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b0e8df78-a2bf-40ab-9021-4dd3e1956f36';
    $display->content['new-b0e8df78-a2bf-40ab-9021-4dd3e1956f36'] = $pane;
    $display->panels['right'][1] = 'new-b0e8df78-a2bf-40ab-9021-4dd3e1956f36';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1d262388-d182-4574-bdc9-8c0b8dbe7a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['propose_a_session'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sessions_accepted';
  $page->task = 'page';
  $page->admin_title = 'Sessions Accepted';
  $page->admin_description = '';
  $page->path = 'sessions/accepted';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sessions_accepted__panel_context_8bade4aa-92dc-40bd-af86-9f0d63db7f8a';
  $handler->task = 'page';
  $handler->subtask = 'sessions_accepted';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Sessions Proposed',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f90b3485-1e56-47a0-b121-3d14ad2c9e56';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-479c4768-9eae-4d65-bc69-f2118a568cf0';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'all_sessions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '479c4768-9eae-4d65-bc69-f2118a568cf0';
    $display->content['new-479c4768-9eae-4d65-bc69-f2118a568cf0'] = $pane;
    $display->panels['left'][0] = 'new-479c4768-9eae-4d65-bc69-f2118a568cf0';
    $pane = new stdClass();
    $pane->pid = 'new-80c0f4fe-8705-4140-9cb0-1e7241c72f27';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'tweet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '80c0f4fe-8705-4140-9cb0-1e7241c72f27';
    $display->content['new-80c0f4fe-8705-4140-9cb0-1e7241c72f27'] = $pane;
    $display->panels['right'][0] = 'new-80c0f4fe-8705-4140-9cb0-1e7241c72f27';
    $pane = new stdClass();
    $pane->pid = 'new-2d070a05-3e7a-49c5-b962-dae46f231fec';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'facebook_like_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '2d070a05-3e7a-49c5-b962-dae46f231fec';
    $display->content['new-2d070a05-3e7a-49c5-b962-dae46f231fec'] = $pane;
    $display->panels['right'][1] = 'new-2d070a05-3e7a-49c5-b962-dae46f231fec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-80c0f4fe-8705-4140-9cb0-1e7241c72f27';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sessions_accepted'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sessions_proposed';
  $page->task = 'page';
  $page->admin_title = 'Sessions Proposed';
  $page->admin_description = '';
  $page->path = 'sessions/proposed';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sessions_proposed__panel_context_ebafd9e9-76ce-48ba-9608-94f5770c9bfc';
  $handler->task = 'page';
  $handler->subtask = 'sessions_proposed';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Sessions Proposed',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f90b3485-1e56-47a0-b121-3d14ad2c9e56';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5beccb98-090d-4e3b-9820-41e38c03d7fa';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'all_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5beccb98-090d-4e3b-9820-41e38c03d7fa';
    $display->content['new-5beccb98-090d-4e3b-9820-41e38c03d7fa'] = $pane;
    $display->panels['left'][0] = 'new-5beccb98-090d-4e3b-9820-41e38c03d7fa';
    $pane = new stdClass();
    $pane->pid = 'new-80c0f4fe-8705-4140-9cb0-1e7241c72f27';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'tweet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '80c0f4fe-8705-4140-9cb0-1e7241c72f27';
    $display->content['new-80c0f4fe-8705-4140-9cb0-1e7241c72f27'] = $pane;
    $display->panels['right'][0] = 'new-80c0f4fe-8705-4140-9cb0-1e7241c72f27';
    $pane = new stdClass();
    $pane->pid = 'new-2d070a05-3e7a-49c5-b962-dae46f231fec';
    $pane->panel = 'right';
    $pane->type = 'snippet';
    $pane->subtype = 'facebook_like_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '2d070a05-3e7a-49c5-b962-dae46f231fec';
    $display->content['new-2d070a05-3e7a-49c5-b962-dae46f231fec'] = $pane;
    $display->panels['right'][1] = 'new-2d070a05-3e7a-49c5-b962-dae46f231fec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-80c0f4fe-8705-4140-9cb0-1e7241c72f27';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sessions_proposed'] = $page;

  return $pages;

}
