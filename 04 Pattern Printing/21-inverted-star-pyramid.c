/*
Enter the number of lines: 5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <stdio.h>

int main()
{
  int n; // number of lines
  printf("Enter the number of lines: ");
  scanf("%d", &n);

  int nst = 2 * n - 1; // number of stars
  int nsp = 0;         // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      printf("  ");
    nst = nst - 2;

    for (int j = 1; j <= nst; j++)
      printf("* ");
    nsp++;

    printf("\n");
  }
  return 0;
}
