//
// Created by thuyh on 8/6/2026.
//

#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t c = 8;
    uint32_t *p = &c; // <=> uint32_t* p = &c;

    printf("*p = %d\n", *p);
    printf("&p = %p\n", &p);
    printf("&c = %p\n", &c);
    printf("p = %p\n", p);
}
