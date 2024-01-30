#include <stdio.h>

int main()
{
    int a = 25;
    int *x = &a;  // *int -> address of int
    int **y = &x; // **int -> address of *int

    // %d is to print value and %p is to print address
    printf("a = %d\n", a);
    printf("x = %d\n", *x);
    printf("y = %d\n", **y);
    return 0;
}