
/* This file is generated by applying the dr.xsl stylesheet to the dr.xml
 * description file. DO NOT EDIT !!! */

#include "config.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#if defined(HAVE_INTTYPES_H)
#include <inttypes.h>
#elif defined(HAVE_STDINT_H)
#include <stdint.h>
#endif

/* the libdvbpsi distribution defines DVBPSI_DIST */
#ifdef DVBPSI_DIST
#include "../src/dvbpsi.h"
#include "../src/descriptor.h"
#include "../src/descriptors/dr.h"
#else
#include <dvbpsi/dvbpsi.h>
#include <dvbpsi/descriptor.h>
#include <dvbpsi/dr.h>
#endif

#include "test_dr.h"

  
/* video stream (b_mpeg2 = false) */
static int main_vstream_1(void)
{
  BOZO_VARS(vstream);
  BOZO_START(video stream (b_mpeg2 = false));

  
  /* check b_multiple_frame_rate */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = false;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_begin_boolean(b_multiple_frame_rate)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_multiple_frame_rate)
    BOZO_CLEAN();
  BOZO_end_boolean(b_multiple_frame_rate)

  /* check i_frame_rate_code */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = false;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_begin_integer(i_frame_rate_code, 4)
    BOZO_DOJOB(VStream);
    BOZO_check_integer(i_frame_rate_code, 4)
    BOZO_CLEAN();
  BOZO_end_integer(i_frame_rate_code, 4)

  /* check b_constrained_parameter */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = false;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_begin_boolean(b_constrained_parameter)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_constrained_parameter)
    BOZO_CLEAN();
  BOZO_end_boolean(b_constrained_parameter)

  /* check b_still_picture */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = false;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_begin_boolean(b_still_picture)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_still_picture)
    BOZO_CLEAN();
  BOZO_end_boolean(b_still_picture)


  BOZO_END(video stream (b_mpeg2 = false));

  return i_err;
}

/* video stream (b_mpeg2 = true) */
static int main_vstream_2(void)
{
  BOZO_VARS(vstream);
  BOZO_START(video stream (b_mpeg2 = true));

  
  /* check b_multiple_frame_rate */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_boolean(b_multiple_frame_rate)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_multiple_frame_rate)
    BOZO_CLEAN();
  BOZO_end_boolean(b_multiple_frame_rate)

  /* check i_frame_rate_code */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_integer(i_frame_rate_code, 4)
    BOZO_DOJOB(VStream);
    BOZO_check_integer(i_frame_rate_code, 4)
    BOZO_CLEAN();
  BOZO_end_integer(i_frame_rate_code, 4)

  /* check b_constrained_parameter */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_boolean(b_constrained_parameter)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_constrained_parameter)
    BOZO_CLEAN();
  BOZO_end_boolean(b_constrained_parameter)

  /* check b_still_picture */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_boolean(b_still_picture)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_still_picture)
    BOZO_CLEAN();
  BOZO_end_boolean(b_still_picture)

  /* check i_profile_level_indication */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_integer(i_profile_level_indication, 8)
    BOZO_DOJOB(VStream);
    BOZO_check_integer(i_profile_level_indication, 8)
    BOZO_CLEAN();
  BOZO_end_integer(i_profile_level_indication, 8)

  /* check i_chroma_format */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_integer(i_chroma_format, 2)
    BOZO_DOJOB(VStream);
    BOZO_check_integer(i_chroma_format, 2)
    BOZO_CLEAN();
  BOZO_end_integer(i_chroma_format, 2)

  /* check b_frame_rate_extension */
  BOZO_init_boolean(b_multiple_frame_rate, 0);
  BOZO_init_integer(i_frame_rate_code, 0);
  s_decoded.b_mpeg2 = true;
  BOZO_init_boolean(b_constrained_parameter, 0);
  BOZO_init_boolean(b_still_picture, 0);
  BOZO_init_integer(i_profile_level_indication, 0);
  BOZO_init_integer(i_chroma_format, 0);
  BOZO_init_boolean(b_frame_rate_extension, 0);
  BOZO_begin_boolean(b_frame_rate_extension)
    BOZO_DOJOB(VStream);
    BOZO_check_boolean(b_frame_rate_extension)
    BOZO_CLEAN();
  BOZO_end_boolean(b_frame_rate_extension)


  BOZO_END(video stream (b_mpeg2 = true));

  return i_err;
}

