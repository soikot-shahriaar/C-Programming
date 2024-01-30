// Write a program that uses two functions FahToCel and CelToFah to convert temperatures between Fahrenheit and Celsius

#include <stdio.h>

float FahToCel(float fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float CelToFah(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    int choice;
    float temp, result;

    printf("1. Fahrenheit to Celsius: \n");
    printf("2. Celsius to Fahrenheit: \n");
    printf("Choose 1 or 2 to measure temperature: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("The temperature in Celsius is: %f\n", FahToCel(temp));
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("The temperature in Fahrenheit is: %f\n", CelToFah(temp));
    }
    else
    {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}
