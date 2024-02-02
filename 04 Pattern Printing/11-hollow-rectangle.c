/*
Enter number of Rows: 4
Enter number of Columns: 6
* * * * * *
*         *
*         *
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

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c) // condition
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}