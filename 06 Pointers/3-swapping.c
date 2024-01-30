// Swap 2 numbers using pointers (call by reference)

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 3, y = 5;
    printf("before swap: x = %d & y = %d\n", x, y);
    swap(&x, &y);
    printf("after swap: x = %d & y = %d\n", x, y);
    return 0;
}