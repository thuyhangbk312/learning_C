//
// Created by thuyh on 8/10/2026.
//

#include <stdio.h>

// sscanf = lấy dữ liệu từ một chuỗi rồi tách/đọc dữ liệu đó vào các biến

int main() {
    char str[] = "25 80";
    int a, b;

    sscanf(str, "%d %d", &a, &b);

    printf("%d %d", a, b);
}
