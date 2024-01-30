// // recursive function to print n to 1 (decreasing)

#include <stdio.h>
void printing(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n);
    printing(n - 1); // recursive call

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