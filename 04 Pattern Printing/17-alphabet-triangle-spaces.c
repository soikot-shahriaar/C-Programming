/*
Enter number of Lines: 4
      A
    A B
  A B C
A B C D
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        int a = 1;
        for (int k = 1; k <= i; k++)
        {
            int x = a + 64;
            char ch = (char)x;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}