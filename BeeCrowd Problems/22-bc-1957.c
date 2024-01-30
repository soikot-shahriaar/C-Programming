// Data stored in computers are in binary. An economic way of visualizing these numbers is the usage of base 16 (hexadecimal).

// Your task is to write a program that, given a natural number at base 10, shows its representation in hexadecimal.

// Input
// The input is a positive integer number V at base 10 (1 ≤ V ≤ 2 x 10^9).

// Output
// The output is the same number V at base 16 in a single line (don't forget the end-of-line character). Use uppercase letters, as shown in the examples.

#include <stdio.h>

int main()
{
    int V;
    scanf("%d", &V);
    printf("%X", V);
    return 0;
}