#include <stdio.h>

int main()
{
    int a;
    if (3 + 2 % 5)
        printf("this works\n");
    if (a = 10)
        printf("even this works\n");
    if (-5)
        printf("surprisingly even this works\n");
}
/*
this works
even this works
surprisingly even this works
*/