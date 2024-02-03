#include <stdio.h>
int main()
{
    int marks[5];

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the marks for student %d: ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("marks of student %d is %d\n", i, marks[i]);
    }
    return 0;
}