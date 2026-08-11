//
// Created by thuyh on 8/6/2026.
//

#include <stdint.h>
#include <stdio.h>

int main() {
    uint8_t array[] ={1,2,3,4,5,6};
    uint8_t *pArray = array; // *pArray = &array[0];

    printf("%p\n", pArray);
    printf("%p\n", ++pArray);

    for (uint8_t i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%d", pArray[i]);
        // printf("%d", *(pArray + i));
    }
}
