#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 0;
    int i = 1;
    while (i < 100) {
        if (i%2 == 0 && i%3 == 0) {
            s += i;
        }
        /*
        if (i%6 == 0) {
            s += i;
        }
        */
        i++;
    }
    printf("Tong la %d", s);
    return 0;
}
