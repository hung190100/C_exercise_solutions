#include <stdio.h>
#include <stdlib.h>

int check_SNT (int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i = 2;
    while (i < 50) {
        if (check_SNT(i)) {
            printf("%-3d", i);
        }
        i++;
    }
    return 0;
}
