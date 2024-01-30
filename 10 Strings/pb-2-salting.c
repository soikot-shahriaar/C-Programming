// Find a salted from of a password entered by user if the salt is "123" & added at the end.

#include <stdio.h>
#include <string.h>

void salting(char password[])
{
    char salt[] = "skt";
    char newPass[200];

    strcpy(newPass, password); // newPass = "xyz"
    strcat(newPass, salt);     // newPass = "xyz" + "123";
    printf("password after salting: ");
    puts(newPass);
}

int main()
{
    char password[100];
    printf("password entered by user: ");
    scanf("%s", password);
    salting(password);
    return 0;
}