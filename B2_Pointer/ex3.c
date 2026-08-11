//
// Created by thuyh on 8/7/2026.
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool calculate(uint8_t a, uint8_t b, uint8_t *sum, int8_t *sub, uint16_t *product, uint8_t *div) {
    if (b == 0) {
        return false;
    } else {
        *sum = a + b;
        *sub = a - b;
        *product = a * b;
        *div = a / b;
        return true;
    }
}

int main() {
    uint8_t a = 2;
    uint8_t b = 1;
    uint8_t sum;
    int8_t sub;
    uint16_t product;
    uint8_t div;

    bool ret = calculate(a, b, &sum, &sub, &product, &div);

    if (ret == false) {
        printf("Can not devide by zero");
    } else {
        printf("Sum = %d, Sub = %d, Product = %d, Div = %d", sum, sub, product, div);
    }
}