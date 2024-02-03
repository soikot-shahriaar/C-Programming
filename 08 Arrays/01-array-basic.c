#include <stdio.h>

int main()
{
    int arr[5] = {111, 222, 333, 444, 555};
    arr[1] = 999; // {111, 999, 333, 444, 555};
    arr[4] = 777; //{111, 222, 333, 444, 777};
    printf("%d\n", arr[1]);
    // printf("%d", arr[10]);
    // printf("%d", arr[-1]);

    float a[3] = {2.11, 6.111, 21.13};
    printf("%f\n", a[1]);

    char ar[5] = {'S', 'K', 'T', 'S', 'H'};
    printf("%c\n", ar[3]);

    return 0;
}