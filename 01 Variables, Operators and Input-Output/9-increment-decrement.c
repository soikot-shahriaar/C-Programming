#include <stdio.h>

int main()
{
    int x = 5;
    x++;
    printf("%d ", x);
    x--;
    printf("%d ", x);
    ++x;
    printf("%d ", x);
    --x;
    printf("%d ", x);

    printf("\n");

    int y = 10;
    printf("%d ", y);
    printf("%d ", y++); // use y, then increment

    printf("\n");

    int z = 10;
    printf("%d ", z);
    printf("%d ", ++z); // increment then use z
    return 0;
}