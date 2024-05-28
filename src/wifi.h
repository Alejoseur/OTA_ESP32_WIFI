/* 
Connecting to an WiFi Access Point 
Developed by: Walid Amriou
www.walidamriou.com

Last update: July 2020
*/

#include <wifi_info.h>

#include <freertos/FreeRTOS.h>
#include <freertos/event_groups.h>
#include <esp_wifi.h>
#include <esp_system.h>
#include <esp_event.h>
#include <nvs_flash.h>
#include "esp_log.h"
#ifndef WIFI_H_INCLUDED
#define WIFI_H_INCLUDED

void wifi_init();


#endif
