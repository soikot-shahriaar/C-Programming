// Count the number of elements in given array greater than a given number x.

#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the elements of array:\n");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &arr[i]);

    int n;
    printf("Enter the number to be compared: ");
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > n)
            count++;
    }

    printf("Total %d elements are greater than %d.", count, n);

    return 0;
}