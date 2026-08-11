//
// Created by thuyh on 8/6/2026.
//

#include <stdint.h>
#include <stdio.h>

void swap_1(uint8_t a, uint8_t b) {
    uint8_t temp = a;
    a = b;
    b = temp;
}

// Dung con tro
void swap_2(uint8_t *a, uint8_t *b) {
    uint8_t temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    uint8_t a = 5;
    uint8_t b = 10;

    printf("Before swap_1: a = %d, b = %d\n", a, b);
    swap_1(a, b);
    printf("After swap_1: a = %d, b = %d\n", a, b);

    printf("Before swap_2: a = %d, b = %d\n", a, b);
    swap_2(&a, &b);
    printf("After swap_2: a = %d, b = %d\n", a, b);
}