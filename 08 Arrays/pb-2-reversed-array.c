// Given an array of numbers, print the numbers in reversed order

#include <stdio.h>
int main()
{
    int arr[5];

    printf("Enter the numbers: \n");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Numbers in reversed order is ");
    for (int i = 5; i >= 1; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}