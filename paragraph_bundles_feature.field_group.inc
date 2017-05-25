<?php
/**
 * @file
 * paragraph_bundles_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function paragraph_bundles_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|paragraphs_item|image_left_text_right|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_left_text_right';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_tab1',
      1 => 'group_tab2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_horizontal|paragraphs_item|image_left_text_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|paragraphs_item|image_right_text_left|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_right_text_left';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_tab1',
      1 => 'group_tab2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_horizontal|paragraphs_item|image_right_text_left|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|paragraphs_item|section_header|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'section_header';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_tab1',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_horizontal|paragraphs_item|section_header|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|paragraphs_item|two_column_list|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_tab1',
      1 => 'group_tab2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_horizontal|paragraphs_item|two_column_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|paragraphs_item|two_column_text|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_tab1',
      1 => 'group_tab2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_horizontal|paragraphs_item|two_column_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|paragraphs_item|image_left_text_right|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_left_text_right';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Left Image',
    'weight' => '5',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Add Left Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tab1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_tab1|paragraphs_item|image_left_text_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|paragraphs_item|image_right_text_left|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_right_text_left';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Text Left',
    'weight' => '5',
    'children' => array(
      0 => 'field_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab1|paragraphs_item|image_right_text_left|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|paragraphs_item|section_header|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'section_header';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Header',
    'weight' => '4',
    'children' => array(
      0 => 'field_header',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab1|paragraphs_item|section_header|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|paragraphs_item|two_column_list|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Left Column',
    'weight' => '4',
    'children' => array(
      0 => 'field_left_column_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Add Left Column',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tab1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_tab1|paragraphs_item|two_column_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|paragraphs_item|two_column_text|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_text';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Left Text',
    'weight' => '4',
    'children' => array(
      0 => 'field_left_column_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab1|paragraphs_item|two_column_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|paragraphs_item|image_left_text_right|form';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_left_text_right';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Right Text',
    'weight' => '6',
    'children' => array(
      0 => 'field_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab2|paragraphs_item|image_left_text_right|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|paragraphs_item|image_right_text_left|form';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image_right_text_left';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Image Right',
    'weight' => '6',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab2|paragraphs_item|image_right_text_left|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|paragraphs_item|two_column_list|form';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Right Column',
    'weight' => '5',
    'children' => array(
      0 => 'field_right_column_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab2|paragraphs_item|two_column_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|paragraphs_item|two_column_text|form';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_text';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Add Right Column',
    'weight' => '5',
    'children' => array(
      0 => 'field_right_column_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab2|paragraphs_item|two_column_text|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Header');
  t('Add Image Right');
  t('Add Left Column');
  t('Add Left Image');
  t('Add Left Text');
  t('Add Right Column');
  t('Add Right Text');
  t('Add Text Left');
  t('Horizontal Group');

  return $field_groups;
}
