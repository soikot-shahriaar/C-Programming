// recursive function to print 1 to n (increasing)

#include <stdio.h>

void increasing(int n)
{
    if (n == 0) // best case
        return;

    increasing(n - 1); // recursive call
    printf("%d\n", n); // code

    return;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    increasing(n);
    return 0;
}