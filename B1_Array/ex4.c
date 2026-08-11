//
// Created by thuyh on 7/28/2026.
//

#include <stdio.h>
#include <stdint.h>
// dao nguoc mang
int main(void) {
    uint8_t arr[] = {1,3,6,8,10};
    uint8_t lenArr = sizeof(arr)/sizeof(arr[0]);

    for (uint8_t i = 0; i < lenArr/2; i++) {
        uint8_t temp = arr[i];
        arr[i] = arr[lenArr - 1 - i];
        arr[lenArr- 1 - i] = temp;
    }

    for (uint8_t i = 0; i < lenArr; i++) {
        printf("%d ", arr[i]);
    }
}