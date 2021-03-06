/*
 * Copyright (C) 2017 The LineageOS Project
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

#define BLE_VND_INCLUDED TRUE
#include <cutils/properties.h>
#include <string.h>

inline const char* BtmGetDefaultName()
{
	char product_name[PROPERTY_VALUE_MAX];
	property_get("ro.product.name", product_name, "");

	if (strstr(product_name, "herolte"))
	        return "Samsung Galaxy S7";
	if (strstr(product_name, "hero2lte"))
	        return "Samsung Galaxy S7 edge";

	return "";
}

#define BTM_DEF_LOCAL_NAME BtmGetDefaultName()

#define BTM_WBS_INCLUDED TRUE       /* Enable WBS */
#define BTIF_HF_WBS_PREFERRED TRUE  /* Use WBS    */

#endif
