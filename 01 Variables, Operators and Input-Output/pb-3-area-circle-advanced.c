// area of circle in a advanced way
// using library function
#include <stdio.h>
#include <math.h>
int main()
{
    float radius;
    float pi = 3.1416;
    printf("Input Radius: ");
    scanf("%f", &radius);
    float result = pi * pow(radius, 2);
    printf("Area of the Circle is: %f", result);
    return 0;
}