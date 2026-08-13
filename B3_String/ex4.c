//
// Created by thuyh on 8/12/2026.
//
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    uint8_t a, b;
    char strTest[10] = {0};

    while (1) {
        printf("Input string: ");
        fgets(str, 30, stdin);
        str[strcspn(str, "\n")] = 0;

        uint8_t numberOfWords = sscanf(str, "%s %hhu %hhu", strTest, &a, &b);

        if (strcmp(str, "1") == 0) {
            break;
        }
        if (numberOfWords != 3) {
            printf("Error\n");
        } else if (strcmp(strTest, "sum") != 0 &&
            strcmp(strTest, "minus") != 0 &&
            strcmp(strTest, "multi") != 0 &&
            strcmp(strTest, "div") != 0)
        {
            printf("Error\n");
        }
        else {
            if (strcmp(strTest, "sum") == 0) {
                printf("%d + %d = %d", a, b, a + b);
            } else if (strcmp(strTest, "minus") == 0) {
                printf("%d - %d = %d", a, b, a - b);
            } else if (strcmp(strTest, "multi") == 0) {
                printf("%d * %d = %d", a, b, a * b);
            } else if (strcmp(strTest, "div") == 0) {
                if (b == 0) {
                    printf("Can not div by zero");
                } else {
                    printf("%d / %d = %f", a, b, (float) a / b);
                }
            }
            printf("\n");
        }
    }
}