Question: An Armstrong number is a number that is equal to the sum of cubes of its digits. Write a program to check if a number is an Armstrong number.

--- SOLUTION ---
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (int temp = originalNum; temp != 0; ++n) {
        temp /= 10;
    }

    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}