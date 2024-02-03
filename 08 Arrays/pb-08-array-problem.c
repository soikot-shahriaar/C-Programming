// Find the difference between the sum of elements at even indicies to the sum of elements at odd indicies.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sumEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sumEven += arr[i];
    }

    int sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            sumOdd += arr[i];
    }

    printf("Difference is %d\n", sumEven - sumOdd);

    return 0;
}