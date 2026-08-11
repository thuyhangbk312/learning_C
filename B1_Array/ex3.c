//
// Created by thuyh on 7/28/2026.
//
#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t arr[] = {1,3,6,3,9,5,3,8,10};
    uint8_t a = 9;
    uint8_t count = 0;

    uint8_t lenArr = sizeof(arr)/sizeof(arr[0]);

    for (uint8_t i = 0; i < lenArr; i++) {
        if (arr[i] == a) {
            count++;
            if (count == 2) {
                printf("Position of number %d is %d", a, i);
            }
            if (count < 2) {
                printf("Don't have");
            }
        }
    }
}