// Given an array of marks of 10 students, if the mark of any student is less than 40 print its roll number as failed students. [roll number here refers to the index of the array]

#include <stdio.h>
int main()
{
    int marks[10];

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the marks for student %d: ", i);
        scanf("%d", &marks[i]);
    }

    printf("Failed students roll no are: \n");
    for (int i = 1; i <= 10; i++)
    {
        if (marks[i] < 40)
            printf("%d ", i);
    }

    return 0;
}