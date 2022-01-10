#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];
    int value; // gia tri can tim trong mang

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Nhap arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nNhap gia tri can tim: ");
    scanf("%d", &value);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == value) {
                printf("\nVi tri chua %d la arr[%d][%d]", value, i, j);
            }
        }
    }

    return 0;
}
