//
// Created by thuyh on 8/10/2026.
//
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    char b[] = "Hallo";

    // e > a => memcmp(a, b, 5) > 0
    printf("%d\n", memcmp(a, b, 5));

    uint8_t a1[] = {10, 20, 30};
    uint8_t b1[] = {10, 20, 40};

    // 30 < 40.=> memcmp(a1, b1, 5) < 0
    printf("%d\n", memcmp(a1, b1, 5));

    // memcmp so sánh vùng nhớ, ko quan tâm '\0', phải truyền n byte
    // dùng cho string hoặc binary data_data
    // strcmp so sánh chuỗi, dừng khi gặp '\0', ko truyền byte, dùng cho string

    char a2[] = {'A', '\0', 'B'};
    char b2[] = {'A', '\0', 'C'};
    printf("%d\n", strcmp(a2, b2));
    printf("%d\n", memcmp(a2, b2, 3));
}