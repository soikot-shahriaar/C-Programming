// recursive function to print 1 to n (increasing) and also n to 1 (decreasing)

#include <stdio.h>

void printing(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n); // print number
    printing(n - 1);   // recursive call
    printf("%d\n", n); // print number

    return;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printing(n);
    return 0;
}