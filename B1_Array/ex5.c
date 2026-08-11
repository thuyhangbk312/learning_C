//
// Created by thuyh on 7/28/2026.
//

#include <stdio.h>
#include <stdint.h>
// chèn phần tử vào mảng
int main(void) {
    uint8_t arr[10] = {1,3,6,5,8,10,8,6,3};
    // uint8_t lenArr = sizeof(arr)/sizeof(arr[0]);
    uint8_t sizeArr = sizeof(arr)/sizeof(arr[0]);
    uint8_t lenArr = 9;
    uint8_t a = 20;
    uint8_t position = 11;

    if (position > lenArr) {
        printf("");
        return -1;
    }
    if (lenArr >= sizeArr) {
        printf("B1_Array is full");
        return -1;
    }
    for (uint8_t i = 0; i < lenArr; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (uint8_t i = lenArr; i > position; i--) {
        arr[i] = arr[i-1];
    }

    for (uint8_t i = 0; i < sizeArr; i++) {
        arr[position] = a;
        printf("%d ", arr[i]);
    }
}