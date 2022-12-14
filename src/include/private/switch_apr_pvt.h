/*
 * FreeSWITCH Modular Media Switching Software Library / Soft-Switch Application
 * Copyright (C) 2005-2021, Anthony Minessale II <anthm@freeswitch.org>
 *
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is FreeSWITCH Modular Media Switching Software Library / Soft-Switch Application
 *
 * The Initial Developer of the Original Code is
 * Anthony Minessale II <anthm@freeswitch.org>
 * Portions created by the Initial Developer are Copyright (C)
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Anthony Minessale II <anthm@freeswitch.org>
 * Andrey Volk <andywolk@gmail.com>
 *
 *
 * switch_apr_pvt.h - APR
 *
 */

#ifndef __SWITCH_APR_PVT_H__
#define __SWITCH_APR_PVT_H__

/* for apr_pool_create and apr_pool_destroy */
/* functions only used in this file so not exposed */
#include <apr_pools.h>

/* for apr_hash_make, apr_hash_pool_get, apr_hash_set */
/* functions only used in this file so not exposed */
#include <apr_hash.h>

/* for apr_pvsprintf */
/* function only used in this file so not exposed */
#include <apr_strings.h>

/* for apr_initialize and apr_terminate */
/* function only used in this file so not exposed */
#include <apr_general.h>

#include <apr_portable.h>

#endif // __SWITCH_APR_PVT_H__

/* For Emacs:
 * Local Variables:
 * mode:c
 * indent-tabs-mode:t
 * tab-width:4
 * c-basic-offset:4
 * End:
 * For VIM:
 * vim:set softtabstop=4 shiftwidth=4 tabstop=4 noet:
 */
