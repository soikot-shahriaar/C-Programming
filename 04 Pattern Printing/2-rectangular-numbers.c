/*
Enter number of Rows: 3
Enter number of Columns: 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of Rows: ");
    scanf("%d", &r);
    printf("Enter number of Columns: ");
    scanf("%d", &c);

    for (int i = 1; i <= r; i++) // no of rows
    {
        for (int j = 1; j <= c; j++) // no of columns
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}