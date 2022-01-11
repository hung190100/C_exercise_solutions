#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Happiness can be found, even in the darkest of times, if one only remembers to turn on the light.";
    char value = 'i';

    int length = strlen(str);

    printf("Vi tri cua ki tu i trong xau la: ");
    for (int i = 0; i < length; i++) {
        if (str[i] == value) {
            printf("%d ", i+1);
        }
    }

    return 0;
}
