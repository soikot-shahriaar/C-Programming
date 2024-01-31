// Create a function that inputs user's name and prints its length.

#include <stdio.h>

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
        count++;
    return count - 1; // important
}

int main()
{
    char name[100];
    printf("Enter a String: ");
    fgets(name, 100, stdin);
    printf("length is: %d", countLength(name));
    return 0;
}