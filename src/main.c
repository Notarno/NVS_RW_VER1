#include "nvs_rw.h"

void app_main()
{
    initializeNVS();
    write_read_NVS();
    restartNVS();
}