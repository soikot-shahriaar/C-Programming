// Two numbers are entered through the keyboard.
// Write a program to find the value of one number raised to the power of another.

#include <stdio.h>
// #include <math.h>
int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    // int power = pow(a, b);

    int power = 1;
    for (int i = 1; i <= b; i++)
        power = power * a;

    printf("%d to the power %d is %d", a, b, power);
    return 0;
}