// Given an array containing elements from 1 to 100 expect one element in this range is missing. Find the missing element.

#include <stdio.h>

int findElement(int arr[], int n)
{
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++)
        actualSum += arr[i];

    return expectedSum - actualSum;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // n is the size of the array + 1

    int missingElement = findElement(arr, n);

    printf("The missing element is %d\n", missingElement);

    return 0;
}