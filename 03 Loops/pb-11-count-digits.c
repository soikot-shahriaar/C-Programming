// Write a Program to count digits of a given number.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}