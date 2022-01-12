#include <stdio.h>
#include <stdlib.h>

int check_Fibonacci (int n) {
    int a1 = 1, a2 = 1;

    if (n == 1) {
        return 1;
    }

    int a = a1 + a2;
    while (a <= n) {
        if (a == n) {
            return 1;
        }
        a = a1 + a2;
        a1 = a2;
        a2 = a;
    }

    return 0;
}

int main()
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (check_Fibonacci(n)) {
        printf("So %d la so Fibonacci", n);
    } else {
        printf("So %d khong la so Fibonacci", n);
    }

    return 0;
}
