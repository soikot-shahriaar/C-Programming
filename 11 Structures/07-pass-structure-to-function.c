#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float CG;
};

void printInfo(struct student std1)
{
    printf("Student Information:\n");
    printf("Name: %s\n", std1.name);
    printf("Roll: %d\n", std1.roll);
    printf("CG: %.2f\n", std1.CG);
    // what if we change this value
    std1.roll = 1660; // it won't be reflected to the main function
    // as structures are passed by VALUE
}

int main()
{
    struct student stdnt1 = {"Soikot Shahriar", 1498, 3.69};
    printInfo(stdnt1);
    return 0;
}