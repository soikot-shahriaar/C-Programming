// Print the multiplication table of a number x that inputs by user and y number of times.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the multiplication number:\n");
    scanf("%d", &x);
    printf("Enter the multiplication times:\n");
    scanf("%d", &y);
    for (int i = 1; i <= y; i++)
    {
        printf("%d X %d = %d\n", x, i, i * x);
    }

    return 0;
}