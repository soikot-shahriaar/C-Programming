// Program to store and print the data of 3 students

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float CG;
};

int main()
{
    struct student stdnt1 = {"Rabindra Nath", 141265, 3.38};
    printf("student 1 name: %s\n", stdnt1.name);
    printf("student 1 roll no: %d\n", stdnt1.roll);
    printf("student 1 CG: %.2f\n", stdnt1.CG);

    struct student stdnt2 = {"Nazrul Islam", 141266, 3.32};
    printf("student 2 name: %s\n", stdnt2.name);
    printf("student 2 roll no: %d\n", stdnt2.roll);
    printf("student 2 CG: %.2f\n", stdnt2.CG);

    struct student stdnt3 = {"Jasim Uddin", 141267, 3.49};
    printf("student 3 name: %s\n", stdnt3.name);
    printf("student 3 roll no: %d\n", stdnt3.roll);
    printf("student 3 CG: %.2f\n", stdnt3.CG);

    return 0;
}