/* audio stream */
static int main_astream_(void)
{
  BOZO_VARS(astream);
  BOZO_START(audio stream);

  
  /* check b_free_format */
  BOZO_init_boolean(b_free_format, 0);
  BOZO_init_integer(i_id, 0);
  BOZO_init_integer(i_layer, 0);
  BOZO_begin_boolean(b_free_format)
    BOZO_DOJOB(AStream);
    BOZO_check_boolean(b_free_format)
    BOZO_CLEAN();
  BOZO_end_boolean(b_free_format)

  /* check i_id */
  BOZO_init_boolean(b_free_format, 0);
  BOZO_init_integer(i_id, 0);
  BOZO_init_integer(i_layer, 0);
  BOZO_begin_integer(i_id, 1)
    BOZO_DOJOB(AStream);
    BOZO_check_integer(i_id, 1)
    BOZO_CLEAN();
  BOZO_end_integer(i_id, 1)

  /* check i_layer */
  BOZO_init_boolean(b_free_format, 0);
  BOZO_init_integer(i_id, 0);
  BOZO_init_integer(i_layer, 0);
  BOZO_begin_integer(i_layer, 2)
    BOZO_DOJOB(AStream);
    BOZO_check_integer(i_layer, 2)
    BOZO_CLEAN();
  BOZO_end_integer(i_layer, 2)


  BOZO_END(audio stream);

  return i_err;
}

/* hierarchy */
static int main_hierarchy_(void)
{
  BOZO_VARS(hierarchy);
  BOZO_START(hierarchy);

  
  /* check i_h_type */
  BOZO_init_integer(i_h_type, 0);
  BOZO_init_integer(i_h_layer_index, 0);
  BOZO_init_integer(i_h_embedded_layer, 0);
  BOZO_init_integer(i_h_priority, 0);
  BOZO_begin_integer(i_h_type, 4)
    BOZO_DOJOB(Hierarchy);
    BOZO_check_integer(i_h_type, 4)
    BOZO_CLEAN();
  BOZO_end_integer(i_h_type, 4)

  /* check i_h_layer_index */
  BOZO_init_integer(i_h_type, 0);
  BOZO_init_integer(i_h_layer_index, 0);
  BOZO_init_integer(i_h_embedded_layer, 0);
  BOZO_init_integer(i_h_priority, 0);
  BOZO_begin_integer(i_h_layer_index, 6)
    BOZO_DOJOB(Hierarchy);
    BOZO_check_integer(i_h_layer_index, 6)
    BOZO_CLEAN();
  BOZO_end_integer(i_h_layer_index, 6)

  /* check i_h_embedded_layer */
  BOZO_init_integer(i_h_type, 0);
  BOZO_init_integer(i_h_layer_index, 0);
  BOZO_init_integer(i_h_embedded_layer, 0);
  BOZO_init_integer(i_h_priority, 0);
  BOZO_begin_integer(i_h_embedded_layer, 6)
    BOZO_DOJOB(Hierarchy);
    BOZO_check_integer(i_h_embedded_layer, 6)
    BOZO_CLEAN();
  BOZO_end_integer(i_h_embedded_layer, 6)

  /* check i_h_priority */
  BOZO_init_integer(i_h_type, 0);
  BOZO_init_integer(i_h_layer_index, 0);
  BOZO_init_integer(i_h_embedded_layer, 0);
  BOZO_init_integer(i_h_priority, 0);
  BOZO_begin_integer(i_h_priority, 6)
    BOZO_DOJOB(Hierarchy);
    BOZO_check_integer(i_h_priority, 6)
    BOZO_CLEAN();
  BOZO_end_integer(i_h_priority, 6)


  BOZO_END(hierarchy);

  return i_err;
}

/* registration */
static int main_registration_(void)
{
  BOZO_VARS(registration);
  BOZO_START(registration);

  
  /* check i_format_identifier */
  s_decoded.i_additional_length = 0;
  BOZO_init_integer(i_format_identifier, 0);
  BOZO_begin_integer(i_format_identifier, 32)
    BOZO_DOJOB(Registration);
    BOZO_check_integer(i_format_identifier, 32)
    BOZO_CLEAN();
  BOZO_end_integer(i_format_identifier, 32)


  BOZO_END(registration);

  return i_err;
}

