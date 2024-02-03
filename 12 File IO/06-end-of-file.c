/*
EOF (End Of File)
fgetc returns EOF to show that the file has ended
*/

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("TestTest.txt", "r");

    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}