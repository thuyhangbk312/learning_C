//
// Created by thuyh on 8/10/2026.
//
#include <stdio.h>
#include <string.h>

// printf    → in ra màn hình
// sprintf   → ghi chuỗi vào mảng
// snprintf  → ghi chuỗi vào mảng nhưng giới hạn kích thước
// snprintf là hàm dùng để ghép/format dữ liệu thành chuỗi,
// giống sprintf, nhưng có thêm giới hạn kích thước để tránh ghi tràn mảng
// sprintf là hàm dùng để format dữ liệu rồi ghi kết quả vào một chuỗi (buffer).
// Nó gần giống printf, nhưng thay vì in ra màn hình thì nó ghi vào mảng char.

int main() {
    char str[20];

    snprintf(str, sizeof(str), "Age: %d", 25);
    printf("%s\n", str);

    // str chỉ có 10 byte, nên snprintf không được phép ghi quá 10 byte.
    // Nhưng phải chừa 1 byte cho '\0', nên thực tế chuỗi lưu được tối đa 9 ký tự
    // snprintf = format chuỗi vào buffer + giới hạn kích thước buffer

    char str1[10];
    snprintf(str1, sizeof(str1), "Hello World");
    printf("%s", str1);

}