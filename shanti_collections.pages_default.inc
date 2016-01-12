<?php
/**
 * @file
 * shanti_collections.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function shanti_collections_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_61ca28d8-5f1f-4434-9613-f8954b9634e6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Collection',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'shanti-texts-collection',
    'css' => '#shanti-texts-collection .shanti-collection-body {
  margin-top: -1rem;
}
#shanti-texts-collection .shanti-collection-body .pane-title {
  margin-bottom: 2rem;
}

#shanti-collection-featured-image .field-name-field-general-featured-image {
  margin-right: 1rem;
}',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'collection' => 'collection',
              'subcollection' => 'subcollection',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_css_js_files_css' => '',
    'panels_css_js_files_js' => '',
    'panels_css_js_code_css' => '.field-name-body {
  margin-top: -1rem;
}

.pane-node-field-general-featured-image {
  margin-right: 1rem;
}

a.shanti-collections-create-link {
  margin-left: -1rem;
}
',
    'panels_css_js_code_js' => '',
    'panels_css_js_code_js_wrapper' => '0',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'de7da5ca-bd6a-4157-9149-0bb1be877440';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b295d2b8-7207-4d73-b855-ca4d8754704b';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'all_texts-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '36',
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
      'fields_override' => array(
        'title' => 1,
        'field_book_author' => 1,
        'field_dc_date_orginial_year' => 0,
        'field_dc_date_publication_year' => 1,
        'field_dc_description' => 1,
        'title_1' => 0,
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
    $pane->uuid = 'b295d2b8-7207-4d73-b855-ca4d8754704b';
    $display->content['new-b295d2b8-7207-4d73-b855-ca4d8754704b'] = $pane;
    $display->panels['bottom'][0] = 'new-b295d2b8-7207-4d73-b855-ca4d8754704b';
    $pane = new stdClass();
    $pane->pid = 'new-77299824-f4ba-49de-9e84-f217a8627592';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_general_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'teaser',
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'shanti-collection-featured-image',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77299824-f4ba-49de-9e84-f217a8627592';
    $display->content['new-77299824-f4ba-49de-9e84-f217a8627592'] = $pane;
    $display->panels['left'][0] = 'new-77299824-f4ba-49de-9e84-f217a8627592';
    $pane = new stdClass();
    $pane->pid = 'new-ec3c11e8-72fd-421f-a63d-f1309c982ef8';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Overview',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'shanti-collection-body',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec3c11e8-72fd-421f-a63d-f1309c982ef8';
    $display->content['new-ec3c11e8-72fd-421f-a63d-f1309c982ef8'] = $pane;
    $display->panels['left'][1] = 'new-ec3c11e8-72fd-421f-a63d-f1309c982ef8';
    $pane = new stdClass();
    $pane->pid = 'new-8295ee45-deed-4a08-ae92-4b01d5a8862b';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add New Content',
      'title' => '',
      'body' => '<?php 
  $path = explode("/", current_path()); 
  $nid = array_pop($path);
  $node = node_load($nid);
?>
<?php if (user_access(\'create new books\')): ?>
<a class="btn btn-primary shanti-collections-create-link" href="/node/add/book?field_og_collection_ref=%node:nid">Create new text</a>
<?php endif; ?>
<?php if (user_access(\'edit create collection content\') && $node->type == \'collection\'): ?>
<a class="btn btn-primary shanti-collections-create-link" href="/node/add/book?field_og_parent_collection_ref=%node:nid">Create new Subcollection</a>
<?php endif; ?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8295ee45-deed-4a08-ae92-4b01d5a8862b';
    $display->content['new-8295ee45-deed-4a08-ae92-4b01d5a8862b'] = $pane;
    $display->panels['right'][0] = 'new-8295ee45-deed-4a08-ae92-4b01d5a8862b';
    $pane = new stdClass();
    $pane->pid = 'new-92acdfa7-dbee-4f16-acfa-cda83b1dca0f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_og_parent_collection_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Parent Collection',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '92acdfa7-dbee-4f16-acfa-cda83b1dca0f';
    $display->content['new-92acdfa7-dbee-4f16-acfa-cda83b1dca0f'] = $pane;
    $display->panels['right'][1] = 'new-92acdfa7-dbee-4f16-acfa-cda83b1dca0f';
    $pane = new stdClass();
    $pane->pid = 'new-38a81987-20c1-4f88-9ce9-66573f1b08fc';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'fields_override' => array(
        'name' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Members',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '38a81987-20c1-4f88-9ce9-66573f1b08fc';
    $display->content['new-38a81987-20c1-4f88-9ce9-66573f1b08fc'] = $pane;
    $display->panels['right'][2] = 'new-38a81987-20c1-4f88-9ce9-66573f1b08fc';
    $pane = new stdClass();
    $pane->pid = 'new-7005d8fc-eac9-44b2-9015-3db2ccd79812';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'collections-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '36',
      'fields_override' => array(
        'nothing' => 0,
        'title' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Subcollections',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7005d8fc-eac9-44b2-9015-3db2ccd79812';
    $display->content['new-7005d8fc-eac9-44b2-9015-3db2ccd79812'] = $pane;
    $display->panels['right'][3] = 'new-7005d8fc-eac9-44b2-9015-3db2ccd79812';
    $pane = new stdClass();
    $pane->pid = 'new-02612246-2e25-4a0f-839c-0d9edbffad40';
    $pane->panel = 'right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'book' => 'book',
      ),
      'field_name' => 'field_og_collection_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'shanti-collections-create-link',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '02612246-2e25-4a0f-839c-0d9edbffad40';
    $display->content['new-02612246-2e25-4a0f-839c-0d9edbffad40'] = $pane;
    $display->panels['right'][4] = 'new-02612246-2e25-4a0f-839c-0d9edbffad40';
    $pane = new stdClass();
    $pane->pid = 'new-18e28ee9-f586-41a0-80eb-11d6cfed3180';
    $pane->panel = 'right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'subcollection' => 'subcollection',
      ),
      'field_name' => 'field_og_parent_collection_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'shanti-collections-create-link',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '18e28ee9-f586-41a0-80eb-11d6cfed3180';
    $display->content['new-18e28ee9-f586-41a0-80eb-11d6cfed3180'] = $pane;
    $display->panels['right'][5] = 'new-18e28ee9-f586-41a0-80eb-11d6cfed3180';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_61ca28d8-5f1f-4434-9613-f8954b9634e6'] = $handler;

  return $export;
}
