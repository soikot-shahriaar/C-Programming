#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float CG;
};

void printInfo(struct student stdnt1)
{
    printf("Student Information:\n");
    printf("Name: %s\n", stdnt1.name);
    printf("Roll: %d\n", stdnt1.roll);
    printf("CG: %.2f\n", stdnt1.CG);
    // what if we change this value
    stdnt1.roll = 1660; // it won't be reflected to the main function
    // as structures are passed by VALUE
}

int main()
{
    struct student stdnt1 = {"Soikot Shahriar", 1498, 3.54};
    printInfo(stdnt1);
    return 0;
}