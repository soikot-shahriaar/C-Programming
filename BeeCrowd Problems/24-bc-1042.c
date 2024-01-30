// Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were read.

// Input
// The input contains three integer numbers.

// Output
// Present the output as requested above.

#include <stdio.h>

int main()
{
    int x, y, z, max, middle, min;
    scanf("%d %d %d", &x, &y, &z);

    max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;

    min = x;
    if (y < min)
        min = y;
    if (z < min)
        min = z;

    middle = (x + y + z) - (max + min);

    printf("%d\n%d\n%d\n\n", min, middle, max);

    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
