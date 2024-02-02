/*
Enter the number of lines: 5
        A
      A B A
    A B C A B
  A B C D A B C
A B C D E A B C D
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int nsp = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int q = 1; q <= nsp; q++) // for spaces
        {
            printf("  ");
        }
        nsp--;

        for (int j = 1; j <= i; j++)
        {
            char ch = (char)(j + 64);
            printf("%c ", ch);
        }

        int a = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {
            char x = (char)(k + 64);
            printf("%c ", x);
            a--;
        }
        printf("\n");
    }
    return 0;
}