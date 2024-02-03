// Given three points (x1 ,y1) and (x2 ,y2) and (x3 ,y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    printf("Enter x1 and y1:\n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2:\n");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter x3 and y3:\n");
    scanf("%lf %lf", &x3, &y3);

    double crossProduct = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1); 

    if (crossProduct == 0)
        printf("The three points are on the same line.\n");
    else
        printf("The three points are not on the same line.\n");
    return 0;
}