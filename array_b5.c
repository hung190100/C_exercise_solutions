#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mt1[100][100], mt2[100][100], sum[100][100], mul[100][100];

    int hang_mt1, cot_mt1, hang_mt2, cot_mt2;

    printf("Nhap so hang ma tran 1: ");
    scanf("%d", &hang_mt1);

    printf("Nhap so cot ma tran 1:  ");
    scanf("%d", &cot_mt1);

    printf("Nhap so hang ma tran 2: ");
    scanf("%d", &hang_mt2);

    printf("Nhap so cot ma tran 2:  ");
    scanf("%d", &cot_mt2);

// Nhap hai ma tran
    printf("\nNHAP MA TRAN 1\n");
    // Nhap ma tran 1
    for (int i = 0; i < hang_mt1; i++) {
        for (int j = 0; j < cot_mt1; j++) {
            printf("Nhap mt1[%d][%d]: ", i, j);
            scanf("%d", &mt1[i][j]);
        }
    }

    // Nhap ma tran 2
    printf("\nNHAP MA TRAN 2\n");
    for (int i = 0; i < hang_mt2; i++) {
        for (int j = 0; j < cot_mt2; j++) {
            printf("Nhap mt2[%d][%d]: ", i, j);
            scanf("%d", &mt2[i][j]);
        }
    }

// Cong hai ma tran
    if (hang_mt1 != hang_mt2 || cot_mt1 != cot_mt2) { // Yeu cau so hang va so cot cua 2 ma tran phai bang nhau
        printf("Khong cong duoc 2 ma tran");
    } else {
        for (int i = 0; i < hang_mt1; i++) {
            for (int j = 0; j < cot_mt1; j++) {
                sum[i][j] = mt1[i][j] + mt2[i][j];
            }
        }
    }

// Nhan hai ma tran
    if (cot_mt1 != hang_mt2) { // Yeu cau so cot cua ma tran 1 bang so hang cua ma tran 2
        printf("Khong nhan duoc 2 ma tran");
    } else {
        for (int i = 0; i < hang_mt1; i++) {
            for (int j = 0; j < cot_mt2; j++) {
                for (int k = 0; k < cot_mt1; k++) {
                    mul[i][j] += mt1[i][k] * mt2[k][j];
                }
            }
        }
    }

// In cac ma tran
    printf("\nIN CAC MA TRAN\n");
    printf("Ma tran 1\n");
    for (int i = 0; i < hang_mt1; i++) {
        for (int j = 0; j < cot_mt1; j++) {
            printf("%3d", mt1[i][j]);
        }
        printf("\n");
    }

    printf("Ma tran 2\n");
    for (int i = 0; i < hang_mt2; i++) {
        for (int j = 0; j < cot_mt2; j++) {
            printf("%3d", mt2[i][j]);
        }
        printf("\n");
    }

    printf("Ma tran tong\n");
    for (int i = 0; i < hang_mt1; i++) {
        for (int j = 0; j < cot_mt1; j++) {
            printf("%3d", sum[i][j]);
        }
        printf("\n");
    }

    printf("Ma tran nhan\n");
    for (int i = 0; i < hang_mt1; i++) {
        for (int j = 0; j < cot_mt2; j++) {
            printf("%3d", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