/* data stream alignment */
static int main_ds_alignment_(void)
{
  BOZO_VARS(ds_alignment);
  BOZO_START(data stream alignment);

  
  /* check i_alignment_type */
  BOZO_init_integer(i_alignment_type, 0);
  BOZO_begin_integer(i_alignment_type, 8)
    BOZO_DOJOB(DSAlignment);
    BOZO_check_integer(i_alignment_type, 8)
    BOZO_CLEAN();
  BOZO_end_integer(i_alignment_type, 8)


  BOZO_END(data stream alignment);

  return i_err;
}

/* target background grid */
static int main_target_bg_grid_(void)
{
  BOZO_VARS(target_bg_grid);
  BOZO_START(target background grid);

  
  /* check i_horizontal_size */
  BOZO_init_integer(i_horizontal_size, 0);
  BOZO_init_integer(i_vertical_size, 0);
  BOZO_init_integer(i_pel_aspect_ratio, 0);
  BOZO_begin_integer(i_horizontal_size, 14)
    BOZO_DOJOB(TargetBgGrid);
    BOZO_check_integer(i_horizontal_size, 14)
    BOZO_CLEAN();
  BOZO_end_integer(i_horizontal_size, 14)

  /* check i_vertical_size */
  BOZO_init_integer(i_horizontal_size, 0);
  BOZO_init_integer(i_vertical_size, 0);
  BOZO_init_integer(i_pel_aspect_ratio, 0);
  BOZO_begin_integer(i_vertical_size, 14)
    BOZO_DOJOB(TargetBgGrid);
    BOZO_check_integer(i_vertical_size, 14)
    BOZO_CLEAN();
  BOZO_end_integer(i_vertical_size, 14)

  /* check i_pel_aspect_ratio */
  BOZO_init_integer(i_horizontal_size, 0);
  BOZO_init_integer(i_vertical_size, 0);
  BOZO_init_integer(i_pel_aspect_ratio, 0);
  BOZO_begin_integer(i_pel_aspect_ratio, 4)
    BOZO_DOJOB(TargetBgGrid);
    BOZO_check_integer(i_pel_aspect_ratio, 4)
    BOZO_CLEAN();
  BOZO_end_integer(i_pel_aspect_ratio, 4)


  BOZO_END(target background grid);

  return i_err;
}

/* video window */
static int main_vwindow_(void)
{
  BOZO_VARS(vwindow);
  BOZO_START(video window);

  
  /* check i_horizontal_offset */
  BOZO_init_integer(i_horizontal_offset, 0);
  BOZO_init_integer(i_vertical_offset, 0);
  BOZO_init_integer(i_window_priority, 0);
  BOZO_begin_integer(i_horizontal_offset, 14)
    BOZO_DOJOB(VWindow);
    BOZO_check_integer(i_horizontal_offset, 14)
    BOZO_CLEAN();
  BOZO_end_integer(i_horizontal_offset, 14)

  /* check i_vertical_offset */
  BOZO_init_integer(i_horizontal_offset, 0);
  BOZO_init_integer(i_vertical_offset, 0);
  BOZO_init_integer(i_window_priority, 0);
  BOZO_begin_integer(i_vertical_offset, 14)
    BOZO_DOJOB(VWindow);
    BOZO_check_integer(i_vertical_offset, 14)
    BOZO_CLEAN();
  BOZO_end_integer(i_vertical_offset, 14)

  /* check i_window_priority */
  BOZO_init_integer(i_horizontal_offset, 0);
  BOZO_init_integer(i_vertical_offset, 0);
  BOZO_init_integer(i_window_priority, 0);
  BOZO_begin_integer(i_window_priority, 4)
    BOZO_DOJOB(VWindow);
    BOZO_check_integer(i_window_priority, 4)
    BOZO_CLEAN();
  BOZO_end_integer(i_window_priority, 4)


  BOZO_END(video window);

  return i_err;
}

