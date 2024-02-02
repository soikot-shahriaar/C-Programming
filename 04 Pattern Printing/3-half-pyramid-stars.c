// /*
// Enter number of Rows: 5
// *
// * *
// * * *
// * * * *
// * * * * *
// */

#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of Rows: ");
    scanf("%d", &r);
    // printf("Enter number of Columns: ");
    // scanf("%d", &c);

    for (int i = 1; i <= r; i++) // no of rows
    {
        for (int j = 1; j <= i; j++) // no of columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}