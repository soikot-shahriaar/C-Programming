#include <stdio.h>

int main()
{
    char str[] = "Soikot Shahriar";
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", *(str+i));
        printf("%c", *(str+i));
        i++;
    }
    return 0;
}
/*
SSooiikkoott  SShhaahhrriiaarr
*/