#include <stdio.h>
#include <stdlib.h>

int count_even_number (int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("So phan tu chan trong mang la: %d", count_even_number(a,n));

    return 0;
}
