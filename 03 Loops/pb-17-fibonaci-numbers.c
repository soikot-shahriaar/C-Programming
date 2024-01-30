// Print nth fibonacci number

// 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// f(0) = 0
// f(1) = 1
// f(n) = f(n-1) + f(n-2) for n >= 2

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int fibo = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
    }
    printf("The %dth fibonacci is %d\n", n, fibo);
    return 0;
}
