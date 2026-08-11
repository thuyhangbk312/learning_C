//
// Created by thuyh on 7/28/2026.
//

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t arr[] = {1,3,6,5,8,10};
    uint8_t a = 3;
    uint8_t lenArr = sizeof(arr)/sizeof(arr[0]);

    for (uint8_t i = 0; i < lenArr; i++) {
        for (uint8_t j = i + 1; j < lenArr; j++) {
            if (arr[j] < arr[i]) {
                uint8_t temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
}