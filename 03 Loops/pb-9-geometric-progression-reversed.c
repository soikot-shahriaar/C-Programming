// Display this Geometric Progression - 100,50,25,.. upto n terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float gp = 100;
    for (float i = 0; i <= n; i++)
    {
        printf("%.2f ", gp);
        gp = gp / 2;
    }

    return 0;
}