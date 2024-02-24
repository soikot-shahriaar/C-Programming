/*
Enter the number of lines: 3
* * * * * * * 
* * *   * * * 
* *       * * 
*           * 
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int nst = n; // stars
    int nsp = 1; // spaces

    for (int i = 1; i <= 2 * n + 1; i++) // first line
        printf("* ");
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++) // stars
            printf("* ");

        for (int k = 1; k <= nsp; k++) // spaces
            printf("  ");

        for (int j = 1; j <= nst; j++) // stars
            printf("* ");

        nst--;
        nsp += 2;

        printf("\n");
    }

    return 0;
}