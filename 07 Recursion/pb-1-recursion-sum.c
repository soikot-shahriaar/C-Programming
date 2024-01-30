// Write a recursive function to print sum of first n numbers

#include <stdio.h>

int sum(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of 1 to %d = %d", n, sum(n));
    return 0;
}