// One natural number is a non-negative integer (0, 1, 2, 3, 4, 5,...). Your task in this problem is to calculate the sum of the natural numbers that are present in a given interval [A, B] including.

// For instance, the sum of the natural numbers in the range [2, 5] is 14 = (2 + 3 + 4 + 5).

// Input
// The test case contains two integers A e B (1 ≤ A ≤ B ≤ 10^9), representing the lower limit and the upper respectively.

// Output
// For each test, the output consists of one line containing the sum of natural numbers in the range.

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    long long sum = (long long)(B - A + 1) * (A + B) / 2;

    printf("%lld\n", sum);

    return 0;
}