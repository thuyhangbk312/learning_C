//
// Created by thuyh on 8/7/2026.
//
#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    char src[] = "World";

    strcat(dest, " ");
    strcat(dest, src);
    printf("%s\n", dest);

    // strncat
    // n <= sizeof(dest) - strlen(dest) - 1
    char dest1[12] = "Hello1 ";
    strncat(dest1, src, 3);
    printf("%s", dest1);

    // strncat(dest, src, n)
    // n = số ký tự tối đa lấy từ src
    // → sau đó còn thêm '\0'

    return 0;
}