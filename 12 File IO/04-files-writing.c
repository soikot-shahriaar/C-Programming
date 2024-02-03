#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "a");

    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'o');
    fprintf(fptr, "%c", 'i');
    fprintf(fptr, "%c", 'k');
    fprintf(fptr, "%c", 'o');
    fprintf(fptr, "%c", 't');

    fclose(fptr);
    return 0;
}