#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    printf("Enter the elements of array:\n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    printf("Printing the array elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
    printf("\n");
    return 0;
}
/*
Enter the number of Rows: 3
Enter the number of Columns: 2
Enter the elements of array:
1 2
3 4
5 6
Printing the array elements:
1 2 3 4 5 6 
*/