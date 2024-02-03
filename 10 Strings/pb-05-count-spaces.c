// Create a function to count the spaces ' ' in a string

#include <stdio.h>

int countSpaces(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

int main()
{
    char str[] = "i love my country bangladesh ";
    printf("total spaces: %d", countSpaces(str));
    return 0;
}