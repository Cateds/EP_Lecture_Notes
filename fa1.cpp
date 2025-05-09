// EP Lecture.8 FA.1
// /*

#include "mbed.h"

AnalogOut dac_out(A3);
float val;

int main(void) {
    while (1) {
        for (val = 0.f; val < 1.f; val += 0.01) {
            dac_out.write(val);
            wait_us(100);
        }
        for (val = 1.f; val > 0.f; val -= 0.01) {
            dac_out.write(val);
            wait_us(100);
        }
    }
}

// */