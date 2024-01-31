/* A character array terminated by a '\0' (null character)
null character denotes string termination */

#include <stdio.h>

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) // important
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // char firstName[] = {'S', 'o', 'i', 'k', 'o', 't','\0'};
    // char lastName[] = {'S', 'h', 'a', 'h', 'r', 'i', 'a', 'r','\0'};

    char firstName[] = "Soikot";
    char lastName[] = "Shahriar";

    printString(firstName);
    printString(lastName);
    return 0;
}