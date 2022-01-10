#include <stdio.h>
#include <stdlib.h>

// Kiem tra nam nhuan
int checkYear(int year) {
    if (year % 400 == 0) {
        return 1; // nam nhuan
    }
    if (year % 4 == 0 && year % 100 != 0) {
        return 1; //nam nhuan
    };
    return 0; // khong phai nam nhuan
}

int main()
{
    int month, year;
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (month == 2 && checkYear(year)) {
        printf("Thang %d nam %d co 29 ngay", month, year);
    } else {
        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d nam %d co 31 ngay", month, year);
            break;
        case 2:
            printf("Thang %d nam %d co 28 ngay", month, year);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay", month, year);
            break;
        }
    }

    return 0;
}
