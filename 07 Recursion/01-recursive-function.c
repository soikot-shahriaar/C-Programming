// when a function call itself, its called recursive function

// printing "Soikot Shahriar" 5 times using recursion

#include <stdio.h>

// recursive function
void printName(int count)
{
    if (count == 0)
        return;

    printf("Soikot Shahriar\n");
    printName(count - 1);
}

int main()
{
    int n = 3;
    printName(n);

    return 0;
}