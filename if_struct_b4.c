#include <stdio.h>
#include <stdlib.h>

int main()
{
    int so_dien;
    int tien_dien;

    do {
        printf("Nhap so dien su dung: ");
        scanf("%d", &so_dien);
    } while (so_dien < 0);


    if (so_dien <= 50) {
        tien_dien = 1678 * so_dien;
    } else if (so_dien > 50 && so_dien <= 100) {
        tien_dien = 1678 * 50 + 1734 * (so_dien - 50);
    } else if (so_dien > 100 && so_dien <= 200) {
        tien_dien = 1678 * 50 + 1734 * 50 + 2014 * (so_dien - 100);
    } else if (so_dien > 200 && so_dien <= 300) {
        tien_dien = 1678 * 50 + 1734 * 50 + 2014 * 100 + 2536 * (so_dien - 200);
    } else if (so_dien > 300 && so_dien <= 400) {
        tien_dien = 1678 * 50 + 1734 * 50 + 2014 * 100 + 2536 * 100 + 2834 * (so_dien - 300);
    } else {
        tien_dien = 1678 * 50 + 1734 * 50 + 2014 * 100 + 2536 * 100 + 2834 * 100 + 2927 * (so_dien - 400);
    }

    printf("So tien phai tra cho %d kWh la %d", so_dien, tien_dien);

    return 0;
}
