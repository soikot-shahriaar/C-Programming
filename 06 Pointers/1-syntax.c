// * -> value of address operator
// & -> address of operator

#include <stdio.h>
int main()
{
    int age = 22;    // data is 22
    int *ptr = &age; // address of 22 is xyz
    int _age = *ptr; // data in xyz address is 22

    printf("%d\n", _age); // 22
    printf("\n");

    // printing address
    // %u -> unsigned int
    // %p -> hexadecimal
    printf("%u\n", &age); // address of 22 is xyz
    printf("%p\n", &age); // address of 22 is xyz
    printf("%p\n", ptr);  // address of 22 is xyz
    printf("%p\n", &ptr); // address of xyz is pqr
    printf("\n");

    // printing data
    printf("%u\n", age);     // data is 22
    printf("%d\n", age);     // data is 22
    printf("%d\n", *ptr);    // data in xyz address is 22
    printf("%d\n", *(&age)); // data in xyz address is 22
    return 0;
}