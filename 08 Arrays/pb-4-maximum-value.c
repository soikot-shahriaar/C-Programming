// Find the maximum value out of all the elements in the array.

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {33, -12, 45, -122, 90, 98};

    // int max = arr[0];
    int max = INT_MIN;
    for (int i = 0; i <= 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("Max Value is %d", max);
    return 0;
}