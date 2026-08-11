//
// Created by thuyh on 8/7/2026.
//

#include <stdio.h>
#include <string.h>

int main() {
    // strcpy
    char src[] = "Hello12345";
    char dest[6];
    strcpy(dest, src);
    printf("dest = %s\n", dest);

    // strncpy
    char src1[] = "Hello12345";
    char dest1[6];
    strncpy(dest1, src1, 5);
    dest1[5] = 0;
    printf("dest1 = %s\n", dest1);

    // strncpy(dest, src, n)
    // n = tổng số byte tối đa được ghi
    // → '\0' có thể không còn chỗ

    return 0;
}
