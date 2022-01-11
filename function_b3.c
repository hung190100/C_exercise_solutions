#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void upper(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] >= 97 && str[i] <= 123) {
            str[i] -= 32;
        }
    }
}

void lower (char *str) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] >= 65 && str[i] <= 91) {
            str[i] += 32;
        }
    }
}

int main()
{
    char str[50];

    printf("Nhap chuoi: ");
    gets(str);

    upper(str);
    printf("Chuoi in hoa: ");
    puts(str);

    lower(str);
    printf("Chuoi in thuong: ");
    puts(str);

    return 0;
}
