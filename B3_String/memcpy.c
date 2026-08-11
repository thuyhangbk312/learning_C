//
// Created by thuyh on 8/10/2026.
//

#include <stdio.h>
#include <string.h>

// Chuỗi → strcpy, strncpy
// Dữ liệu/mảng bất kỳ → memcpy
// memcpy Làm việc với mọi loại dữ liệu, ko tự thêm '\0'

int main() {
    int src[] = {10, 20, 30};
    int dest[3];

    memcpy(dest, src, 3 * sizeof(int));
    // memcpy(dest, src, sizeof(src));
    for (int i = 0; i < 3; i++) {
        printf("%d ", dest[i]);
    }

    char src1[] = "Hello123";
    char dest1[10];

    printf("\n");

    memcpy(dest1, src1, 8);
    dest1[8] = 0;
    printf("%s", dest1);

    return 0;
}