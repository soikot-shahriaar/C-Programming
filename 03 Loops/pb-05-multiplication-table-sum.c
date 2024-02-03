// Calculate the sum of the numbers occurring in the multiplication table of 7 (Consider 7x1 to 7x10).

#include <stdio.h>
int main()
{
    int n = 7;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int product = n * i;
        sum += product;
        printf("%d X %d = %d\n", n, i, product);
    }

    printf("The sum of the numbers in the multiplication table of 7 is: %d\n", sum);
    return 0;
}
