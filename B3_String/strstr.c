//
// Created by thuyh on 8/7/2026.
//
#include <stdio.h>
#include <string.h>

char *my_strnstr(const char *str, const char *sub, int n)
{
    int i, j;

    for (i = 0; i < n && str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (i + j >= n || str[i + j] != sub[j]) {
                break;
            }
        }

        if (sub[j] == '\0') {
            return (char *)&str[i];
        }
    }

    return NULL;
}

int main() {
    char str[] = "Hello World";
    char *p = strstr(str, "World");
    printf("%s\n", p);

    // strnstr tìm tối đa n kí tự đầu của chuỗi lớn
    char *p1 = my_strnstr(str, "World", 5);

    if (p1 != NULL) {
        printf("%s", p1);
    } else {
        printf("Khong tim thay");
    }
}
