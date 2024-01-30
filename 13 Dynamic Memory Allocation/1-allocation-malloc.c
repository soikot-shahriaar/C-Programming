// Static: means that the memory is allocated during compile time.
// Dynamic: means that the memory is allocated during runtime.

// Functions for Dynamic Memory Allocation
// a. malloc() => memory allocation
// b. calloc() => continuous allocation
// c. realloc() => re-allocation
// d. free() => free allocated memory

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // malloc( ) => memory allocation
    int *ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 111;
    ptr[1] = 2222;
    ptr[2] = 33333;
    ptr[3] = 44444;
    ptr[4] = 555555;

    for (int i = 0; i < 5; i++)
        printf("%d\n", ptr[i]);
        
    return 0;
}