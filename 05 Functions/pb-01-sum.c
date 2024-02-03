// Calculate sum of two integer numbers using function

#include <stdio.h>

// not valid
// int add(int x, int y)
//     return x + y;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("Sum of two integer is %d\n", sum);

    return 0;
}