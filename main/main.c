#include "deauth.h"
#include "evil_twin.h"
#include "captive_portal.h"
#include "esp_log.h"

void app_main(void)
{
    ESP_LOGI("APP_MAIN", "Initializing modules");
    init_deauth();
    init_evil_twin();
    init_captive_portal();
}