#include "ApplicationMain.h"
#include "HardwareDriver.h"
#include <iostream>

void ApplicationMain_Loop(void) {
  std::cout << "test loop" << std::endl;
  delay_ms(500);
}
