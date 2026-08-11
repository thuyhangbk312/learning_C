//
// Created by thuyh on 7/28/2026.
//

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t arr[] = {1,3,6,5,8,15,10};
    uint8_t lenArr = sizeof(arr)/sizeof(arr[0]);
    uint8_t max = arr[0];
    uint8_t min = arr[0];

    for (uint8_t i = 0; i < lenArr; i++) {
       if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("max = %d\n", max);
    printf("min = %d", min);
}