//
// Created by thuyh on 8/10/2026.
//

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    printf("%s\n", memmove(dest, src, 6));

    char str[] = "123456789";
    memmove(str + 2, str, 5);
    printf("%s\n", str);
}
