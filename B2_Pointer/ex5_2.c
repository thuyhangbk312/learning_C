//
// Created by thuyh on 8/7/2026.
//

#include <stdint.h>
#include <stdio.h>

void reverse(uint8_t *array, uint8_t size) {
    for (uint8_t i = 0; i < size/2; i++) {
        uint8_t temp = *(array + i);
        *(array + i) = *(array + size - 1 - i);
        *(array + size - 1 - i) = temp;
    }
}

int main() {
    uint8_t arr[] = {1,2,3,4,5};
    uint8_t size = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, size);

    for (uint8_t i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}