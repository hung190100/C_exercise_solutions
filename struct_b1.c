#include <stdio.h>
#include <stdlib.h>

typedef struct Sinh_Vien {
    char name[30];
    int age;
    int ID; // Ma so sinh vien. VD: 20182563
}Sinh_Vien;

int main()
{
    Sinh_Vien sv;

    printf("Nhap ho va ten: ");
    fflush(stdin);
    gets(sv.name);

    printf("Nhap tuoi: ");
    scanf("%d", &sv.age);

    printf("Nhap MSSV: ");
    scanf("%d", &sv.ID);

    printf("\nHo va ten: %s", sv.name);
    printf("\nTuoi: %d", sv.age);
    printf("\nMSSV: %d\n", sv.ID);

    printf("\nKich thuoc cua cau truc la: %d\n", sizeof(Sinh_Vien));

    return 0;
}
