#include <stdio.h>

int main()
{
    int x = 4, y = 3, z;
    z = x-- - y;
    printf("\n%d %d %d", x, y, z);
}
/*

3 3 1
*/