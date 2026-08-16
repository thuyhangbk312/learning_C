//
// Created by thuyh on 8/13/2026.
//
#include <stdint.h>
#include <stdio.h>
#include <string.h>

void splitString(char string[200], char subString[10], char *str1, char *str2, uint32_t a, uint32_t b, uint32_t c) {
    char *p = strstr(string, subString);
    char *last =  NULL;

        while ((p != NULL)) {
            last = p;
            p = strstr(p + 1, subString);
        }

        if (last != NULL) {
            if (strcmp(subString,"a=") == 0) {
                sscanf(last, "a=%d", &a);
                printf("a = %d\n", a);
            }
            else if (strcmp(subString,"b=") == 0) {
                sscanf(last, "b=%d", &b);
                printf("b = %d\n", b);
            }
            else if (strcmp(subString,"c=") == 0) {
                sscanf(last, "c=%d", &c);
                printf("c = %d\n", c);
            }
            else if (strcmp(subString,"str1=") == 0) {
                char *start = last + 6;   // bỏ qua str1="
                // Không có dấu " mở
                if (last[5] != '"') {
                    printf("ERROR\n");
                    return;
                }
                // Không được rỗng: str1=""
                if (*start == '"') {
                    printf("ERROR\n");
                    return;
                }
                // Tìm dấu " đóng
                char *end = strchr(start, '"');
                // Không có dấu " đóng
                if (end == NULL) {
                    printf("ERROR\n");
                    return;
                }
                // Sau dấu " đóng phải kết thúc chuỗi
                if (*(end + 1) != '\0' && *(end + 1) != ',') {
                    printf("ERROR\n");
                    return;
                }

                sscanf(last, "str1=\"%31[^\"]\"", str1);
                printf("str1 = %s\n", str1);
            }
            else if (strcmp(subString,"str2=") == 0) {
                sscanf(last, "str2=\"%63[^\"]\"", str2);
                printf("str2 = %s\n", str2);
            }
        }
    }
int main() {
    uint32_t a, b, c;
    char str1[32];
    char str2[64];
    char string[200];
    char subString[10];

    printf("Input string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;
    splitString(string,"a=", str1, str2, a, b, c);
    splitString(string,"b=",str1, str2, a, b, c);
    splitString(string,"c=", str1, str2, a, b, c);
    splitString(string,"str1=", str1, str2, a, b, c);
    splitString(string,"str2=", str1, str2, a, b, c);
}