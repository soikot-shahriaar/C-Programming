// Swap 2 numbers

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before Swapping:\n a= %d, b= %d\n", a, b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping:\n a= %d, b= %d\n", a, b);
    return 0;
}