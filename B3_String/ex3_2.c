//
// Created by thuyh on 8/12/2026.
//
#include <stdint.h>
#include <stdio.h>
#include <string.h>

void replace(char src[], uint8_t sizeOfSrc, char find[], char rpl[])
{
    if (src == NULL || find == NULL || rpl == NULL)
    {
        return;
    }

    char *p = strstr(src, find);

    uint8_t newLen = strlen(src) - strlen(find) + strlen(rpl);
    if (sizeOfSrc < newLen + 1)
    {
        printf("Over");
        return;
    }

    if (p == NULL)
    {
        printf("Not found!");
        return;
    }

    char *tail = p + strlen(find);
    memmove(p + strlen(rpl), tail, strlen(tail));
    memcpy(p, rpl, strlen(rpl));
    src[newLen] = 0;
    printf("%s", src);

}

int main() {
    char src[20] = "Hello123";
    char find[] = "llo";
    char rpl[] = "h";
    uint8_t sizeOfSrc = sizeof(src)/sizeof(src[0]);
    replace(src, sizeOfSrc, find, rpl);
}