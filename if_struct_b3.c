#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double final_point;
    printf("Nhap diem tong: ");
    scanf("%lf", &final_point);

    char word_point[2];
    float diem_thang_4;

    if (final_point > 10 || final_point < 0) {
        printf("Diem khong hop le");
    } else if (final_point >= 9.45 && final_point < 10) {
        word_point[0] = 'A';
        word_point[1] = '+';
        diem_thang_4 = 4.0;
    } else if (final_point >= 8.45 && final_point < 9.45) {
        word_point[0] = 'A';
        word_point[1] = ' ';
        diem_thang_4 = 4.0;
    } else if (final_point >= 7.95 && final_point < 8.45) {
        word_point[0] = 'B';
        word_point[1] = '+';
        diem_thang_4 = 3.5;
    } else if (final_point >= 6.95 && final_point < 7.95) {
        word_point[0] = 'B';
        word_point[1] = ' ';
        diem_thang_4 = 3.0;
    } else if (final_point >= 6.45 && final_point < 6.95) {
        word_point[0] = 'C';
        word_point[1] = '+';
        diem_thang_4 = 2.5;
    } else if (final_point >= 5.45 && final_point < 6.45) {
        word_point[0] = 'C';
        word_point[1] = ' ';
        diem_thang_4 = 2.0;
    } else if (final_point >= 4.95 && final_point < 5.45) {
        word_point[0] = 'D';
        word_point[1] = '+';
        diem_thang_4 = 1.5;
    } else if (final_point >= 3.95 && final_point < 4.95) {
        word_point[0] = 'D';
        word_point[1] = ' ';
        diem_thang_4 = 1.0;
    } else {
        word_point[0] = 'F';
        word_point[1] = ' ';
        diem_thang_4 = 0.0;
    }

    printf("Diem chu cua %g la: %c%c\n", final_point, word_point[0], word_point[1]);
    printf("Diem quy doi cua %g ra thang diem 4 la: %g", final_point, diem_thang_4);

    return 0;
}
