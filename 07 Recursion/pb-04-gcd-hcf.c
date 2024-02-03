// the greatest common divisor (GCD) of two numbers using recursion
// Euclidean algorithm for GCD

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);
    printf("The GCD of %d and %d is: %d\n", a, b, result);

    return 0;
}
