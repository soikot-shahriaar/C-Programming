/*
Enter number of Rows: 3
* * * 
* * 
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
        for (int j = 1; j <= n + 1 - i; j++) // i+j = n+1 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}