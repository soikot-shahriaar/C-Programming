// Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

// Distance =

// Input
// The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

// Output
// Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.

// 1.0 7.0
// 5.0 9.0

#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double a = (x2 - x1);
    double b = (y2 - y1);
    double distance = sqrt(a * a + b * b);
    printf("%.4lf\n", distance);
    return 0;
}