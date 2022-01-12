#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increase_sort (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void decrease_sort (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main()
{
    int arr[14] = {4, 5, 8, 2, 4, 3, 1, 6, 7, 9, 3, 5, 4, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau:  ");
    for (int i = 0; i < n; i++) {
        printf("%-3d", arr[i]);
    }

    increase_sort(arr, n);
    printf("\n\nMang tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%-3d", arr[i]);
    }

    decrease_sort(arr, n);
    printf("\n\nMang giam dan: ");
    for (int i = 0; i < n; i++) {
        printf("%-3d", arr[i]);
    }

    return 0;
}
