#include <stdio.h>
#include <stdlib.h>

// Dùng vòng lặp
int Fibonacci(int n) {
    int a1 = 1, a2 = 2;

    if(n == 1 || n == 2) {
        return 1;
    }

    int a;
    for (int i = 3; i < n; i++) {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
    }

    return a;
}

/*
// Dùng đệ quy
int Fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return Fibonacci(n-1) + Fibonacci(n-2);
}
*/
int main()
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("So fibonacci thu %d la %d", n, Fibonacci(n));

    return 0;
}
