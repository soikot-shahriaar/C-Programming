/*
Enter the number of lines: 3
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int nst = n; // stars
    int nsp = 1; // spaces

    int a = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        int x = (char)a + 64;
        printf("%c ", x);
        a++;
    }

    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++) // stars
        {
            int x = (char)a + 64;
            printf("%c ", x);
            a++;
        }

        for (int k = 1; k <= nsp; k++) // spaces
        {
            printf("  ");
            a++;
        }

        for (int j = 1; j <= nst; j++) // stars
        {
            int x = (char)a + 64;
            printf("%c ", x);
            a++;
        }
        nst--;
        nsp += 2;

        printf("\n");
    }
    return 0;
}
