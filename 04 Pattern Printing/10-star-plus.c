/*
Enter number of Rows: 5
    *
    *
* * * * *
    *
    *
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = n / 2 + 1; // 3 -> 2 // 5 -> 3
            if (i == a || j == a)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}