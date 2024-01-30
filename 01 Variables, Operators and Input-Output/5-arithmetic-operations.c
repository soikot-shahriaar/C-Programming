#include <stdio.h>
int main()
{
    printf("sum of 2 & 3 : %d\n", 2 + 3);
    printf("sum of 2.0 & 3 : %f\n", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %.1f\n", 2.0 + 3.0);

    int a = 5;
    int b = 2;
    printf("%d ", a + b);
    printf("%d ", a - b);
    printf("%d ", a * b);
    printf("%d ", a / b);

    float x = 5;
    float y = 2;
    printf("%f ", x + y);
    printf("%f ", x - y);
    printf("%f ", x * y);
    printf("%f ", x / y);

    return 0;
}