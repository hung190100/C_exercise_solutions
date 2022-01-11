#include <stdio.h>
#include <stdlib.h>

void display(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    display(n);
    return 0;
}