/* conditional access */
static int main_ca_(void)
{
  BOZO_VARS(ca);
  BOZO_START(conditional access);

  
  /* check i_ca_system_id */
  s_decoded.i_private_length = 0;
  BOZO_init_integer(i_ca_system_id, 0);
  BOZO_init_integer(i_ca_pid, 0);
  BOZO_begin_integer(i_ca_system_id, 16)
    BOZO_DOJOB(CA);
    BOZO_check_integer(i_ca_system_id, 16)
    BOZO_CLEAN();
  BOZO_end_integer(i_ca_system_id, 16)

  /* check i_ca_pid */
  s_decoded.i_private_length = 0;
  BOZO_init_integer(i_ca_system_id, 0);
  BOZO_init_integer(i_ca_pid, 0);
  BOZO_begin_integer(i_ca_pid, 13)
    BOZO_DOJOB(CA);
    BOZO_check_integer(i_ca_pid, 13)
    BOZO_CLEAN();
  BOZO_end_integer(i_ca_pid, 13)

  /* check i_private_data */
  s_decoded.i_private_length = 0;
  BOZO_init_integer(i_ca_system_id, 0);
  BOZO_init_integer(i_ca_pid, 0);
  BOZO_begin_array(i_private_data, i_private_length, 0)
    BOZO_DOJOB(CA);
    BOZO_check_array(i_private_data, i_private_length)
    BOZO_CLEAN();
  BOZO_end_array(i_private_data)


  BOZO_END(conditional access);

  return i_err;
}

/* ISO 639 language */
static int main_iso639_(void)
{
  BOZO_VARS(iso639);
  BOZO_START(ISO 639 language);


  /* check code */
  BOZO_begin_array(code, i_code_count, 1)
    BOZO_DOJOB(ISO639);
    BOZO_check_array(code, i_code_count)
    BOZO_CLEAN();
  BOZO_end_array(code)


  BOZO_END(ISO 639 language);

  return i_err;
}

/* system clock */
static int main_system_clock_(void)
{
  BOZO_VARS(system_clock);
  BOZO_START(system clock);

  
  /* check b_external_clock_ref */
  BOZO_init_boolean(b_external_clock_ref, 0);
  BOZO_init_integer(i_clock_accuracy_integer, 0);
  BOZO_init_integer(i_clock_accuracy_exponent, 0);
  BOZO_begin_boolean(b_external_clock_ref)
    BOZO_DOJOB(SystemClock);
    BOZO_check_boolean(b_external_clock_ref)
    BOZO_CLEAN();
  BOZO_end_boolean(b_external_clock_ref)

  /* check i_clock_accuracy_integer */
  BOZO_init_boolean(b_external_clock_ref, 0);
  BOZO_init_integer(i_clock_accuracy_integer, 0);
  BOZO_init_integer(i_clock_accuracy_exponent, 0);
  BOZO_begin_integer(i_clock_accuracy_integer, 6)
    BOZO_DOJOB(SystemClock);
    BOZO_check_integer(i_clock_accuracy_integer, 6)
    BOZO_CLEAN();
  BOZO_end_integer(i_clock_accuracy_integer, 6)

  /* check i_clock_accuracy_exponent */
  BOZO_init_boolean(b_external_clock_ref, 0);
  BOZO_init_integer(i_clock_accuracy_integer, 0);
  BOZO_init_integer(i_clock_accuracy_exponent, 0);
  BOZO_begin_integer(i_clock_accuracy_exponent, 3)
    BOZO_DOJOB(SystemClock);
    BOZO_check_integer(i_clock_accuracy_exponent, 3)
    BOZO_CLEAN();
  BOZO_end_integer(i_clock_accuracy_exponent, 3)


  BOZO_END(system clock);

  return i_err;
}

