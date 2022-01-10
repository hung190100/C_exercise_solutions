#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int j = 1;
    while (i <= 10) {
        while (j <= 9) {
            printf("%d x %d = %d\t", j, i, i*j);
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }
    return 0;
}
