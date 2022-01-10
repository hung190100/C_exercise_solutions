#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 19; i > 0; i--) {
        if (i%2 == 1) {
            printf("%-3d", i);
        }
    }
    return 0;
}
