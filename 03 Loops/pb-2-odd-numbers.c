// Print first n odd numbers.
// Input: 3
// Output:
// 1
// 3
// 5

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times to print:\n");
    scanf("%d", &n);
    for (int i = 1; n > 0; i += 2)
    {
        printf("%d\n", i);
        n--;
    }
    return 0;
}
