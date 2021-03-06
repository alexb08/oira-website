<?php
/**
 * @file
 * osha.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function osha_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'link' => 1,
          'anchor' => 1,
          'image' => 1,
          'formatselect' => 1,
          'fontselect' => 1,
          'fontsizeselect' => 1,
          'code' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'contextmenu' => array(
          'contextmenu' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'searchreplace' => array(
          'search' => 1,
          'replace' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'wordcount' => array(
          'wordcount' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'accordion' => 1,
          'accordion_header' => 1,
          'accordion_panel' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: plain_text
  $profiles['plain_text'] = array(
    'format' => 'plain_text',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'link' => 1,
          'anchor' => 1,
          'image' => 1,
          'fontselect' => 1,
          'fontsizeselect' => 1,
          'code' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'contextmenu' => array(
          'contextmenu' => 1,
        ),
        'searchreplace' => array(
          'search' => 1,
          'replace' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'media' => array(
          'media' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
