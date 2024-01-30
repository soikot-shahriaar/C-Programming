// Write a Program to print sum all the even digits of a given number.

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
        if (lastDigit % 2 == 0)
        {
            sum = sum + lastDigit;
        }
        n = n / 10;
    }
    printf("Sum of even digits: %d", sum);
    return 0;
}