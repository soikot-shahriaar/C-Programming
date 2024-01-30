// Write a Program to print reverse of a given number.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev = 0;
    while (num > 0)
    {
        rev = rev + (num % 10);
        rev = rev * 10;
        num = num / 10;
    }
    rev = rev / 10;
    printf("Reversed number is %d", rev);
    return 0;
}