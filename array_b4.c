#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {7, 5, 8, 2, 3, 9, 1, 6, 8, 4};
    int temp; // bien trung gian

    // Bubble Sort
    /*
    for (int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10-1-i; j++) {
            if (a[j] < a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    */

    // Selection Sort
    for (int i = 0; i < 10-1; i++) {
        int max_id = i;
        for (int j = i+1; j < 10; j++) {
            if (a[j] > a[max_id]) {
                max_id = j;
            }
        }
        temp = a[max_id];
        a[max_id] = a[i];
        a[i] = temp;
    }

    printf("In mang da sap xep: ");
    for (int i = 0; i < 10; i++) {
        printf("%-3d", a[i]);
    }

    return 0;
}
