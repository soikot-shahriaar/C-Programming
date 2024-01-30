// difference between malloc() and calloc()
// calloc() initialises the allocated memory blocks with value 0
// unlike malloc() in which blocks allocated have garbage value.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // calloc( ) => continuous allocation
    float *ptr = (float *)calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++)
        printf("%d\n", ptr[i]);
        
    return 0;
}
/*
0
0
0
0
0
*/