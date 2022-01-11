#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Happiness can be found, even in the darkest of times, if one only remembers to turn on the light.";

    int length = strlen(str);
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("So tu trong xau la: %d", count + 1);

    return 0;
}
