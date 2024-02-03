// Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

#include <stdio.h>
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

    int l1, r1, l2, r2;
    printf("Enter the coordinates (l1, r1) and (l2, r2) for the rectangle:\n");
    printf("l1: ");
    scanf("%d", &l1);
    printf("r1: ");
    scanf("%d", &r1);
    printf("l2: ");
    scanf("%d", &l2);
    printf("r2: ");
    scanf("%d", &r2);

    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
            sum += arr[i][j];
    }
    printf("Sum of the rectangle is %d\n", sum);

    return 0;
}
