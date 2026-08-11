//
// Created by thuyh on 8/5/2026.
//

#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "Hi12";
    char str2[15] = "ab";
    uint8_t len = strlen(str1);

    if (strlen(str2) + strlen(str1) + 1 > sizeof(str1)) {
        printf("Can not combine");
    } else {
        for (uint8_t i = 0; i < strlen(str2); i++) {
            str1[len + i] = str2[i];
        }
        str1[len + strlen(str2)] = 0;
        printf("%s", str1);
    }
}