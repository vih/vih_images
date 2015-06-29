<?php
/**
 * @file
 * vih_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function vih_images_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_slide_sidebar.
  $styles['frontpage_slide_sidebar'] = array(
    'label' => 'frontpage_slide_sidebar',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 16,
          'height' => 21,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_full',
          'style_name' => 'frontpage_slide_sidebar',
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 210,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: profile_small.
  $styles['profile_small'] = array(
    'label' => 'profile_small',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 2,
          'height' => 2,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_square',
          'style_name' => 'profile_small',
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 20,
          'height' => 20,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidepicture.
  $styles['sidepicture'] = array(
    'label' => 'sidepicture',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 30.5,
          'height' => 44.5,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_full',
          'style_name' => 'sidepicture',
        ),
        'weight' => 0,
      ),
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 305,
          'height' => 445,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: subject_overview_thumbs.
  $styles['subject_overview_thumbs'] = array(
    'label' => 'subject_overview_thumbs',
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 14.5,
          'height' => 10.5,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_full',
          'style_name' => 'subject_overview_thumbs',
        ),
        'weight' => 0,
      ),
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 105,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subject_packages_frontpage.
  $styles['subject_packages_frontpage'] = array(
    'label' => 'subject_packages_frontpage',
    'effects' => array(
      13 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 14.5,
          'height' => 40,
          'keepproportions' => 1,
          'reuse_crop_style' => 'sidepicture',
          'style_name' => 'subject_packages_frontpage',
        ),
        'weight' => 0,
      ),
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_tall.
  $styles['thumbnail_tall'] = array(
    'label' => 'thumbnail_tall',
    'effects' => array(
      15 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 7,
          'height' => 11,
          'keepproportions' => 1,
          'reuse_crop_style' => 'sidepicture',
          'style_name' => 'thumbnail_tall',
        ),
        'weight' => 0,
      ),
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_tall_employee.
  $styles['thumbnail_tall_employee'] = array(
    'label' => 'thumbnail_tall_employee',
    'effects' => array(
      17 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 14.5,
          'height' => 21.7,
          'keepproportions' => 1,
          'reuse_crop_style' => 'sidepicture',
          'style_name' => 'thumbnail_tall_employee',
        ),
        'weight' => 0,
      ),
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 217,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: vih_banner.
  $styles['vih_banner'] = array(
    'label' => 'vih_banner',
    'effects' => array(
      20 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 96,
          'height' => 30,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_full',
          'style_name' => 'vih_banner',
        ),
        'weight' => 0,
      ),
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: vih_quarter_square.
  $styles['vih_quarter_square'] = array(
    'label' => 'vih_quarter_square',
    'effects' => array(
      23 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 14.5,
          'height' => 14.5,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_square',
          'style_name' => 'vih_quarter_square',
        ),
        'weight' => 0,
      ),
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 145,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
