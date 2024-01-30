// Given a letter of the alphabet, state its position.

// Input
// A single character L, an uppercase letter ('A' - 'Z') of the alphabet. ( C )

// Output
// A single integer, which represents the position of the letter in the alphabet. ( 3 )


#include <stdio.h>

int main() {
    char letter;

    scanf("%c", &letter);

    int position = letter - 'A' + 1;

    printf("%d\n", position);

    return 0;
}
