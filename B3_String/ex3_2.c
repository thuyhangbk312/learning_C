//
// Created by thuyh on 8/12/2026.
//
#include <stdint.h>
#include <stdio.h>
#include <string.h>

void replace(char src[], uint8_t sizeOfSrc, char find[], char rpl[]) {
    char *p = strstr(src, find);

    uint8_t newLen = strlen(src) - strlen(find) + strlen(rpl);
    if (p != NULL) {
        char *tail = p + strlen(find);
        if (sizeOfSrc > newLen) {
            memmove(p + strlen(rpl), tail, strlen(tail));

            memcpy(p, rpl, strlen(rpl));
            for (uint8_t i = 0; i < newLen; i++) {
                printf("%c", src[i]);
            }
        } else {
            printf("Over");
        }
    } else {
        printf("Not found!");
    }
}

int main() {
    char src[20] = "Hello123";
    char find[] = "llo";
    char rpl[] = "hihi";
    uint8_t sizeOfSrc = sizeof(src)/sizeof(src[0]);
    replace(src, sizeOfSrc, find, rpl);
}