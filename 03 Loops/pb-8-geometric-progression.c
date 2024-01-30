// Display this Geometric Progression - 3,12,48,.. upto n terms

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int gp = 3;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", gp);
        gp = gp * 4;
    }

    return 0;
}