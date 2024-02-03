// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory for 5 integers
    int *ptr = (int *)calloc(5, sizeof(int));

    printf("Enter 5 numbers : \n");
    for (int i = 1; i <= 5; i++)
        scanf("%d", &ptr[i]);

    // Re-allocate memory for 8 integers
    // realloc() => re allocation
    int *newPtr = realloc(ptr, 8 * sizeof(int));

    printf("Enter extra 3 numbers: \n");
    for (int i = 6; i <= 8; i++)
        scanf("%d", &ptr[i]);

    // Print
    for (int i = 1; i <= 8; i++)
        printf("Number %d is %d\n", i, ptr[i]);

    // Free the allocated memory
    free(ptr);

    return 0;
}
