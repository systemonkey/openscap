/*
 * Copyright 2016 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#pragma once
#ifndef OSCAP_DOWNLOAD_CB_H_
#define OSCAP_DOWNLOAD_CB_H_

#include "oscap_export.h"

/**
 * Type of the function used to report progress of download.
 * @param warning indicates whether the message is rather warning or notice
 * @param format printf-like format string
 */
typedef void (*download_progress_calllback_t) (bool warning, const char * format, ...);

#endif
