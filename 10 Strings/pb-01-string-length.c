// Write a program to input user's name and prints its length.

#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter a String: ");
    fgets(name, 100, stdin);

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
        count++;

    printf("Length is: %d", count - 1);

    return 0;
}