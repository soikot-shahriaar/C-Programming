// Print the sum of this series: 1 - 2 + 3 - 4 + 5 - 6 . . upto n

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 - 2 + 3 - 4 + 5 - 6 . . . n
    // odd numbers -> add
    // even numbers -> subtract
    
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            sum = sum + i;
        else
            sum = sum - i;
    }
    printf("Sum is %d", sum);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int sum = 0;
//     if (n % 2 == 0)
//         sum = -n / 2;
//     else
//         sum = -n / 2 + n;

//     printf("Sum is %d", sum);
//     return 0;
// }