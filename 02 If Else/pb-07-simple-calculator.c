#include <stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Choose an Operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two Operands:\n");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
        break;
    default:
        printf("Error! Invalid Operator");
    }

    return 0;
}