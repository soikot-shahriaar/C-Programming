// Check if a given character is present in a string or not

#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return;
        }
    }
    printf("character is NOT present");
}

int main()
{
    // char str[100] = "I Love Bangladesh";
    // char ch = 'u';
    // checkChar(str, ch);
    checkChar("I Love Bangladesh", 'A');
    return 0;
}