// Write a recursive program to find the value of one number raised to the power of another.

#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    int p = power(a, b);
    printf("%d to the power %d is %d", a, b, p);

    return 0;
}
