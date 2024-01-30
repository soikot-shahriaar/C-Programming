/*
Enter the number of lines: 4
      1 
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
*/

#include <stdio.h>
int main()
{
  int n; // number of lines
  printf("Enter the number of lines: ");
  scanf("%d", &n);

  int nst = 1;     // number of numbers
  int nsp = n - 1; // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      printf("  ");
    nsp = nsp - 1;

    for (int j = 1; j <= nst; j++)
      printf("%d ", j);
    nst = nst + 2;

    printf("\n");
  }
  return 0;
}
