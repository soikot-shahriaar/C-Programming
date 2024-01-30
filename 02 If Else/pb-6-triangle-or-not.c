// take 3 numbers input and tell if they can be the sides of a triangle

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("yes! %d %d %d can be the sides of a triangle.", a, b, c);
    else
        printf("sorry! not possible.");
    return 0;
}