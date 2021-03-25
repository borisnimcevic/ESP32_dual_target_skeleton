#include "HardwareDriver.h"
#include <unistd.h>

void delay_ms(uint32_t amountOfMilliseconds) {
  usleep(amountOfMilliseconds * 1000);
}
