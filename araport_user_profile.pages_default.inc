<?php
/**
 * @file
 * araport_user_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function araport_user_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default profile',
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
  $display->title = '%user:field-first-name %user:field-last-name <small>| %user:name</small>';
  $display->uuid = '622c471a-1f03-4e03-8014-1f50e2fcb7c7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a0f076b-62f7-4ecb-a9ec-bde34976e651';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a0f076b-62f7-4ecb-a9ec-bde34976e651';
    $display->content['new-6a0f076b-62f7-4ecb-a9ec-bde34976e651'] = $pane;
    $display->panels['bottom'][0] = 'new-6a0f076b-62f7-4ecb-a9ec-bde34976e651';
    $pane = new stdClass();
    $pane->pid = 'new-8d12cffc-f831-4343-bfc8-a5f014aee1a6';
    $pane->panel = 'left';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d12cffc-f831-4343-bfc8-a5f014aee1a6';
    $display->content['new-8d12cffc-f831-4343-bfc8-a5f014aee1a6'] = $pane;
    $display->panels['left'][0] = 'new-8d12cffc-f831-4343-bfc8-a5f014aee1a6';
    $pane = new stdClass();
    $pane->pid = 'new-b592bbfa-1a08-4d5e-b813-3e42a514fb67';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_research_areas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b592bbfa-1a08-4d5e-b813-3e42a514fb67';
    $display->content['new-b592bbfa-1a08-4d5e-b813-3e42a514fb67'] = $pane;
    $display->panels['left'][1] = 'new-b592bbfa-1a08-4d5e-b813-3e42a514fb67';
    $pane = new stdClass();
    $pane->pid = 'new-51c3076a-82d5-48ee-99e5-d9fc9e93699c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_funding_agencies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '51c3076a-82d5-48ee-99e5-d9fc9e93699c';
    $display->content['new-51c3076a-82d5-48ee-99e5-d9fc9e93699c'] = $pane;
    $display->panels['left'][2] = 'new-51c3076a-82d5-48ee-99e5-d9fc9e93699c';
    $pane = new stdClass();
    $pane->pid = 'new-517e054e-3bde-44a5-b00f-3bce0ab970fa';
    $pane->panel = 'left';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '517e054e-3bde-44a5-b00f-3bce0ab970fa';
    $display->content['new-517e054e-3bde-44a5-b00f-3bce0ab970fa'] = $pane;
    $display->panels['left'][3] = 'new-517e054e-3bde-44a5-b00f-3bce0ab970fa';
    $pane = new stdClass();
    $pane->pid = 'new-d179c497-22ac-48c9-9dcf-61b142996e14';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_institution';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd179c497-22ac-48c9-9dcf-61b142996e14';
    $display->content['new-d179c497-22ac-48c9-9dcf-61b142996e14'] = $pane;
    $display->panels['right'][0] = 'new-d179c497-22ac-48c9-9dcf-61b142996e14';
    $pane = new stdClass();
    $pane->pid = 'new-24572cac-1459-44db-bd48-ba0a8a7dafb7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_department';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24572cac-1459-44db-bd48-ba0a8a7dafb7';
    $display->content['new-24572cac-1459-44db-bd48-ba0a8a7dafb7'] = $pane;
    $display->panels['right'][1] = 'new-24572cac-1459-44db-bd48-ba0a8a7dafb7';
    $pane = new stdClass();
    $pane->pid = 'new-197c0ed8-a745-413c-9d7e-ebb4299346d5';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_occupation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '197c0ed8-a745-413c-9d7e-ebb4299346d5';
    $display->content['new-197c0ed8-a745-413c-9d7e-ebb4299346d5'] = $pane;
    $display->panels['right'][2] = 'new-197c0ed8-a745-413c-9d7e-ebb4299346d5';
    $pane = new stdClass();
    $pane->pid = 'new-56873651-f9f9-4dd0-b51c-4ac96dc814a6';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_city';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '56873651-f9f9-4dd0-b51c-4ac96dc814a6';
    $display->content['new-56873651-f9f9-4dd0-b51c-4ac96dc814a6'] = $pane;
    $display->panels['right'][3] = 'new-56873651-f9f9-4dd0-b51c-4ac96dc814a6';
    $pane = new stdClass();
    $pane->pid = 'new-73f92d0d-59dc-4d4c-91b8-f1739dba37d2';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_state_province';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '73f92d0d-59dc-4d4c-91b8-f1739dba37d2';
    $display->content['new-73f92d0d-59dc-4d4c-91b8-f1739dba37d2'] = $pane;
    $display->panels['right'][4] = 'new-73f92d0d-59dc-4d4c-91b8-f1739dba37d2';
    $pane = new stdClass();
    $pane->pid = 'new-d2de4e15-3a49-4cbd-a1c6-0c7aacf03d15';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'country_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd2de4e15-3a49-4cbd-a1c6-0c7aacf03d15';
    $display->content['new-d2de4e15-3a49-4cbd-a1c6-0c7aacf03d15'] = $pane;
    $display->panels['right'][5] = 'new-d2de4e15-3a49-4cbd-a1c6-0c7aacf03d15';
    $pane = new stdClass();
    $pane->pid = 'new-0d5a7128-dc72-4b2f-9525-10ed3525ea17';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_mobile_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0d5a7128-dc72-4b2f-9525-10ed3525ea17';
    $display->content['new-0d5a7128-dc72-4b2f-9525-10ed3525ea17'] = $pane;
    $display->panels['right'][6] = 'new-0d5a7128-dc72-4b2f-9525-10ed3525ea17';
    $pane = new stdClass();
    $pane->pid = 'new-b24e5d57-ad80-45d1-9b38-3ca7e29ffb8b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b24e5d57-ad80-45d1-9b38-3ca7e29ffb8b';
    $display->content['new-b24e5d57-ad80-45d1-9b38-3ca7e29ffb8b'] = $pane;
    $display->panels['right'][7] = 'new-b24e5d57-ad80-45d1-9b38-3ca7e29ffb8b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d179c497-22ac-48c9-9dcf-61b142996e14';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
