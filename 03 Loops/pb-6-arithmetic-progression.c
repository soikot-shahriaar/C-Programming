// Display this Arithmetic Progression 4,7,10,13,16.. upto n terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter terms n of Arithmetic Progression: ");
    scanf("%d", &n);
    int ap = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", ap);
        ap = ap + 3;
    }

    return 0;
}