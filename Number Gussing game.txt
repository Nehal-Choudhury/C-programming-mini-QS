Question: Develop a game where the program generates a random number between 1 and 100, and the user has to guess it. Provide feedback like "Too high" or "Too low."

--- SOLUTION ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, userGuess, attempts = 0;

    srand(time(0));
    numberToGuess = (rand() % 100) + 1;

    printf("Guess the number between 1 and 100!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else if (userGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (userGuess != numberToGuess);

    return 0;
}