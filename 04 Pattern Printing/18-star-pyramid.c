/*
Enter the number of lines: 4
      *
    * * *
  * * * * *
* * * * * * *
 */

#include <stdio.h>
int main()
{
  int n; // number of lines
  printf("Enter the number of lines: ");
  scanf("%d", &n);

  int nst = 1;     // number of stars
  int nsp = n - 1; // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      printf("  ");
    nsp = nsp - 1;

    for (int j = 1; j <= nst; j++)
      printf("* ");
    nst = nst + 2; // stars increasing by 2

    printf("\n");
  }
  return 0;
}
