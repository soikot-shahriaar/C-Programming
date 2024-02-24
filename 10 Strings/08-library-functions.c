/*
// Standard Library Functions <string.h>

1. strlen(str) => count number of characters excluding '\0'

2. strcpy(newStr, oldStr) => copies value of old string to new string
*/

#include <stdio.h>
#include <string.h>
int main()
{
    // Library Functions 1
    char name[] = "Soikot Shahriar";
    printf("length of name: %d\n", strlen(name));

    // Library Functions 2
    char oldVal[] = "oldValue";
    char newVal[] = "newValue";
    puts(newVal); // newValue
    strcpy(newVal, oldVal);
    puts(newVal); // oldValue

    return 0;
}