// recursive function to print factorial of n

#include <stdio.h>

// recursive function
int factorial(int n)
{
    if (n == 0 )
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d", n, factorial(n));
    return 0;
}
