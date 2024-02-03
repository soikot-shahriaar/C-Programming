// Print natural numbers from 10 to 20 when the initial loop counter is 0.

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 20; i++)
    {
        if (i >= 10)
            printf("%d ", i);
    }
    return 0;
}