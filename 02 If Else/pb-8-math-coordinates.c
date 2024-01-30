// Given a point (x,y), write a program to find out if it lies on the x-axis or on the y-axis or at the origin (0,0).

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two coordinates:\n");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is at the origin.\n");
    }
    else if (x == 0)
    {
        printf("The point is on the x-axis.\n");
    }
    else if (y == 0)
    {
        printf("The point is on the y-axis.\n");
    }
    else
    {
        printf("The point is not on the x-axis or on the y-axis.\n");
    }
    return 0;
}