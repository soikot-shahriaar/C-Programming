// Print the factorials of first 'n' numbers

// 5! = 5 × 4 × 3 × 2 × 1 = 120
// 4! = 4 × 3 × 2 × 1 = 24
// 3! = 3 × 2 × 1 = 6
// 2! = 2 × 1 = 2
// 1! = 1 × 1 = 1
// 0! = 1
// n! = n × (n - 1) × (n - 2) × ... × 3 × 2 × 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("Factorial of %d is %d\n", i, fact);
    }
    return 0;
}
