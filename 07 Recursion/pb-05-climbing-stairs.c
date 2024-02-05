// Write a recursive function to find number of ways to reach the nth stair (single step, double step)

#include <stdio.h>

int stairWays(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return stairWays(n - 1) + stairWays(n - 2);
}

int main()
{
    int n;
    printf("Enter nth stair: ");
    scanf("%d", &n);

    printf("The number of ways to reach %dth stair is %d", n, stairWays(n));

    return 0;
}

// When n is 0, the base case return 1 signifies that there is only one way to climb zero stairs: by not taking any steps.
// When n is 1, the base case return 1 indicates that there is only one way to climb one stair: by taking a single step.