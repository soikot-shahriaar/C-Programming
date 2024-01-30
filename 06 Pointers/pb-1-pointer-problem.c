// Write a program to print the address of a variable.
// Use this address to get the value of this variable.

#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("The address of variable a is %u\n", ptr);
    printf("The value of variable a is %d\n", *ptr);
    return 0;
}