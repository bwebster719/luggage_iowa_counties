<?php
/**
 * @file
 * luggage_iowa_counties.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_iowa_counties_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-iowa_county-field_county_gnis'
  $field_instances['taxonomy_term-iowa_county-field_county_gnis'] = array(
    'bundle' => 'iowa_county',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_county_gnis',
    'label' => 'FIPS',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FIPS');

  return $field_instances;
}
