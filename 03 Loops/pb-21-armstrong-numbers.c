// Write a program to print out all Armstrong numbers between 1 and 500.
// If sum of cubes of each digit of the number is equal to the number itself, then the number is called Armstrong number.
// For example, 153 =(1*1*1)+(5*5*5)+(3*3*3)

#include <stdio.h>
#include <math.h>

int main()
{
    for (int num = 1; num <= 500; num++)
    {
        int originalNum, remainder, n = 0, result = 0;

        originalNum = num;

        // Count the number of digits in the number
        while (originalNum != 0)
        {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;

        // Calculate the sum of nth power of each digit
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num)
            printf("%d ", num);
    }
    return 0;
}