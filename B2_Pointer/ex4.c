//
// Created by thuyh on 8/7/2026.
//

#include <stdint.h>
#include <stdio.h>

uint8_t* find(uint8_t array[], uint8_t size, uint8_t a) {
    for (uint8_t i = 0; i < size; i++) {
        if (array[i] == a) {
            return &array[i];
        }
    }
    return NULL;
}

int main() {
    uint8_t arr[] = {1,2,3,4,5};
    uint8_t a = 2;

    uint8_t *p = find(arr, 5, a);

    if (p != NULL) {
        printf("Found! \n");
        printf("Value: %d\n", *p);
        printf("Address: %p", (void *)p);
    }
}