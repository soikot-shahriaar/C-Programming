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
    struct student stdnt1 = {"Soikot Shahriar", 1498, 3.69};

    struct student *ptr = &stdnt1;

    printf("student name: %s\n", (*ptr).name);
    printf("\n");

    // arrow operator ***
    // (*ptr).code ==> ptr->code
    
    printf("student name: %s\n", ptr->name);
    printf("student roll: %d\n", ptr->roll);
    printf("student CG: %.2f\n", ptr->CG);

    return 0;
}
