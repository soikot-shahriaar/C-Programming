// Count the number of odd numbers in an array.

#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int count = 0;
    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}