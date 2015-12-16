<?php
/**
 * @file
 * shanti_collections.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function shanti_collections_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection|node|book|form';
  $field_group->group_name = 'group_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collection',
    'weight' => '4',
    'children' => array(
      0 => 'field_og_collection_ref',
      1 => 'group_content_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-collection field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_collection|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection|node|text|form';
  $field_group->group_name = 'group_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collection',
    'weight' => '7',
    'children' => array(
      0 => 'field_og_collection_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_collection|node|text|form'] = $field_group;

  return $export;
}
