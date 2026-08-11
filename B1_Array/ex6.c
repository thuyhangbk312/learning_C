//
// Created by thuyh on 7/28/2026.
//

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t arr[] = {1,3,6,5,8,10};
    uint8_t a = 3;
    uint8_t lenArr = sizeof(arr)/sizeof(arr[0]);

    for (uint8_t i = a; i < lenArr; i++) {
        arr[i] = arr[i+1];
    }

    for (uint8_t i = 0; i < lenArr - 1; i++) {
        printf("%d ", arr[i]);
    }

}