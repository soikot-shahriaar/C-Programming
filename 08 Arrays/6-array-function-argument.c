// Arrays as Function Argument
// void printNumbers (int arr[], int n)
// or
// void printNumbers (int *arr, int n)

#include <stdio.h>

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}
