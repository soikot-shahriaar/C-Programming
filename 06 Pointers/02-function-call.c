#include <stdio.h>

void square(int n)
{
    n = n * n;
    printf("square is : %d\n", n);
}

void _square(int *n)
{
    *n = (*n) * (*n); // 4 * 4
    printf("square is : %d\n", *n);
}

int main()
{
    int number = 4;

    // call by value
    printf("number is : %d\n", number);
    square(number);

    // call by reference
    printf("number is : %d\n", number);
    _square(&number);
    return 0;
}