/* multiplex buffer utilization */
static int main_mx_buff_utilization_(void)
{
  BOZO_VARS(mx_buff_utilization);
  BOZO_START(multiplex buffer utilization);

  
  /* check b_mdv_valid */
  BOZO_init_boolean(b_mdv_valid, 0);
  BOZO_init_integer(i_mx_delay_variation, 0);
  BOZO_init_integer(i_mx_strategy, 0);
  BOZO_begin_boolean(b_mdv_valid)
    BOZO_DOJOB(MxBuffUtilization);
    BOZO_check_boolean(b_mdv_valid)
    BOZO_CLEAN();
  BOZO_end_boolean(b_mdv_valid)

  /* check i_mx_delay_variation */
  BOZO_init_boolean(b_mdv_valid, 0);
  BOZO_init_integer(i_mx_delay_variation, 0);
  BOZO_init_integer(i_mx_strategy, 0);
  BOZO_begin_integer(i_mx_delay_variation, 15)
    BOZO_DOJOB(MxBuffUtilization);
    BOZO_check_integer(i_mx_delay_variation, 15)
    BOZO_CLEAN();
  BOZO_end_integer(i_mx_delay_variation, 15)

  /* check i_mx_strategy */
  BOZO_init_boolean(b_mdv_valid, 0);
  BOZO_init_integer(i_mx_delay_variation, 0);
  BOZO_init_integer(i_mx_strategy, 0);
  BOZO_begin_integer(i_mx_strategy, 3)
    BOZO_DOJOB(MxBuffUtilization);
    BOZO_check_integer(i_mx_strategy, 3)
    BOZO_CLEAN();
  BOZO_end_integer(i_mx_strategy, 3)


  BOZO_END(multiplex buffer utilization);

  return i_err;
}

/* copyright */
static int main_copyright_(void)
{
  BOZO_VARS(copyright);
  BOZO_START(copyright);

  
  /* check i_copyright_identifier */
  s_decoded.i_additional_length = 0;
  BOZO_init_integer(i_copyright_identifier, 0);
  BOZO_begin_integer(i_copyright_identifier, 32)
    BOZO_DOJOB(Copyright);
    BOZO_check_integer(i_copyright_identifier, 32)
    BOZO_CLEAN();
  BOZO_end_integer(i_copyright_identifier, 32)

  /* check i_additional_info */
  s_decoded.i_additional_length = 0;
  BOZO_init_integer(i_copyright_identifier, 0);
  BOZO_begin_array(i_additional_info, i_additional_length, 0)
    BOZO_DOJOB(Copyright);
    BOZO_check_array(i_additional_info, i_additional_length)
    BOZO_CLEAN();
  BOZO_end_array(i_additional_info)


  BOZO_END(copyright);

  return i_err;
}

/* maximum bitrate */
static int main_max_bitrate_(void)
{
  BOZO_VARS(max_bitrate);
  BOZO_START(maximum bitrate);

  
  /* check i_max_bitrate */
  BOZO_init_integer(i_max_bitrate, 0);
  BOZO_begin_integer(i_max_bitrate, 22)
    BOZO_DOJOB(MaxBitrate);
    BOZO_check_integer(i_max_bitrate, 22)
    BOZO_CLEAN();
  BOZO_end_integer(i_max_bitrate, 22)


  BOZO_END(maximum bitrate);

  return i_err;
}

/* private data indicator */
static int main_private_data_(void)
{
  BOZO_VARS(private_data);
  BOZO_START(private data indicator);

  
  /* check i_private_data */
  BOZO_init_integer(i_private_data, 0);
  BOZO_begin_integer(i_private_data, 32)
    BOZO_DOJOB(PrivateData);
    BOZO_check_integer(i_private_data, 32)
    BOZO_CLEAN();
  BOZO_end_integer(i_private_data, 32)


  BOZO_END(private data indicator);

  return i_err;
}

/* smoothing buffer */
static int main_smoothing_buffer_(void)
{
  BOZO_VARS(smoothing_buffer);
  BOZO_START(smoothing buffer);


  #define dvbpsi_GenSmoothingBufferDr(x,y) \
    dvbpsi_GenSmoothingBufferDr(x)

  /* check i_sb_leak_rate */
  BOZO_init_integer(i_sb_leak_rate, 0);
  BOZO_init_integer(i_sb_size, 0);
  BOZO_begin_integer(i_sb_leak_rate, 22)
    BOZO_DOJOB(SmoothingBuffer);
    BOZO_check_integer(i_sb_leak_rate, 22)
    BOZO_CLEAN();
  BOZO_end_integer(i_sb_leak_rate, 22)

  /* check i_sb_size */
  BOZO_init_integer(i_sb_leak_rate, 0);
  BOZO_init_integer(i_sb_size, 0);
  BOZO_begin_integer(i_sb_size, 22)
    BOZO_DOJOB(SmoothingBuffer);
    BOZO_check_integer(i_sb_size, 22)
    BOZO_CLEAN();
  BOZO_end_integer(i_sb_size, 22)


  BOZO_END(smoothing buffer);

  return i_err;
}

