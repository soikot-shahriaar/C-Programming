// String using Pointers

/*
char *str = "Hello World";
Store string in memory & the assigned address is stored in the char pointer 'str'
*/

/*
char *str = "Hello World";   //can be reinitialized
char str[] = "Hello World";  //cannot be reinitialized
*/

#include <stdio.h>
int main()
{
    char *change = "Hello World";
    puts(change);
    change = "Hello Bangladesh";
    puts(change);

    // char change[] = "Hello World";
    // puts(change);
    // change="Hello Bangladesh";
    // puts(change);  // Error

    return 0;
}