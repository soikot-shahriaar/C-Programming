// Write a program to print the row number having the maximum sum in a given matrix.

#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix:\n");
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    }

    int maxSum = 0;
    int maxRow = 0;

    for (int i = 0; i < r; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
        {
            rowSum += matrix[i][j];
        }

        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    printf("Maximum sum is %d\n", maxSum);
    printf("Row number having the maximum sum is %d\n", maxRow + 1); // Adding 1 to convert to 1-based index

    return 0;
}
