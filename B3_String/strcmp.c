//
// Created by thuyh on 8/10/2026.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hi123";

    // 2 chuoi giong nhau tra ve 0
    // str1 < str2 => tra ve < 0,
    // str1 > str2 => > 0
    printf("%d\n", strcmp(str1, str2));

    // strncmp() => n = số kí tự tốt đa được so sánh
    printf("%d\n", strncmp(str1, str2, 1));


    return 0;
}
