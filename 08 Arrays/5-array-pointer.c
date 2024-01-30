// Array is a Pointer
// First index of array is a Pointer
// int *ptr = &arr[0];
// int *ptr = arr;

// Traverse an Array
#include <stdio.h>
int main()
{
    int numbers[5];

    // input
    int *ptr = &numbers[0];
    printf("enter number:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d index number: ", i);
        // scanf("%d", (ptr + i));
        scanf("%d", &numbers[i]);
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        // printf("index no %d output = %d\n", i, *(ptr + i));
        printf("index no %d output = %d\n", i, numbers[i]);
    }
    return 0;
}