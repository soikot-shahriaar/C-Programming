/*
Enter number of Rows: 5
A
A B
A B C
A B C D
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
        for (int j = 1; j <= i; j++)
        {
            int x = a + 64;
            char ch = (char)x;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}