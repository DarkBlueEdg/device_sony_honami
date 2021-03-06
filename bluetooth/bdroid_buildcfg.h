/*
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2013 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#if !defined(OS_GENERIC)
#include <cutils/properties.h>
#include <string.h>

static inline const char* getBTDefaultName()
{
    char device[PROPERTY_VALUE_MAX];
    property_get("ro.boot.hardware", device, "");

    if (!strcmp("honami", device)) {
        return "Xperia Z1";
    } else if (!strcmp("amami", device)) {
        return "Xperia Z1 Compact";
    } else if (!strcmp("togari", device)) {
        return "Xperia Z Ultra";
    }

    return "Xperia";
}

#define BTM_DEF_LOCAL_NAME getBTDefaultName()
#endif // OS_GENERIC

#define BTA_HOST_INTERLEAVE_SEARCH  TRUE

#endif
