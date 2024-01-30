/*
Enter number of Rows: 4
1 2 3 4
1 2 3
1 2
1
*/

#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of Rows: ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++) // no of rows
    {
        for (int j = 1; j <= r + 1 - i; j++) // no of columns
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}