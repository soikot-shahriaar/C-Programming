// Given a matrix having 0-1 only, find the row with the maximum number of 1’s.

#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    printf("Enter the elements of the binary matrix (0 or 1):\n");
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    }

    int maxOnesCount = 0;
    int maxOnesRow = 0;

    for (int i = 0; i < r; i++)
    {
        int onesCount = 0;
        for (int j = 0; j < c; j++)
        {
            onesCount += matrix[i][j];
        }
        printf("Number of 1's in row %d is %d\n", i, onesCount);
        if (onesCount > maxOnesCount)
        {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }
    printf("Row with the maximum number of 1's is %d\n", maxOnesRow + 1); // Adding 1 to convert to 1-based index
    printf("Maximum number of 1's is %d\n", maxOnesCount);

    return 0;
}
