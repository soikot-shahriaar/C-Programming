/*
Enter number of Rows: 5
1 
A B
1 2 3
A B C D
1 2 3 4 5
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
        for (int j = 1; j <= i; j++)
        {
            int x = a + 64;
            char ch = (char)x;
            if (i % 2 == 0)
            {
                printf("%c ", ch);
            }
            else
            {
                printf("%d ", j);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}