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
    struct student CSE[50];
    strcpy(CSE[0].name, "Soikot Shahriar");
    CSE[0].roll = 1498;
    CSE[0].CG = 3.54;

    printf("CSE student 1 name: %s\n", CSE[0].name);
    printf("CSE student 1 roll no: %d\n", CSE[0].roll);
    printf("CSE student 1 CG: %.2f\n", CSE[0].CG);

    return 0;
}