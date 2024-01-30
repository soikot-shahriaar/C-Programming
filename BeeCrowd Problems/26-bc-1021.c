// Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

// Input
// The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

// Output
// Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

#include <stdio.h>

int main()
{
    double inputAmount;
    int n, a, b, c, d, e, f, g, h, i, j, k, l;

    scanf("%lf", &inputAmount); // 576.73

    n = inputAmount * 100; // 57673
    a = n / 10000;         // 5
    n = n % 10000;         // 7673

    b = n / 5000; // 1
    n = n % 5000; // 2673

    c = n / 2000; // 1
    n = n % 2000; // 673

    d = n / 1000; // 0
    n = n % 1000; // 673

    e = n / 500; // 1
    n = n % 500; // 173

    f = n / 200; // 0
    n = n % 200; // 173

    g = n / 100; // 1
    n = n % 100; // 73

    h = n / 50; // 1
    n = n % 50; // 23

    i = n / 25; // 0
    n = n % 25; // 23

    j = n / 10; // 2
    n = n % 10; // 3

    k = n / 5; // 0
    n = n % 5; // 3

    l = n / 1; // 3

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);

    return 0;
}