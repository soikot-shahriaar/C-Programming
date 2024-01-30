// Swap 2 numbers without using a third variable

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before Swapping:\n a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping:\n a = %d, b = %d\n", a, b);
    return 0;
}