#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fibonacci(long long int n) {
    long long int a1 = 1, a2 = 1;
    if (n < 2) {
        printf("ERROR");
    } else if (n == 2) {
        printf("%ld\n%ld%n", a1, a2);
    } else {
        long long int a = a2;
        printf("%ld\n", a1);
        while (a < n) {
            printf("%ld\n", a);
            a = a1 + a2;
            a1 = a2;
            a2 = a;
        }
    }
}

int main()
{
    long long int n;

    printf("Nhap n: ");
    scanf("%ld", &n);

    fibonacci(n);

    return 0;
}
