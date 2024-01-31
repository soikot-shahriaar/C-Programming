// Find the second largest of all the elements in the array.

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {33, -12, 45, -122, 98, 98};
    int max = INT_MIN;
    int sec_max = INT_MIN;

    // for (int i = 0; i < 6; i++) // max
    // {
    //     if (max < arr[i])
    //         max = arr[i];
    // }

    // for (int i = 0; i < 6; i++) // second max
    // {
    //     if (sec_max < arr[i] && arr[i] != max)
    //         sec_max = arr[i];
    // }

    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            sec_max = max; // sec_max is now previous max
            max = arr[i];  // max is now a new max
        }
        else if (sec_max < arr[i] && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }

    printf("Largest Value is %d\n", max);
    printf("Second Largest Value is %d\n", sec_max);
    return 0;
}