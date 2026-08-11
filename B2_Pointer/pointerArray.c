//
// Created by thuyh on 8/6/2026.
//

#include <stdint.h>
#include <stdio.h>

void processArray(uint32_t *pArr, uint8_t size) {
    printf("%d\n", pArr[0]);
}
int main() {
    uint32_t arr[] = {1, 10, 3};
    uint32_t *p = arr; // *p = &arr[0];

    printf("p = %p\n", p);
    printf("arr = %p\n", arr);
    printf("*arr = %d\n", *arr);
    printf("*arr + 1 = %d\n", *(arr + 1));

    processArray(arr, sizeof(arr));
}
