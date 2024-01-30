// In the chessboard, the square of the board on line 1, column 1 (upper left corner) is always white and the colors of the houses alternate between white and black, according to the pattern known as ... chess! In this way, since the traditional board has eight rows and eight columns, the house on row 8, column 8 (lower right corner) will also be white. In this problem, however, we want to know the color of the square of the board in the lower right corner of a tray with any dimensions: L rows and C columns. In the example of the figure, for L = 6 and C = 9, the square of the board in the lower right corner will be black!

// Input
// The first line of the input contains an integer L (1 ≤ L ≤ 1000) indicating the number of lines in the chessboard. The second line of the input contains an integer C (1 ≤ C ≤ 1000) representing the number of columns.

// Output
// Print a line on the output. The line should contain an integer, representing the color of the house in the lower right corner of the board: 1, if it is white; and 0, if it is black.

#include <stdio.h>

int main()
{
    int L, C;
    scanf("%d %d", &L, &C);

    if (L % 2 == 0 && C % 2 == 0)
        printf("1\n");
    else if (L % 2 == 1 && C % 2 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}