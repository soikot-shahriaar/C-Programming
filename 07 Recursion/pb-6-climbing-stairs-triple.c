// Write a recursive function to find number of ways to reach the nth stair (single step, double step and triple step)

#include <stdio.h>

int stairWays(int n)
{
    if (n == 0)
        return 1; 
    else if (n == 1 || n == 2)
        return n;
    else
        return stairWays(n - 1) + stairWays(n - 2) + stairWays(n - 3);
}

int main()
{
    int n;
    printf("Enter nth stair: ");
    scanf("%d", &n);

    printf("The number of ways to reach %dth stair is %d", n, stairWays(n));

    return 0;
}
