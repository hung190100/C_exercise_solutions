#include <stdio.h>
#include <stdlib.h>

int sum_arr (int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
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

    printf("Tong cua mang la: %d", sum_arr(a,n));

    return 0;
}