/* STD */
static int main_std_(void)
{
  BOZO_VARS(std);
  BOZO_START(STD);


  #define dvbpsi_GenSTDDr(x,y) \
    dvbpsi_GenSTDDr(x)

  /* check b_leak_valid_flag */
  BOZO_init_boolean(b_leak_valid_flag, 0);
  BOZO_begin_boolean(b_leak_valid_flag)
    BOZO_DOJOB(STD);
    BOZO_check_boolean(b_leak_valid_flag)
    BOZO_CLEAN();
  BOZO_end_boolean(b_leak_valid_flag)


  BOZO_END(STD);

  return i_err;
}

/* IBP */
static int main_ibp_(void)
{
  BOZO_VARS(ibp);
  BOZO_START(IBP);


  #define dvbpsi_GenIBPDr(x,y) \
    dvbpsi_GenIBPDr(x)

  /* check b_closed_gop_flag */
  BOZO_init_boolean(b_closed_gop_flag, 0);
  BOZO_init_boolean(b_identical_gop_flag, 0);
  BOZO_init_integer(i_max_gop_length, 1);
  BOZO_begin_boolean(b_closed_gop_flag)
    BOZO_DOJOB(IBP);
    BOZO_check_boolean(b_closed_gop_flag)
    BOZO_CLEAN();
  BOZO_end_boolean(b_closed_gop_flag)

  /* check b_identical_gop_flag */
  BOZO_init_boolean(b_closed_gop_flag, 0);
  BOZO_init_boolean(b_identical_gop_flag, 0);
  BOZO_init_integer(i_max_gop_length, 1);
  BOZO_begin_boolean(b_identical_gop_flag)
    BOZO_DOJOB(IBP);
    BOZO_check_boolean(b_identical_gop_flag)
    BOZO_CLEAN();
  BOZO_end_boolean(b_identical_gop_flag)

  /* check i_max_gop_length */
  BOZO_init_boolean(b_closed_gop_flag, 0);
  BOZO_init_boolean(b_identical_gop_flag, 0);
  BOZO_init_integer(i_max_gop_length, 1);
  BOZO_begin_integer(i_max_gop_length, 14)
    BOZO_DOJOB(IBP);
    BOZO_check_integer(i_max_gop_length, 14)
    BOZO_CLEAN();
  BOZO_end_integer(i_max_gop_length, 14)


  BOZO_END(IBP);

  return i_err;
}

/* service */
static int main_service_(void)
{
  BOZO_VARS(service);
  BOZO_START(service);

  
  /* check i_service_type */
  s_decoded.i_service_provider_name_length = 0;
  s_decoded.i_service_name_length = 0;
  BOZO_init_integer(i_service_type, 0);
  BOZO_begin_integer(i_service_type, 8)
    BOZO_DOJOB(Service);
    BOZO_check_integer(i_service_type, 8)
    BOZO_CLEAN();
  BOZO_end_integer(i_service_type, 8)


  BOZO_END(service);

  return i_err;
}


/* main function */
int main(void)
{
  int i_err = 0;
  srand(time(NULL));
  
  i_err |= main_vstream_1();
  i_err |= main_vstream_2();
  i_err |= main_astream_();
  i_err |= main_hierarchy_();
  i_err |= main_registration_();
  i_err |= main_ds_alignment_();
  i_err |= main_target_bg_grid_();
  i_err |= main_vwindow_();
  i_err |= main_ca_();
  i_err |= main_iso639_();
  i_err |= main_system_clock_();
  i_err |= main_mx_buff_utilization_();
  i_err |= main_copyright_();
  i_err |= main_max_bitrate_();
  i_err |= main_private_data_();
  i_err |= main_smoothing_buffer_();
  i_err |= main_std_();
  i_err |= main_ibp_();
  i_err |= main_service_();

  if(i_err)
    fprintf(stderr, "At least one test has FAILED !!!\n");
  else
    fprintf(stdout, "All tests succeeded.\n");

  return i_err;
}

