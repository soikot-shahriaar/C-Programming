/*
Enter the number of lines: 6
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1
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
      printf("  ");
    nsp--;

    for (int j = 1; j <= i; j++)
      printf("%d ", j);

    int a = i - 1;
    for (int k = 1; k <= i - 1; k++)
    {
      printf("%d ", a);
      a--;
    }
    printf("\n");
  }
  return 0;
}