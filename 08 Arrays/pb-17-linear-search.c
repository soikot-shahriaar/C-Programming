// Given an array and a number 'x'. Find out 'x' lies in the array or not, if yes then print the index.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[7] = {12, 52, 13, 55, 51, 12, 17};
    int x = 55;
    int idx = -1;

    bool flag = false; // false means not present
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // true means present
            idx = i;
            break;
        }
    }
    
    if (flag == false)
        printf("%d is not present in the array", x);
    else
        printf("%d is present in the array and its index is %d", x, idx);

    return 0;
}