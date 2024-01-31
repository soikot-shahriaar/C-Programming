// The elements of an array are stored in contiguous memory locations
// The address of the array itself is the same as the address of its first element.

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);

    return 0;
}