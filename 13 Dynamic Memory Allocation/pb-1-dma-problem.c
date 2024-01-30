// Create an array of size 5 (using calloc) and enter its values from the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));

    printf("Enter 5 numbers : ");
    for (int i = 1; i <= 5; i++)
        scanf("%d", &ptr[i]);

    for (int i = 1; i <= 5; i++)
        printf("Number %d is %d\n", i, ptr[i]);

    free(ptr);

    return 0;
}
