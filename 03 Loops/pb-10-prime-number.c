// Check whether a given number is prime or not using for loop.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    int a = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            a = 1;
            break;
        }
    }

    if (num == 1)
        printf("1 is neither prime nor composite\n");
    else if (a == 0)
        printf("%d is a Prime Number.\n", num);
    else
        printf("The given number is composite.\n");
    return 0;
}