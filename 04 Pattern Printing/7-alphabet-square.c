/*
Enter number of Rows: 5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            // printf("%d ", a);
            // a++;
            int x = (char)a + 64;
            printf("%c ", x);
            a++;
        }
        printf("\n");
    }
    return 0;
}