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

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k < i; k++)
      printf("  ");

    for (int j = 1; j <= nst; j++)
      printf("* ");
    nst = nst - 2;

    printf("\n");
  }
  return 0;
}
