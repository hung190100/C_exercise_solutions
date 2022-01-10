#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 19;
    while (i > 0) {
        if (i%2 == 1) {
            printf("%-3d", i);
        }
        i--;
    }
    return 0;
}
