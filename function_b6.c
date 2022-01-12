#include <stdio.h>
#include <stdlib.h>

int find_max (int arr[], int n) {
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
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

    printf("Gia tri lon nhat cua mang la: %d", find_max(a,n));

    return 0;
}
