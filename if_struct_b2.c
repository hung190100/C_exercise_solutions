#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Phuong trinh co nghiem la: %f", -c/b);
    }

    float delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("Phuong trinh vo nghiem");
    } else if (delta == 0) {
        printf("Phuong trinh co nghiem kep x = %f", -b/(2*a));
    } else {
        printf("Phuong trinh co nghiem x1 = %f, x2 = %f", (-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a));
    }

    return 0;
}
