// Make a program to input student information from a user and enter it to a file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float CG;

    printf("Enter Name: ");
    scanf("%s", &name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter CG: ");
    scanf("%f", &CG);

    fprintf(fptr, "Student Name: %s\n", name);
    fprintf(fptr, "Student Age: %d\n", age);
    fprintf(fptr, "Student CG: %f\n", CG);

    fclose(fptr);
    return 0;
}