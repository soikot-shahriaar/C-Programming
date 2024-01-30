// Structure is a collection of values of different data types

#include <stdio.h>
#include <string.h>

struct student // User defined data type
{
    char name[100];
    int roll;
    float CG;
};

int main()
{
    // Method 1
    struct student std01;
    // std01.name = "Soikot Shahriar"; // not applicable
    strcpy(std01.name, "Kamal Hasan");
    std01.roll = 1001;
    std01.CG = 3.51;

    printf("student 1 name: %s\n", std01.name);
    printf("student 1 roll no: %d\n", std01.roll);
    printf("student 1 CG: %.2f\n", std01.CG);

    // Method 2
    struct student std02 = {"Zawad Karim", 1002, 3.54};

    printf("student 2 name: %s\n", std02.name);
    printf("student 2 roll no: %d\n", std02.roll);
    printf("student 2 CG: %.2f\n", std02.CG);

    return 0;
}