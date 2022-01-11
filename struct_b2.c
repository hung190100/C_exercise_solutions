#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    char name[30];
    int age;
    char phone_number[11];
    char citizen_identity_card[13];
    char address[40];
} Person;

int main()
{
    Person per = {"Nguyen Huu Hung", 22, "0123456789", "001200099999", "Ha Noi"};

    printf("Ho va ten: %s\n", per.name);
    printf("Tuoi: %d\n", per.age);
    printf("So dien thoai: %s\n", per.phone_number);
    printf("So CCCD: %s\n", per.citizen_identity_card);
    printf("Dia chi: %s\n", per.address);

    return 0;
}
