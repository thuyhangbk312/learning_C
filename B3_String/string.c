//
// Created by thuyh on 8/5/2026.
//

#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    // String,chuoi, xau la mot dang mang dac biet, mang nay co kieu du lieu la char
    // Do dai thuc te cua string la bat dau tu mang den khi gap ki tu ket thuc chuoi (0)

    char strTest[10] = "Hang";
    char strTest2[10] = "HNhat";

    printf("%d\n", sizeof(strTest));
    printf("%d\n", strlen(strTest));

    for (uint8_t i = 0; i < strlen(strTest); i++) {
        printf("%d ", strTest[i]);
    }

    printf("\n");


    // strTest[1] = 0;
    // strTest[0] = '!';
    // strTest[1] = 49;
    // strTest[2] = 50;
    // strTest[3] = 51;
    printf("StrTest: %s", strTest);
}