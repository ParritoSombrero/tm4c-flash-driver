#include <stdint.h>
#include <string.h>
#include "gpio.h"
#include "flash.h"

int main(void) {
    gpio_init();
    redLEDon();
    eraseAddress(0x00035000);
    flashAddress(0x00035008, 0x00000001);
    redLEDoff();
    if (verifyAddress(0x00035008, 0x00000001)) {
        greenLEDon();
    } else {
        redLEDon();
    }
}
