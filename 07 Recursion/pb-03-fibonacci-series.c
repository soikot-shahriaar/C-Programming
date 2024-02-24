// recursion to calculate the nth element of the Fibonacci series.

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter nth : ");
    scanf("%d", &n);

    printf("The %dth element of the Fibonacci series is: %d", n, fibonacci(n));

    return 0;
}