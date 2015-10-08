/*****************************************************************************
 * dr.h
 * Copyright (C) 2001-2010 VideoLAN
 *
 * Authors: Arnaud de Bossoreille de Ribou <bozo@via.ecp.fr>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

/*!
 * \file <dr.h>
 * \author Arnaud de Bossoreille de Ribou <bozo@via.ecp.fr>
 * \brief Gather all dr_*.h into one.
 *
 * Gathers all dr_*.h into one. Use this header if you need a lot of them.
 */

#ifndef _DVBPSI_DR_H_
#define _DVBPSI_DR_H_
#include "atsc/dr_81.h"
#include "atsc/dr_86.h"
#include "atsc/dr_a0.h"
#include "atsc/dr_a1.h"
#include "dvb/dr_40.h"
#include "dvb/dr_41.h"
#include "dvb/dr_42.h"
#include "dvb/dr_43.h"
#include "dvb/dr_44.h"
#include "dvb/dr_45.h"
#include "dvb/dr_47.h"
#include "dvb/dr_48.h"
#include "dvb/dr_49.h"
#include "dvb/dr_4a.h"
#include "dvb/dr_4b.h"
#include "dvb/dr_4c.h"
#include "dvb/dr_4d.h"
#include "dvb/dr_4e.h"
#include "dvb/dr_4f.h"
#include "dvb/dr_50.h"
#include "dvb/dr_52.h"
#include "dvb/dr_53.h"
#include "dvb/dr_54.h"
#include "dvb/dr_55.h"
#include "dvb/dr_56.h"
#include "dvb/dr_58.h"
#include "dvb/dr_59.h"
#include "dvb/dr_5a.h"
#include "dvb/dr_62.h"
#include "dvb/dr_66.h"
#include "dvb/dr_69.h"
#include "dvb/dr_73.h"
#include "dvb/dr_76.h"
#include "dvb/dr_7c.h"
#include "mpeg/dr_02.h"
#include "mpeg/dr_03.h"
#include "mpeg/dr_04.h"
#include "mpeg/dr_05.h"
#include "mpeg/dr_06.h"
#include "mpeg/dr_07.h"
#include "mpeg/dr_08.h"
#include "mpeg/dr_09.h"
#include "mpeg/dr_0a.h"
#include "mpeg/dr_0b.h"
#include "mpeg/dr_0c.h"
#include "mpeg/dr_0d.h"
#include "mpeg/dr_0e.h"
#include "mpeg/dr_0f.h"
#include "mpeg/dr_10.h"
#include "mpeg/dr_11.h"
#include "mpeg/dr_12.h"
#include "mpeg/dr_13.h"
#include "mpeg/dr_14.h"
#include "mpeg/dr_1b.h"
#include "mpeg/dr_1c.h"
#include "mpeg/dr_24.h"
#include "custom/dr_83_eacem.h"
#include "custom/dr_8a_scte.h"

#else
#error "Multiple inclusions of dr.h"
#endif
