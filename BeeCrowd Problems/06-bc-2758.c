// 1. Create two variables to store real numbers of simple precision;
// 2. Create two variables to store double precision real numbers;
// 3. Read the first simple precision number that will always have a decimal;
// 4. Read the second simple precision number that will always have two decimal places;
// 5. Read the first double precision number that will always have three decimal places;
// 6. Read the second double precision number that will always have four decimal places;
// 7. Print the letter A, a blank, the equals sign, a blank, the number stored in the first variable read in step 3, a comma, a blank, the letter B, a blank, the sign of equal, a space, the number stored in the second variable read in step 4. Do not forget to skip line;
// 8. Print the letter C, a blank, the equal sign, a blank, the number stored in the first variable read in step 5, a comma, a blank, the letter D, a blank, the sign of equal, a space, the number stored in the second variable read in step 6. Do not forget to skip line;
// 9. Repeat procedure 7, printing the numbers with one decimal place;
// 10. Repeat procedure 8, printing the numbers with one decimal place;
// 11. Repeat procedure 7, printing the numbers to two decimal places;
// 12. Repeat procedure 8, printing the numbers to two decimal places;
// 13. Repeat procedure 7, printing the numbers to three decimal places;
// 14. Repeat procedure 8, printing the numbers to three decimal places;
// 15. Repeat procedure 7, printing the numbers to three decimal places and in the form of scientific notation with the character E;
// 16. Repeat procedure 8, printing the numbers to three decimal places and in the form of scientific notation with the character E;
// 17. Repeat procedure 7, printing only the whole part of the number;
// 18. Repeat procedure 8, printing only the entire part of the number.

// Input
// The input consists of several test files. Each test file has two rows. In the first line there are two real numbers A and B (-1000.0 ≤ A, B ≤ 1000.0), separated by white space. In the second line there are two real numbers C and D (-1000.0 ≤ C, D ≤ 1000.0), separated by white space. As shown in the following input example.

// Output
// For each file in the input, you have an output file. The output file has twelve rows as described in item 7 and 8. As shown in the following output example.


#include <stdio.h>

int main() {
    float A, B;
    double C, D;

    scanf("%f %f", &A, &B);
    scanf("%lf %lf", &C, &D);

    printf("A = %f, B = %f\n", A, B);
    printf("C = %lf, D = %lf\n", C, D);

    printf("A = %.1f, B = %.1f\n", A, B);
    printf("C = %.1lf, D = %.1lf\n", C, D);

    printf("A = %.2f, B = %.2f\n", A, B);
    printf("C = %.2lf, D = %.2lf\n", C, D);

    printf("A = %.3f, B = %.3f\n", A, B);
    printf("C = %.3lf, D = %.3lf\n", C, D);

    printf("A = %.3E, B = %.3E\n", A, B);
    printf("C = %.3E, D = %.3E\n", C, D);

    printf("A = %d, B = %d\n", (int)A, (int)B);
    printf("C = %d, D = %d\n", (int)C, (int)D);

    return 0;
}