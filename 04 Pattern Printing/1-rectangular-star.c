/*
Enter number of Rows: 3
Enter number of Columns: 6
* * * * * *
* * * * * *
* * * * * *
*/

#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of Rows: ");
    scanf("%d", &r);
    printf("Enter number of Columns: ");
    scanf("%d", &c);

    for (int i = 1; i <= r; i++) // outer loop -> no of rows
    {
        for (int j = 1; j <= c; j++) // inner loop -> no of columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}