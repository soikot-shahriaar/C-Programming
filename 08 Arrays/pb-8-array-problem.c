// Find the difference between the sum of elements at even indicies to the sum of elements at odd indicies.

#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the elements of array:\n");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &arr[i]);

    int sumEven = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 == 0)
            sumEven = sumEven + arr[i];
    }

    int sumOdd = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 != 0)
            sumOdd = sumOdd + arr[i];
    }

    printf("Difference is %d\n", sumEven );

    return 0;
}