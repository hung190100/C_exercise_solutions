#include <stdio.h>
#include <stdlib.h>
/*
// Sử dụng vòng lặp
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int gt = 1;

    for (int i = 2; i <= n; i++) {
        gt *= i;
    }

    return gt;
}
*/
// Sử dụng đệ quy
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri cua %d! = %d", n, factorial(n));

    return 0;
}
