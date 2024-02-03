/*
Read & Write a char
    fgetc(fptr)
    fputc('A', fptr)
*/

#include <stdio.h>
int main()
{
    FILE *fptr;

    // fptr = fopen("Test.txt", "r");
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    fptr = fopen("Test.txt", "w");
    fputc('S', fptr);
    fputc('H', fptr);
    fputc('H', fptr);

    fclose(fptr);
    return 0;
}