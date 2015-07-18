/*****************************************************************************
 * test_dr.h
 * (c)2001-2002 VideoLAN
 * $Id: test_dr.h,v 1.3 2002/05/09 20:39:02 bozo Exp $
 *
 * Authors: Arnaud de Bossoreille de Ribou <bozo@via.ecp.fr>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *****************************************************************************/
#ifdef WIN32
# define PRI64d "I64u"
#else
# define PRI64d "llu"
#endif

#include "test_dr_cmp.h"

#define BOZO_VARS(sname)                                                \
  int i_err = 0;                                                        \
  long long unsigned int i_loop_count;                                  \
  dvbpsi_##sname##_dr_t s_decoded, *p_new_decoded;                      \
  dvbpsi_descriptor_t * p_descriptor;

#define BOZO_CLEAN()                                                    \
  dvbpsi_DeleteDescriptors(p_descriptor);

#define BOZO_DOJOB(fname)                                               \
  if(!(i_loop_count & 0xffff))                                          \
    fprintf(stdout, "\r  iteration count: %22"PRI64d, i_loop_count);       \
  i_loop_count++;                                                       \
  p_descriptor = dvbpsi_Gen##fname##Dr(&s_decoded, 0);                  \
  p_new_decoded = dvbpsi_Decode##fname##Dr(p_descriptor);

#define BOZO_START(name)                                                \
  fprintf(stdout, "\"%s\" descriptor check:\n", #name);

#define BOZO_END(name)                                                  \
  if(i_err)                                                             \
    fprintf(stderr, "\"%s\" descriptor check FAILED !!!\n\n", #name);   \
  else                                                                  \
    fprintf(stdout, "\"%s\" descriptor check succeeded\n\n", #name);


/* integer */
#define BOZO_init_integer(name, default)                                \
  s_decoded.name = default;

#define BOZO_begin_integer(name, bitcount)                              \
  if(!i_err)                                                            \
  {                                                                     \
    unsigned int i = 0;                                                 \
    fprintf(stdout, "  \"%s\" %u bit(s) integer check\n",               \
            #name, bitcount);                                           \
    i_loop_count = 0;                                                   \
    s_decoded.name = 1;                                                 \
    do                                                                  \
    {

#define BOZO_end_integer(name, bitcount)                                \
      s_decoded.name <<= 1;                                             \
    } while(!i_err                                                      \
         && (++i < bitcount));                                          \
    fprintf(stdout, "\r  iteration count: %22"PRI64d, i_loop_count);       \
    if(i_err)                                                           \
      fprintf(stdout, "    FAILED !!!\n");                              \
    else                                                                \
      fprintf(stdout, "    Ok.\n");                                     \
  }

#define BOZO_check_integer(name, bitcount)                              \
  if(!i_err && (s_decoded.name != p_new_decoded->name))                 \
  {                                                                     \
    fprintf(stderr, "\nError: integer %s %"PRI64d" -> %"PRI64d"\n", #name,        \
            (long long unsigned int)s_decoded.name,                     \
            (long long unsigned int)p_new_decoded->name);               \
    i_err = 1;                                                          \
  }


/* boolean */
#define BOZO_init_boolean(name, default)                                \
  s_decoded.name = default;

#define BOZO_begin_boolean(name)                                        \
  if(!i_err)                                                            \
  {                                                                     \
    fprintf(stdout, "  \"%s\" boolean check\n", #name);                 \
    i_loop_count = 0;                                                   \
    s_decoded.name = false;                                             \
    do                                                                  \
    {

#define BOZO_end_boolean(name)                                          \
      s_decoded.name ^= true;                                           \
    } while(!i_err && s_decoded.name);                                  \
    fprintf(stdout, "\r  iteration count: %22"PRI64d, i_loop_count);       \
    if(i_err)                                                           \
      fprintf(stdout, "    FAILED !!!\n");                              \
    else                                                                \
      fprintf(stdout, "    Ok.\n");                                     \
  }

#define BOZO_check_boolean(name)                                        \
  if(    !i_err                                                         \
      && (    (s_decoded.name && !p_new_decoded->name)                  \
           || (!s_decoded.name && p_new_decoded->name)))                \
  {                                                                     \
    fprintf(stderr, "\nError: boolean %s %d -> %d\n", #name,            \
            s_decoded.name, p_new_decoded->name);                       \
    i_err = 1;                                                          \
  }

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

/* array */
#define BOZO_init_array(len_name)                                       \
  s_decoded.len_name = 0;

static void BOZO_fill_array(void *a, size_t len)
{
  uint8_t *b = a;
  for(size_t i = 0 ; i < len ; ++i) b[i] = rand();
}

#define BOZO_begin_array(name)                                          \
  if(!i_err)                                                            \
  {                                                                     \
    fprintf(stdout, "  \"%s\" array check\n", #name);

#define BOZO_loop_array_begin(name, len_name, min_size)                 \
    i_loop_count = min_size;                                            \
    do                                                                  \
    {                                                                   \
      BOZO_fill_array(s_decoded.name, sizeof(s_decoded.name));          \
      s_decoded.len_name = i_loop_count;

#define BOZO_loop_array_end(name, max_len)                              \
    } while(!i_err && i_loop_count < max_len);                          \
    fprintf(stdout, "\r  iteration count: %22"PRI64d, i_loop_count);

#define BOZO_end_array                                                  \
    if(i_err)                                                           \
      fprintf(stdout, "    FAILED !!!\n");                              \
    else                                                                \
      fprintf(stdout, "    Ok.\n");                                     \
  }

#define BOZO_check_array_begin(name, len_name)                          \
  if(!i_err && s_decoded.len_name != p_new_decoded->len_name)           \
  {                                                                     \
    fprintf(stderr, "\nError : array %s sizes not equal : %d -> %d\n",  \
      #name, s_decoded.len_name, p_new_decoded->len_name);              \
    i_err = 1;                                                          \
  }

#define BOZO_check_array_gen(name, len_name)                            \
  else if(    !i_err                                                    \
      && (memcmp(s_decoded.name, p_new_decoded->name,                   \
        s_decoded.len_name * sizeof(s_decoded.name[0])) != 0))          \
  {                                                                     \
    fprintf(stderr, "\nError: array %s not equal\n", #name);            \
    i_err = 1;                                                          \
  }

#define BOZO_check_array_cmp(name, len_name, type)                      \
  else if(    !i_err                                                    \
      && (my_memcmp(s_decoded.name, p_new_decoded->name,                \
        s_decoded.len_name, compare_##type) != 0))                      \
  {                                                                     \
    fprintf(stderr, "\nError: array %s not equal\n", #name);            \
    i_err = 1;                                                          \
  }
