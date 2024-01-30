// Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));

    ptr[1] = 1;
    ptr[2] = 3;
    ptr[3] = 5;
    ptr[4] = 7;
    ptr[5] = 9;

    for (int i = 1; i <= 5; i++)
        printf("%d\n", ptr[i]);

    ptr = realloc(ptr, 6);
    ptr[1] = 2;
    ptr[2] = 4;
    ptr[3] = 6;
    ptr[4] = 8;
    ptr[5] = 10;
    ptr[6] = 12;

    for (int i = 1; i <= 6; i++)
        printf("\n%d", ptr[i]);

    free(ptr);

    return 0;
}
