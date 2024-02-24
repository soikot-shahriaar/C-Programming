// inserting a new character in a string at a given position

#include <stdio.h>
int main()
{
    char str[20] = "Soikot";
    printf("%s\n", str);

    // Insert 'O' at the 2nd index
    str[2] = 'O';

    // Shift the characters to the right starting from the end
    for (int i = 6; i >= 2; i--)
        str[i + 1] = str[i];

    printf("%s", str);

    return 0;
}