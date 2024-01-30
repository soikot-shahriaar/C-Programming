#include <stdio.h>

typedef struct ComputerScienceEngineeringStudent
{
    char name[100];
    int roll;
    float CG;
} CSE; // created alias for data types // nickname

int main()
{
    CSE std1 = {"Soikot Shahriar", 1498, 3.54};
    printf("Student Name is %s.\n", std1.name);
    return 0;
}