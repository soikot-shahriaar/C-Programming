// recursion to calculate the nth element of the Fibonacci series.

#include <stdio.h>

int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    printf("Enter nth : ");
    scanf("%d", &n);

    printf("The %dth element of the Fibonacci series is: %d", n, fibo(n));

    return 0;
}
