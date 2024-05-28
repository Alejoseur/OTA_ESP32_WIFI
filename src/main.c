#include <wifi.h>
#include <update.h>
#include <esp_system.h>


void app_main() {
        // Initialize NVS.
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        // 1.OTA app partition table has a smaller NVS partition size than the non-OTA
        // partition table. This size mismatch may cause NVS initialization to fail.
        // 2.NVS partition contains data in new format and cannot be recognized by this version of code.
        // If this happens, we erase NVS partition and initialize NVS again.
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);

    wifi_init();
    printf("wifi init done.\n");
    printf("Connected to wifi network\n");

    printf("Firmware 1\n");
    int a = check_updates();
    if(a==1){
        printf("Actualizando el Firmware...\n");
        update();
        
    }else{
        printf("no hay actualizaciones...\n");

    }
     
}