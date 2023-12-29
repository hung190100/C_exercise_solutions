#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hang_mt1, cot_mt1, hang_mt2, cot_mt2;

    printf("Nhap so hang ma tran 1: ");
    scanf("%d", &hang_mt1);

    printf("Nhap so cot ma tran 1:  ");
    scanf("%d", &cot_mt1);

    printf("Nhap so hang ma tran 2: ");
    scanf("%d", &hang_mt2);

    printf("Nhap so cot ma tran 2:  ");
    scanf("%d", &cot_mt2);

    int mt1[hang_mt1][cot_mt1], mt2[hang_mt2][cot_mt2], sum[hang_mt1][cot_mt1], mul[hang_mt1][cot_mt2];

// Tao ra ma tran toan 0
    for (int i = 0; i < hang_mt1; i++) {
        for (int j = 0; j < cot_mt2; j++) {
            mul[i][j] = 0;
        }
    }

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

// Khai bao cac con tro
    int *p1, *p2, *p3, *p4;
    p1 = mt1;
    p2 = mt2;
    p3 = sum;
    p4 = mul;
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
// Cong hai ma tran
    if (hang_mt1 != hang_mt2 || cot_mt1 != cot_mt2) { // Yeu cau so hang va so cot cua 2 ma tran phai bang nhau
        printf("Khong cong duoc 2 ma tran\n");
    } else {
        for (int i = 0; i < hang_mt1; i++) {
            for (int j = 0; j < cot_mt1; j++) {
                *(p3 + i*cot_mt1 + j) = *(p1 + i*cot_mt1 + j) + *(p2 + i*cot_mt2 + j);
            }
        }
        printf("Ma tran tong\n");
            for (int i = 0; i < hang_mt1; i++) {
                for (int j = 0; j < cot_mt1; j++) {
                    printf("%3d", sum[i][j]);
                }
                printf("\n");
            }
    }

// Nhan hai ma tran
    if (cot_mt1 != hang_mt2) { // Yeu cau so cot cua ma tran 1 bang so hang cua ma tran 2
        printf("Khong nhan duoc 2 ma tran\n");
    } else {
        for (int i = 0; i < hang_mt1; i++) {
            for (int j = 0; j < cot_mt2; j++) {
                for (int k = 0; k < cot_mt1; k++) {
                    *(p4 + i*cot_mt1 + j) += (*(p1 + i*cot_mt1 + k)) * (*(p2 + k*cot_mt2 + j));
                    //mul[i][j] += mt1[i][k] * mt2[k][j];
                }
            }
        }
            printf("Ma tran nhan\n");
        for (int i = 0; i < hang_mt1; i++) {
            for (int j = 0; j < cot_mt2; j++) {
                printf("%3d", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}