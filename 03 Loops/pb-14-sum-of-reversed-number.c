// Write a Program to print the sum of a given number and its reverse.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int number = num; // stores in number variable

    int rev = 0;
    while (num > 0)
    {
        rev = rev + (num % 10);
        rev = rev * 10;
        num = num / 10;
    }
    rev = rev / 10;
    printf("Reversed number is %d\n", rev);

    printf("sum of number and its reverse is %d\n", number + rev);
    return 0;
}