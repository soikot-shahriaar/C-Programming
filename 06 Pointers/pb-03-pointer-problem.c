// Write a program to change the value of a variable to ten times its current value.
// Write a function and pass the value by reference.

#include <stdio.h>

void multiTen(int *num)
{
    *num = (*num) * 10;
}

int main()
{
    int num = 10;
    printf("Original Value: %d\n", num); // 10

    multiTen(&num); 

    printf("Value after Multiplication: %d\n", num); // 100

    return 0;
}