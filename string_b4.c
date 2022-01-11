#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Nhap xau: ");
    fflush(stdin);
    gets(str);

    // In hoa
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 97 && str[i] <= 123) {
            str[i] -= 32;
        }
    }

    printf("Xau sau khi in hoa la: %s\n", str);

    // In thuong
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 91) {
            str[i] += 32;
        }
    }

    printf("Xau sau khi in thuong la: %s\n", str);

    return 0;
}
