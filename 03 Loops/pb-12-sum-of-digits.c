// Write a Program to print sum of digits of a given number.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int lastDigit = 0;
    int sum = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}