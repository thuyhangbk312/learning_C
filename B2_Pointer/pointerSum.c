//
// Created by thuyh on 8/6/2026.
//

#include <stdint.h>
#include <stdio.h>

void calculate(uint8_t a, uint8_t b, uint16_t *sum, int16_t *dif) {
    *sum = a + b;
    *dif = a - b;
}

uint8_t main() {
    uint8_t a = 15;
    uint8_t b = 10;
    uint16_t sum;
    int16_t dif;

    calculate(a, b, &sum, &dif);
    printf("Sum = %d, dif = %d", sum, dif);
}