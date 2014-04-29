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
    'name' => 'frontpage_slide_sidebar',
    'label' => 'frontpage_slide_sidebar',
    'effects' => array(
      2 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'profile_small',
    'label' => 'profile_small',
    'effects' => array(
      4 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'sidepicture',
    'label' => 'sidepicture',
    'effects' => array(
      6 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_overview_thumbs',
    'label' => 'subject_overview_thumbs',
    'effects' => array(
      10 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_packages_frontpage',
    'label' => 'subject_packages_frontpage',
    'effects' => array(
      13 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'thumbnail_tall',
    'label' => 'thumbnail_tall',
    'effects' => array(
      15 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'thumbnail_tall_employee',
    'label' => 'thumbnail_tall_employee',
    'effects' => array(
      17 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'vih_banner',
    'label' => 'vih_banner',
    'effects' => array(
      20 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'vih_quarter_square',
    'label' => 'vih_quarter_square',
    'effects' => array(
      23 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
