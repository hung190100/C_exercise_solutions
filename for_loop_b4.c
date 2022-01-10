#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 0;
    for (int i = 1; i < 100; i++) {
        if (i%2 == 0 && i%3 == 0) {
            s += i;
        }
        /*
        if (i%6 == 0) {
            s += i;
        }
        */
    }
    printf("Tong la %d", s);
    return 0;
}
