#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// Ham viet toan bo chuoi thanh chu cai thuong
void lower (char *arr) {
    int n = strlen(arr);
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 65 && arr[i] <= 91) {
            arr[i] += 32;
        }
    }
}

// Ham in hoa chu cai dau cua moi tu
void in_hoa_chu_cai_dau (char *arr) {
    int n = strlen(arr);

    if (arr[0] >= 97 && arr[0] <= 123) {
        arr[0] -= 32;
    }

    for (int i = 1; i < n; i++) {
        if (arr[i-1] == 32 && arr[i] >= 97 && arr[i] <= 123) {
            arr[i] -= 32;
        }
    }
}

// Xoa het khoang trang trong chuoi
void xoa_khoang_trang (char *arr, char *result) {
    int n = strlen(arr);
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 32) {
            result[k] = arr[i];
            k++;
        }
    }
}

// Them khoang trang vao dau moi tu
void them_khoang_trang (char *arr, char *result) {
    int n = strlen(arr);
    int k = 1;
    result[0] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] >= 97 && arr[i] <= 123) {
            result[k] = arr[i];
            k++;
        } else {
            result[k] = ' ';
            k++;
            result[k] = arr[i];
            k++;
        }
    }
}

int main()
{
    char ho_ten[30];
    char temp[30]; // Dung lam trung gian
    char result[30]; // Dung de luu ket qua

    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(ho_ten);

    lower(ho_ten);
    in_hoa_chu_cai_dau(ho_ten);
    puts(ho_ten);

    xoa_khoang_trang(ho_ten, temp);
    puts(temp);

    them_khoang_trang(temp, result);
    puts(result);

    printf("Length = %d\n", strlen(ho_ten));
    printf("Length = %d\n", strlen(temp));
    printf("Length = %d\n", strlen(result));

    return 0;
}
