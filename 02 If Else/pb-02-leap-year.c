// Find whether a year entered by the user is a leap year or not. Take the year as input from the user.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter year: ");
    scanf("%d", &a);

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        printf("%d is a leap year.\n", a);
    else
        printf("%d is not a leap year.\n", a);
    return 0;
}
