// Arrays as Function Argument
// void printNumbers (int arr[], int n)
// or
// void printNumbers (int *arr, int n)

#include <stdio.h>

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66};
    printNumbers(arr, 6);
    return 0;
}