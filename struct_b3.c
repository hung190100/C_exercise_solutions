#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    char name[30];
    int age;
    char phone_number[11];
    char citizen_identity_card[13];
    char address[40];
} Person;

typedef struct NhanVien {
    Person per;
    char company_name[40];
    char office[20]; // Chuc vu
}NhanVien;

int main()
{
    NhanVien nv = {"Nguyen Huu Hung", 22, "0123456789", "001200099999", "Ha Noi", "ABCD", "Director"};

    printf("Ho va ten: %s\n", nv.per.name);
    printf("Tuoi: %d\n", nv.per.age);
    printf("So dien thoai: %s\n", nv.per.phone_number);
    printf("So CCCD: %s\n", nv.per.citizen_identity_card);
    printf("Dia chi: %s\n", nv.per.address);
    printf("Ten cong ty: %s\n", nv.company_name);
    printf("Chuc vu: %s\n", nv.office);

    return 0;
}
