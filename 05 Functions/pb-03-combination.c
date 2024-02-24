// Calculate the binomial coefficient using a factorial function
// the formula nCr = n! / (r! * (n - r)!)

#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
        fact = fact * i;
    return fact;
}

int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    printf("nCr = %d", combination(n, r));
    return 0;
}