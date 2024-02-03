// Write a recursive program to find the value of one number raised to the power of another.
// Power Function (Logarithmic)

#include <stdio.h>

int powerLog(int a, int b)
{
    if (b == 0)
        return 1;

    int x = powerLog(a, b / 2);
    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    int p = powerLog(a, b);
    printf("%d to the power %d is %d", a, b, p);

    return 0;
}
