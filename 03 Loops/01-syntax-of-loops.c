// Syntax of 3 Loops

#include <stdio.h>
int main()
{
    // for loop
    for (int i = 1; i <= 3; i++)
    {
        printf("%d hello world\n", i);
    }

    printf("\n");

    // while loop
    int i = 1;
    while (i <= 3)
    {
        printf("%d hi shahriar\n", i);
        i++;
    }

    printf("\n");

    // do while loop
    i = 1;
    do
    {
        printf("%d hello bangladesh\n", i);
        i++;
    } while (i <= 3);
    
    return 0;
}

/*
1 hello world
2 hello world
3 hello world

1 hi shahriar
2 hi shahriar
3 hi shahriar

1 hello bangladesh
2 hello bangladesh
3 hello bangladesh
*/