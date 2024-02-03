// fgets( str, n, file)
// fgets( str, n, stdin)

#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter Your Name: ");
    fgets(name, 100, stdin);
    printf("Your Name is ");
    puts(name);
    return 0;
}