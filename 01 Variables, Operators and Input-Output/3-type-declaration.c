#include <stdio.h>
int main()
{
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 2;
    printf("New age is : %d\n", newAge);
    int tk = 88, dollar = 1;
    printf("\nRupee is %d and Dollar is %d", tk, dollar);
    return 0;
}
/*
// valid declaration
int age1, age2, age3;
age1 = age2 = age3 = 22;

// invalid declaration
int a1 = a2 = a3 = 22;
*/