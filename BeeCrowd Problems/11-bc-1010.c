// In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

// Input
// The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

// Output
// The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

// 12 1 5.30
// 16 2 5.10

// VALOR A PAGAR: R$ 15.50

#include <stdio.h>

int main()
{
    int code1, units1;
    float onePrice1;
    int code2, units2;
    float onePrice2;

    scanf("%d %d %f", &code1, &units1, &onePrice1);
    scanf("%d %d %f", &code2, &units2, &onePrice2);

    float payment = (units1 * onePrice1) + (units2 * onePrice2);
    printf("VALOR A PAGAR: R$ %.2f\n", payment);
    return 0;
}