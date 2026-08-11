//
// Created by thuyh on 8/6/2026.
//

#include <stdint.h>
#include <stdio.h>

void calculate(uint8_t array[], uint8_t size, uint16_t *sum, uint32_t *product) {
    *sum = 0;
    *product = 1;
    for (uint8_t i = 0; i < size; i++) {
        *sum += array[i];
        *product *= array[i];
    }
}

int main() {
    uint8_t array[] = {1,2,3};
    uint8_t size = sizeof(array)/sizeof(array[0]);

    uint16_t sum;
    uint32_t product;

    calculate(array, size, &sum, &product);

    printf("%d\n", sum);
    printf("%d", product);

    return 0;
}