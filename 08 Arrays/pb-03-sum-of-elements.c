// Calculate the sum of all the elements of in the array.

#include <stdio.h>
int main()
{
    int n; // array length
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Numbers: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum of the %d Numbers = %d", n, sum);
    return 0;
}
