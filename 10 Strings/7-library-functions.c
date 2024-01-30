/*
3. strcat(firstStr, secStr) => concatenates first string with second string

4. strcmp(firstStr, secStr) => Compares 2 strings & returns a value
    0 -> string equal
    positive -> first > second (ASCII)
    negative -> first < second (ASCII)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Library Functions 3
    char firstStr[100] = "Hello "; // firstStr should be large enough
    char secStr[] = "Bangladesh";
    strcat(firstStr, secStr);
    puts(firstStr);

    // Library Functions 4
    char str1[] = "HHHb";
    char str2[] = "HHHa";
    printf("%d\n", strcmp(str1, str2));

    return 0;
}