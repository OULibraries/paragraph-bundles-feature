<?php
/**
 * @file
 * paragraph_bundles_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paragraph_bundles_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function paragraph_bundles_feature_paragraphs_info() {
  $items = array(
    'featured_areas' => array(
      'name' => 'Featured List',
      'bundle' => 'featured_areas',
      'locked' => '1',
    ),
    'featured_areas_alt' => array(
      'name' => 'Featured List White Background',
      'bundle' => 'featured_areas_alt',
      'locked' => '1',
    ),
    'full_width_image' => array(
      'name' => 'Full-Width Image',
      'bundle' => 'full_width_image',
      'locked' => '1',
    ),
    'full_width_text' => array(
      'name' => 'Full-Width Text',
      'bundle' => 'full_width_text',
      'locked' => '1',
    ),
    'image_left_text_right' => array(
      'name' => 'Image Left + Text Right',
      'bundle' => 'image_left_text_right',
      'locked' => '1',
    ),
    'image_right_text_left' => array(
      'name' => 'Image Right + Text Left',
      'bundle' => 'image_right_text_left',
      'locked' => '1',
    ),
    'section_header' => array(
      'name' => 'Section Header',
      'bundle' => 'section_header',
      'locked' => '1',
    ),
    'test' => array(
      'name' => 'test',
      'bundle' => 'test',
      'locked' => '1',
    ),
    'two_column_list' => array(
      'name' => 'Two Column List',
      'bundle' => 'two_column_list',
      'locked' => '1',
    ),
    'two_column_text' => array(
      'name' => 'Two Column Text',
      'bundle' => 'two_column_text',
      'locked' => '1',
    ),
  );
  return $items;
}
