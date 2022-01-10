#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, temp;

    printf("Nhap hai so: ");
    scanf("%d %d", &a, &b);

    int *p, *q;
    p = &a;
    q = &b;

// Cach 1
    printf("\nTruoc hoan doi");
    printf("\na = %d, b = %d\n", a, b);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\nSau hoan doi");
    printf("\na = %d, b = %d\n", a, b);

// Cach 2
/*
    printf("\nTruoc hoan doi");
    printf("\na = %d, b = %d\n", *p, *q);


    temp = p;
    p = q;
    q = temp;

    printf("\nSau hoan doi");
    printf("\na = %d, b = %d\n", *p, *q);
*/
    return 0;
}
