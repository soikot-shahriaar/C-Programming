// Create a structure to store vectors. The make a function to return sum of 2 vectors.

#include <stdio.h>

typedef struct vectorStruct
{
    int x;
    int y;
} vector;

void calcSum(vector v1, vector v2, vector *sum)
{
    sum->x = v1.x + v2.x;
    sum->y = v1.y + v2.y;
    printf("sum of x is: %d\n", sum->x);
    printf("sum of y is: %d\n", sum->y);
}

int main()
{
    vector v1 = {5, 10};
    vector v2 = {3, 9};
    vector sum = {0};

    calcSum(v1, v2, &sum);
    return 0;
}