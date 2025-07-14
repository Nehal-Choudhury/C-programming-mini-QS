Question: Write a program to count the number of vowels and consonants in a given string.

--- SOLUTION ---
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[150];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; ++i) {
        char lower_char = tolower(str[i]);
        if (lower_char >= 'a' && lower_char <= 'z') {
            if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' ||
                lower_char == 'o' || lower_char == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}