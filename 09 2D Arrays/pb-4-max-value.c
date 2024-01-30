// Find the maximum element in a 2D array.

#include <stdio.h>
#include <limits.h>

int main()
{
    int r, c;
    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    printf("Enter the elements of array:\n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("Maximum Value is: %d\n", max);
    return 0;
}