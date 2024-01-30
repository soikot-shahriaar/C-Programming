#include <stdio.h>
int main()
{
    // Input of Array
    // int marks[3] = {89, 90, 93};

    // Input of Array
    int marks[3];
    printf("input physics : ");
    scanf("%d", &marks[0]);
    printf("input chem : ");
    scanf("%d", &marks[1]);
    printf("input math : ");
    scanf("%d", &marks[2]);

    // Output of Array
    printf("physics marks = %d\n", marks[0]);
    printf("chem marks = %d\n", marks[1]);
    printf("math marks = %d\n", marks[2]);
    return 0;
}