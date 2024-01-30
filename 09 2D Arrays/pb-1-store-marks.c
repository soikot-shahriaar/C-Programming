// Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
// Roll    Marks
// 101      84
// 102      82
// 103      81
// 104      89

#include <stdio.h>
int main()
{
    int stored[4][2] = {{101, 84}, {102, 82}, {103, 81}, {104, 89}};

    printf("Roll No and Marks of Students:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", stored[i][j]);
        }
        printf("\n");
    }
    return 0;
}