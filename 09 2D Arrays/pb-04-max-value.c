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

    printf("Enter the elements of the array:\n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }

    int max = INT_MIN;
    int max_i, max_j;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("Maximum Value is %d\n", max);
    printf("Index of Maximum Value is [%d][%d]\n", max_i, max_j);
    return 0;
}