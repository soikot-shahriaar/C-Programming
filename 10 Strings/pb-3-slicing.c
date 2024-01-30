// Create a function named slice, which takes a string and returns a sliced string from index n to m

#include <stdio.h>

void slice(char str[], int n, int m) // n and m are valid values
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

int main()
{
    char str[] = "Bangladesh";
    slice(str, 1, 6);
    return 0;
}