#include <stdio.h>
#include <stdlib.h>

void hoan_doi (int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = 3, b = 4;
    printf("Truoc khi hoan doi: a = %d, b = %d\n", a, b);
    hoan_doi(&a, &b);
    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}

