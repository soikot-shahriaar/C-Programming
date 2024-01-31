// Given an array of numbers, print the numbers in reversed order

#include <stdio.h>
int main()
{
    int arr[5];

    printf("Enter the numbers: \n");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &arr[i]);

    printf("Numbers in reversed order is ");
    for (int i = 4; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}