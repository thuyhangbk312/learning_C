//
// Created by thuyh on 8/6/2026.
//
#include <stdint.h>
#include <stdio.h>

void displayArr(uint8_t *arr, uint8_t size) {
    for (uint8_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
// Kích thước con trỏ cpu kiến trúc 64-bit là 8 byte
// Vì con trỏ lưu địa chỉ bộ nhớ, một địa chỉ dài 64 bit = 8 byte,
// nên con trỏ phải có kích thước 8 byte để chứa địa chỉ đó
// sizeof(p) → kích thước con trỏ (4 hoặc 8 byte).
// sizeof(*p) → kích thước dữ liệu mà con trỏ trỏ tới.

int main() {
    uint8_t array[] = {1,2,3,4,5,2,3,4,5,6};
    displayArr(array, sizeof(array));
    printf("\n%d", sizeof(uint16_t*));
    printf("\n%d", sizeof(uint32_t*));
    printf("\n%d", sizeof(uint64_t*));
    printf("\n%d", sizeof(uint8_t*));
    printf("\n%d", sizeof(int*));
    printf("\n%d", sizeof(float*));
    printf("\n%d", sizeof(double*));
}