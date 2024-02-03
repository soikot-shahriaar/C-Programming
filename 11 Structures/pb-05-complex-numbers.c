// Create a structure to store complex numbers. (use arrow operator)

#include <stdio.h>

typedef struct complexStruct
{
    int real;
    int img;
} complex;

int main()
{
    complex num1 = {5, 8};
    complex *ptr = &num1;

    printf("Real part: %d\n", ptr->real);
    printf("Imaginary part: %d\n", ptr->img);

    return 0;
}
