// Print Zigzag
// Input Output
//  1    1 1 1 
//  2    2 1 1 1 2 1 1 1 2 
//  3    3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 

#include <stdio.h>

void zigzag(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    zigzag(n - 1);
    printf("%d ", n);
    zigzag(n - 1);
    printf("%d ", n);
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}