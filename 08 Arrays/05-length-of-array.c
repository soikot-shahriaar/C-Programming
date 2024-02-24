#include <stdio.h>

int main()
{
    int arr[] = {33, -12, 45, -23, 131, 122, 90, 98, 100};

    // sizeof(arr) returns the total number of bytes occupied by the entire array arr
    // sizeof(arr[0]) returns the size (in bytes) of a single element in the array
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Length / Size of the array: %d\n", length);

    return 0;
}