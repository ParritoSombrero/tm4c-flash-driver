#include <stdint.h>
#include <string.h>
#include "gpio.h"
#include "flash.h"

uint32_t firmware[] = {
    0x12345678,
    0xDEADBEEF,
    0x87654321
};

int main(void) {
    gpio_init();
    blueLEDon();
    eraseAddress(0x00035000);
    flashBufferAddress(0x00035000, firmware, 3);
    blueLEDoff();
    if (verifyBufferAddress(0x00035000, firmware, 3)) {
        greenLEDon();
    } else {
        redLEDon();
    }
}
