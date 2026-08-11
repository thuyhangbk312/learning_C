//
// Created by thuyh on 8/7/2026.
//

#include <stdint.h>
#include <stdio.h>

void minMax(uint8_t array[], uint8_t size, uint8_t *min, uint8_t *max) {
    *min = array[0];
    *max = array[0];

    for (uint8_t i = 0; i < size; i++) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
    }
}

int main() {
    uint8_t array[] = {6,8,5,4,9,2,8,3};
    uint8_t size = sizeof(array)/sizeof(array[0]);
    uint8_t min;
    uint8_t max;

    minMax(array,size, &min, &max);

    printf("Min = %d, Max = %d", min, max);

    return 0;
}