// Find the total number of pairs in the array whose sum is equal to the given value x.

#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 12;
    int totalPairs = 0;

    int sumEven = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalPairs++;
                printf("(%d,%d) \n", arr[i], arr[j]);
            }
        }
    }
    printf("total number of pairs = %d", totalPairs);
    return 0;
}