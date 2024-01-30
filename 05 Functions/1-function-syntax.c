// Library Function => printf(), scanf()
// User Defined Function => printHello(), calcSquare()

#include <stdio.h>
// function declaration/prototype
void printHello();

int main()
{
    printf("I'm Soikot Shahriar.\n");
    printHello(); // function call
    return 0;
}

// function definition
void printHello()
{
    printf("Hello World!\n");
    printf("I'm From Bangladesh\n");
}