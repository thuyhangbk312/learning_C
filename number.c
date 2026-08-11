//
// Created by thuyh on 7/24/2026.
//
#include <stdio.h>
#include <stdint.h>

int main () {
    uint8_t x = 0xFF;
    x += 5;

    // uint8_t a = 5 - 255;
    uint8_t y = 0x12;
    printf("x = %d\n", (int)x);
    printf("y = %d\n", (int)y);
    // printf("a = %d\n", (int)a);

    uint16_t z = 18;
    printf("0x%04x", (int)z);


}