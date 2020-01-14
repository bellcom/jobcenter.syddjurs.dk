<?php
/**
 * @file
 * os2web_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function os2web_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr/jobcenter';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '21.0',
    'apachesolr_search_type_boosts' => array(
      'baggrund' => '0',
      'rotating_image' => '0',
      'borger_dk_permalink' => '0',
      'bullet_point' => '0',
      'bullet_point_attachment' => '0',
      'files' => '0',
      'esdh_dokument' => '0',
      'esdh_sag' => '0',
      'galleri' => '0',
      'right_column' => '0',
      'contentpage' => '8.0',
      'institution' => '0',
      'kontaktblok' => '0',
      'knactivity' => '0',
      'local_plan' => '0',
      'media' => '0',
      'meeting' => '0',
      'os2web_meeting_search_status' => '0',
      'news' => '5.0',
      'ofir_job' => '0',
      'panel' => '0',
      'person' => '0',
      'politician' => '0',
      'referat' => '0',
      'sektionsside' => '0',
      'selvbetjeningslinks' => '3.0',
      'speaker_paper' => '0',
      'spotbox' => '0',
      'tema' => '0',
      'webform' => '0',
      'iframe_selvbetjeningsl_sning_mm' => '0',
    ),
    'field_bias' => array(
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'dm_field_period' => '0',
      'dm_field_period_end' => '0',
      'dm_field_rotate_publish' => '0',
      'dm_field_rotate_publish_end' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_editortags' => '0',
      'im_field_node_reference_kontaktb' => '0',
      'im_field_noderef_selvbtjn' => '0',
      'im_field_politics' => '0',
      'im_field_promoteto' => '0',
      'im_field_site_structure' => '0',
      'im_field_termref_kle' => '0',
      'im_field_termref_sted' => '0',
      'im_vid_1' => '0',
      'im_vid_11' => '0',
      'im_vid_3' => '0',
      'im_vid_4' => '0',
      'im_vid_6' => '0',
      'im_vid_8' => '0',
      'is_comment_count' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_vid_Egennavne_stednavne' => '0',
      'sm_vid_Forfrem_til' => '0',
      'sm_vid_KLE' => '0',
      'sm_vid_Overordnet_placering_og_sitestruktur' => '0',
      'sm_vid_Politik' => '0',
      'sm_vid_Stikord' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '2.0',
      'tags_h2_h3' => '1.0',
      'tags_h4_h5_h6' => '0.5',
      'tags_inline' => '1.0',
      'taxonomy_names' => '0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_11_names' => '0',
      'tm_vid_1_names' => '0',
      'tm_vid_3_names' => '0',
      'tm_vid_4_names' => '0',
      'tm_vid_6_names' => '0',
      'tm_vid_8_names' => '13.0',
      'tos_content_extra' => '3.0',
      'tos_name' => '0.3',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'borger_dk_permalink',
      1 => 'contentpage',
      2 => 'iframe_selvbetjeningsl_sning_mm',
      3 => 'news',
      4 => 'referat',
      5 => 'webform',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
