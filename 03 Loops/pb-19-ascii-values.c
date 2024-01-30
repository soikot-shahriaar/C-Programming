// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include <stdio.h>

int main()
{
    for (int i = 65; i <= 90; i++)
    {
        char ch = (char)i; //typecasting
        printf("%c -> ", ch);
        printf("%d\n", i);
    }
    return 0;
}