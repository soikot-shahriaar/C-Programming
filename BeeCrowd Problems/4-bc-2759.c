// 1. Create 3 variables to store a single character;
// 2. Read a character value for the first variable;
// 3. Read a character value for the second variable;
// 4. Read a character value for the third variable;
// 5. Print the letter A, a space, the equals sign, a blank, the character stored in the first variable read in step 2, a comma, a blank, the letter B, a blank, the sign equal to one blank, the character stored in the second variable read in step 3, the letter C, a blank, the equal sign, a blank, the character stored in the third variable read in step 4. No forget to skip line;
// 6. Print the letter A, a space, the equals sign, a blank, the character stored in the first variable read in step 3, a comma, a blank, the letter B, a blank, the sign equal to one blank, the character stored in the second variable read in step 4, the letter C, a blank, the equal sign, a blank, the character stored in the third variable read in step 2. No forget to skip line;
// 7. Print the letter A, a blank, the equals sign, a blank, the character stored in the first variable read in step 4, a comma, a blank, the letter B, a blank, the sign equal to one blank, the character stored in the second variable read in step 2, the letter C, a blank, the equal sign, a blank, the character stored in the third variable read in step 3. No Forget to skip line.

// Input
// The entry consists of several test files. Each test file has three rows. In the first line has a variable A that stores a character value. The second line has a variable B that stores a character value. The third line has a variable C that stores a character value. As shown in the following input example.

// Output
// For each file in the entry, you have an output file. The output file has three rows as described in items 5, 6, and 7. As shown in the following output example.

#include <stdio.h>

int main()
{
    char A, B, C;
    scanf("%c %c %c", &A, &B, &C);

    printf("A = %c, B = %c, C = %c\n", A, B, C);
    printf("A = %c, B = %c, C = %c\n", B, C, A);
    printf("A = %c, B = %c, C = %c\n", C, A, B);

    return 0;
}