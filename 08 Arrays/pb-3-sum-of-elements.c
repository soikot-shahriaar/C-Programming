// Calculate the sum of all the elements of in the given array.

#include <stdio.h>
int main()
{
    int arr[5];

    printf("Enter the numbers: \n");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of the numbers = %d", sum);
    return 0;
}
