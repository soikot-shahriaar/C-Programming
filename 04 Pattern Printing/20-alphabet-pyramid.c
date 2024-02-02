/*
Enter the number of lines: 5
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
*/

#include <stdio.h>
int main()
{
  int n; // number of lines
  printf("Enter the number of lines: ");
  scanf("%d", &n);

  int nst = 1;     // number of alphabets
  int nsp = n - 1; // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      printf("  ");
    nsp = nsp - 1;

    int a = 1;
    for (int j = 1; j <= nst; j++)
    {
      int x = (char)a + 64;
      printf("%c ", x);
      a++;
    }
    nst = nst + 2;

    printf("\n");
  }
  return 0;
}
