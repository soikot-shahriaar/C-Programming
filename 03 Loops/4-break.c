// break statement completely exits the loop
// continue statement skips the particular iteration of the loop

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("End of Program");
    return 0;
}