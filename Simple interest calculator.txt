Question: Write a program that calculates simple interest given the principal amount, rate of interest, and time period. Formula: SI = (P * R * T) / 100.

--- SOLUTION ---
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Total Amount = %.2f\n", principal + simple_interest);

    return 0;
}