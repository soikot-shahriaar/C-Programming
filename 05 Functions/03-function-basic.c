// changes to parameters in function don't change the values in calling function
// because a copy of argument is passed to the function

#include <stdio.h>

void calculatePrice(float value)
{
    value = value + (.18 * value);
    printf("final price is: %.2f\n", value); // 118.00
}

int main()
{
    float value = 100.00;
    calculatePrice(value);
    printf("value is: %.2f\n", value); // 100.00
    return 0;
}