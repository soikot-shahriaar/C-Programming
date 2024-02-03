// Write a function to compute the greatest common divisor of teo given numbers

// The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly. It is also called the highest common factor (HCF).

#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}

int main()
{
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);
    printf("The GCD/HCF of %d and %d is: %d\n", a, b, result);
    return 0;
}