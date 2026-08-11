//
// Created by thuyh on 8/5/2026.
//

#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "Hi1111111";
    char str2[15] = "abcde12";

    if (strlen(str2) + 1 > sizeof(str1)) {
        printf("Can not copy");
    } else {
        for (uint8_t i = 0; i < strlen(str2); i++) {
            str1[i] = str2[i];
        }
        str1[strlen(str2)] = 0;
        printf("%s", str1);
    }
}