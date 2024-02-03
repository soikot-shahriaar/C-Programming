// Pointer Arithmetic
// We can add and subtract pointers
// We can also compare two pointers

#include <stdio.h>
int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &age;
    printf("%u, %u, difference (1 integer = 4 bytes) = %u\n", ptr, _ptr, ptr - _ptr);
    printf("comparison = %u\n", ptr == _ptr);
    return 0;
}
