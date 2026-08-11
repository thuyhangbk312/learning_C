//
// Created by thuyh on 8/10/2026.
//

#include <stdio.h>

// sscanf = lấy dữ liệu từ một chuỗi rồi tách/đọc dữ liệu đó vào các biến

int main() {
    char str[] = "25 80 trung";
    int a, b;
    char strTest[16] = {0};

    int n = sscanf(str, "%d %d %s", &a, &b, strTest);

    printf("n = %d\n", n);

    printf("%d %d\n", a, b);
    printf("%s", strTest);
}