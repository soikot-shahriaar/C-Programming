// typedef is basically used for renaming something

#include <stdio.h>

typedef struct ComputerScienceEngineeringStudent
{
    char name[100];
    int roll;
    float CG;
} CSE; // created alias for data types // nickname

int main()
{
    // struct ComputerScienceEngineeringStudent std1 = {"Soikot Shahriar", 1498, 3.69};

    CSE std1 = {"Soikot Shahriar", 1498, 3.69};
    printf("Student 1 CGPA is %.2f\n", std1.CG);
    return 0;
}