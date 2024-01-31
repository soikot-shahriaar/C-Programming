// Write a program to reverse the array without using any extra array.

#include <stdio.h>

void rev_arr(int arr[])
{
    int i = 0;
    int j = 6;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

// void rev_arr(int arr[])
// {
//     for (int i = 0, j = 6; i < j; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     return;
// }

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    rev_arr(arr);

    for (int i = 0; i <= 6; i++)
        printf("%d ", arr[i]);

    return 0;
}