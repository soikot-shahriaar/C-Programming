// Pointer Arithmetic
// Pointer can be incremented & decremented

#include <stdio.h>
int main()
{
    char star = '*';
    char *ptr = &star;
    printf("ptr1 = %u\n", ptr);
    ptr++;
    printf("ptr2 = %u\n", ptr);
    ptr--;
    printf("ptr3 = %u", ptr);
    return 0;
}