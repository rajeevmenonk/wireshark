/* persfilepath_opt.h
 * Definitions of routines to handle command-line options to set paths
 * for directories containing personal files (configuration, saved
 * captures)
 *
 * $Id$
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef PERSFILEPATH_OPT_H
#define PERSFILEPATH_OPT_H

#include "ws_symbol_export.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * process command line option that affects the paths of the directories
 * used for personal files (configuration, saved captures)
 */
WS_DLL_PUBLIC gboolean persfilepath_opt(int opt, const char *optstr);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* PERSFILEPATH_OPT_H */
