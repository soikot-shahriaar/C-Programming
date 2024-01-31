// Rotate the given array 'a' by k steps, where k is non-negative number.
// k can be greater than n as well where n is the size of array 'a'.

// // Steps:
// 1. k=k%n
// 2. reverse (arr,0,n-1)
// 3. reverse (arr,0,k-1)
// 4. reverse (arr,k,n-1)

#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotation steps (k): ");
    scanf("%d", &k);

    k = (k % n + n) % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}