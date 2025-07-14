Question: Create a simple Rock, Paper, Scissors game where the user plays against the computer.

--- SOLUTION ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    
    srand(time(0));
    
    printf("Rock, Paper, Scissors Game\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &playerChoice);

    computerChoice = (rand() % 3) + 1;

    printf("You chose: ");
    if(playerChoice == 1) printf("Rock\n");
    else if(playerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    printf("Computer chose: ");
    if(computerChoice == 1) printf("Rock\n");
    else if(computerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}