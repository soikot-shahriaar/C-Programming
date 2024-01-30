// Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

// Input
// The input has two integer numbers.

// Output
// Print the relative message to the input as stated above.

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0 || b % a == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}