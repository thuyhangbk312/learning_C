#include <math.h>
#include <stdio.h>

int main(void) {
    float a, b, c;

    do {
        printf("Nhap a # 0: ");
        scanf("%f", &a);
    } while (a == 0);

    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("phuong trinh vo nghiem");
    } else if (delta == 0) {
        printf("phuong trinh co nghiem kep x1 = x2 = %f", -b/(2*a));
    } else if (delta > 0) {
        printf("phuong trinh co 2 nghiem phan biet: x1 = %f, x2 = %f", (-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a));
    }
    return 0;
}
