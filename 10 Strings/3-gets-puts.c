// gets(str) => inputs a multi word string => Dangerous & Outdated

// puts(str) => output a string

#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter Your Name: "); 
    gets(name);   // Shows Warning
    printf("Your Name is .");
    puts(name);
    return 0;
}
