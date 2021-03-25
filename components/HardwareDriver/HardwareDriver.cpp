#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "HardwareDriver.h"

void delay_ms(uint32_t amountOfMilliseconds) {
  vTaskDelay(amountOfMilliseconds / portTICK_PERIOD_MS);
}
