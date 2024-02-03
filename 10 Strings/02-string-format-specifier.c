// String Format Specifier => "%s"

#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter Your Name: "); 
    scanf("%s", name);  // '\0' and & not needed
    printf("Your Name is %s.", name); // "Soikot Shahriar" won't print
    return 0;
}