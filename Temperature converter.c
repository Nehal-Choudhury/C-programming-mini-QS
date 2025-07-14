Question: Create a program that converts a temperature from Celsius to Fahrenheit and vice versa.

--- SOLUTION ---
#include <stdio.h>

int main() {
    char choice;
    float temp, convertedTemp;

    printf("Press 'c' to convert from Celsius to Fahrenheit.\n");
    printf("Press 'f' to convert from Fahrenheit to Celsius.\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'c' || choice == 'C') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = (temp * 9.0 / 5.0) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, convertedTemp);
    } else if (choice == 'f' || choice == 'F') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) * 5.0 / 9.0;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, convertedTemp);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}