// The company ABC decided to give a salary increase to its employees, according to the following table:

// Salary	            Readjustment Rate
// 0 - 400.00           15%
// 400.01 - 800.00      12%
// 800.01 - 1200.00     10%
// 1200.01 - 2000.00    7%
// Above 2000.00        4%

// Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.

// Input
// The input contains only a floating-point number, with 2 digits after the decimal point.

// Output
// Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
// Novo salario:  means "New Salary"
// Reajuste ganho: means "Money earned"
// Em percentual: means "In percentage"

#include <stdio.h>

int main()
{
    float x, p, q;
    scanf("%f", &x);
    if (x >= 0 && x <= 400.00)
    {
        p = (x * 15) / 100;
        q = x + p;
        printf("Novo salario: %.2f\n", q);
        printf("Reajuste ganho: %.2f\n", p);
        printf("Em percentual: 15 %%\n");
    }
    else if (x >= 400.01 && x <= 800.00)
    {
        p = (x * 12) / 100;
        q = x + p;
        printf("Novo salario: %.2f\n", q);
        printf("Reajuste ganho: %.2f\n", p);
        printf("Em percentual: 12 %%\n");
    }
    else if (x > 800.01 && x <= 1200.00)
    {
        p = (x * 10) / 100;
        q = x + p;
        printf("Novo salario: %.2f\n", q);
        printf("Reajuste ganho: %.2f\n", p);
        printf("Em percentual: 10 %%\n");
    }
    else if (x > 1200.01 && x <= 2000.00)
    {
        p = (x * 7) / 100;
        q = x + p;
        printf("Novo salario: %.2f\n", q);
        printf("Reajuste ganho: %.2f\n", p);
        printf("Em percentual: 7 %%\n");
    }
    else if (x > 2000.00)
    {
        p = (x * 4) / 100;
        q = x + p;
        printf("Novo salario: %.2f\n", q);
        printf("Reajuste ganho: %.2f\n", p);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}