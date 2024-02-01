#include <stdio.h>
int main()
{
    char str[] = "Soikot Shahriar";
    str[1] = 'O';
    str[10] = 65;
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
/*
SOikot ShaAriar
*/