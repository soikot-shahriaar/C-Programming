/*
Enter number of Rows: 3
* * * 
* * 
*
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}