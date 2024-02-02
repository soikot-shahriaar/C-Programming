// /*
// Enter number of Rows: 3
// 1
// 1 2
// 1 2 3
// */

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number of Rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) // no of rows
//     {
//         for (int j = 1; j <= i; j++) // no of columns
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
Enter number of Rows: 3
1
1 3
1 3 5
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // no of rows
    {
        int a = 1;
        for (int j = 1; j <= i; j++) // no of columns
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}