// // recursive function to print n to 1 (decreasing)

#include <stdio.h>
void decreasing(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n);
    decreasing(n - 1); // recursive call

    return;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}