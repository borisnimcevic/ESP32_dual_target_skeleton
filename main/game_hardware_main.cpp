#include "ApplicationMain.h"

extern "C"{
    void app_main();
}

void app_main() {
  while (true) {
    ApplicationMain_Loop();
  }
}
