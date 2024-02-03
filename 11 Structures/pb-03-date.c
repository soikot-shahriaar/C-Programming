// Create a structure ‘date’ that contains three members namely date, month and year.
// Create 2 structure variables with different dates and now compare the two. If the dates are equal then display message as "Equal" otherwise "Unequal".

#include <stdio.h>
#include <stdbool.h>

typedef struct dateStructure
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date a, b;

    a.day = 11;
    a.month = 11;
    a.year = 2001;

    b.day = 11;
    b.month = 11;
    b.year = 2011;

    // if (a == b) // not possible
    //     printf("The dates are same!\n");
    // else
    //     printf("The dates are different!\n");

    bool flag = true;
    if (a.day != b.day)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == true)
        printf("The dates are same!\n");
    else
        printf("The dates are different!\n");
    return 0;
}