// Count the number of elements in given array greater than a given number x.

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

    int x;
    printf("Enter the number to be compared: ");
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            count++;
    }

    printf("Total %d elements are greater than %d.", count, n);

    return 0;
}