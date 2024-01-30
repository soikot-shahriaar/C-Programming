// Write a program to print the value of a variable i
// Using the "pointer to pointer" type of variable.

#include <stdio.h>
int main()
{
    int i = 396; // declare and initialize i
    int *ptr;
    int **ptr_ptr;

    ptr = &i;       // pointer to int
    ptr_ptr = &ptr; // pointer to pointer to int

    printf("Value of i is %d\n", **ptr_ptr);
    return 0;
}