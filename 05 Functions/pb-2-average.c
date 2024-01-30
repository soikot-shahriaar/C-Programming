// Find the average of three numbers using function

#include <stdio.h>

float avg(int x, int y, int z)
{
    float result;
    result = (float)(x + y + z) / 3;
    return result;
}

int main()
{
    int a, b, c;
    printf("Enter the values of a, b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The value of average is %.2f", avg(a, b, c));
    return 0;
}
