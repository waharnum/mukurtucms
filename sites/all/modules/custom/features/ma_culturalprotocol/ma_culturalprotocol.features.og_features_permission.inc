<?php
/**
 * @file
 * ma_culturalprotocol.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ma_culturalprotocol_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:cultural_protocol_group:add user'
  $permissions['node:cultural_protocol_group:add user'] = array(
    'roles' => array(
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:administer group'
  $permissions['node:cultural_protocol_group:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:approve and deny subscription'
  $permissions['node:cultural_protocol_group:approve and deny subscription'] = array(
    'roles' => array(
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:create community content'
  $permissions['node:cultural_protocol_group:create community content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:create cultural_protocol_group content'
  $permissions['node:cultural_protocol_group:create cultural_protocol_group content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:create digital_heritage content'
  $permissions['node:cultural_protocol_group:create digital_heritage content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:delete any community content'
  $permissions['node:cultural_protocol_group:delete any community content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:delete any cultural_protocol_group content'
  $permissions['node:cultural_protocol_group:delete any cultural_protocol_group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:delete any digital_heritage content'
  $permissions['node:cultural_protocol_group:delete any digital_heritage content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:delete own community content'
  $permissions['node:cultural_protocol_group:delete own community content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:delete own cultural_protocol_group content'
  $permissions['node:cultural_protocol_group:delete own cultural_protocol_group content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:delete own digital_heritage content'
  $permissions['node:cultural_protocol_group:delete own digital_heritage content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:invite any user'
  $permissions['node:cultural_protocol_group:invite any user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:manage members'
  $permissions['node:cultural_protocol_group:manage members'] = array(
    'roles' => array(
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:manage permissions'
  $permissions['node:cultural_protocol_group:manage permissions'] = array(
    'roles' => array(
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:manage roles'
  $permissions['node:cultural_protocol_group:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:subscribe'
  $permissions['node:cultural_protocol_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:subscribe without approval'
  $permissions['node:cultural_protocol_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:unsubscribe'
  $permissions['node:cultural_protocol_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:update any community content'
  $permissions['node:cultural_protocol_group:update any community content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:update any cultural_protocol_group content'
  $permissions['node:cultural_protocol_group:update any cultural_protocol_group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:update any digital_heritage content'
  $permissions['node:cultural_protocol_group:update any digital_heritage content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:update group'
  $permissions['node:cultural_protocol_group:update group'] = array(
    'roles' => array(
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:update own community content'
  $permissions['node:cultural_protocol_group:update own community content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:cultural_protocol_group:update own cultural_protocol_group content'
  $permissions['node:cultural_protocol_group:update own cultural_protocol_group content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'protocol steward' => 'protocol steward',
    ),
  );

  // Exported og permission: 'node:cultural_protocol_group:update own digital_heritage content'
  $permissions['node:cultural_protocol_group:update own digital_heritage content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'protocol steward' => 'protocol steward',
    ),
  );

  return $permissions;
}
