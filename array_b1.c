#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Nhap arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("\nGia tri lon nhat trong mang la %d", max);
    printf("\nGia tri nho nhat trong mang la %d", min);

    return 0;
}
