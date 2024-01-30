// Write a program to add two matrices.

#include <stdio.h>
int main()
{
    int arr_a[2][2] = {1, 2, 3, 4};
    int arr_b[2][2] = {5, 6, 7, 8};
    int arr_sum[2][2];

    printf("Elements of array after addition:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr_sum[i][j] = arr_a[i][j] + arr_b[i][j];
            printf("%d\t", arr_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
