Question: Implement a function to calculate the power of a number without using the pow() library function.

--- SOLUTION ---
#include <stdio.h>

long long power(int base, int exp) {
    long long result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int main() {
    int base, exp;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    long long result = power(base, exp);
    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}