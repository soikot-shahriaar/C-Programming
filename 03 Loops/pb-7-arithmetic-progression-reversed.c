// Display this Arithmetic Progression: 100,97,94,..upto all terms which are positive.

#include <stdio.h>

int main()
{
    int ap = 100;
    for (int i = 1; ap > 0; i++)
    {
        if (ap > 0)
        {
            printf("%d\n", ap);
            ap = ap - 3;
        }
    }
    return 0;
}