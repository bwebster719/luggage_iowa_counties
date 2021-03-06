<?php
/**
 * @file
 * luggage_iowa_counties.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function luggage_iowa_counties_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_county_gnis'
  $field_bases['field_county_gnis'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_county_gnis',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
