// Write a program to Print the transpose of the matrix entered by the user.
// Leetcode - 867

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

    printf("Original Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    int transpose[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            transpose[i][j] = matrix[j][i];
    }

    printf("Transpose of the Matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    
    return 0;
}
