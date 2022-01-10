#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, f;

    printf("Nhap x: ");
    scanf("%f", &x);

    if (x >= 0) {
        f = x * x;
    } else {
        f = x;
    }

    printf("Gia tri cua f(%f) la %f", x, f);

    return 0;
}
