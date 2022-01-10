#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {7, 5, 8, 2, 3, 9, 1, 6, 8, 4};
    int temp; // bien trung gian

    int *p;
    p = a;

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (*(p+i) > *(p+j)) {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    printf("In mang da sap xep: ");
    for (int i = 0; i < 10; i++) {
        printf("%-3d", *(p+i));
    }

    return 0;
}
