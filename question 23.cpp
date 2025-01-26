#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display the instructions
void displayInstructions() {
    printf("Welcome to the Number Guessing Game!\n");
    printf("The computer will think of a number between 1 and 100.\n");
    printf("You have 4 chances to guess the number.\n");
    printf("After each incorrect guess, you will be told whether your guess is too high or too low.\n");
    printf("Good luck!\n\n");
}

// Function to play the game
void playGame() {
    int number, guess, attempts = 4;
    char continueGame;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = (rand() % 100) + 1;

    // Allow user to guess 4 times
    while (attempts > 0) {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == number) {
            printf("Congratulations! You guessed the number correctly.\n");
            break;
        } else if (guess < number) {
            printf("Your guess is too small.\n");
        } else {
            printf("Your guess is too large.\n");
        }

        attempts--;
        printf("You have %d attempt(s) remaining.\n", attempts);

        if (attempts == 0) {
            printf("Sorry, you've run out of attempts. The correct number was %d.\n", number);
        }
    }

    // Ask if the user wants to continue playing
    printf("\nDo you want to play again? (y/n): ");
    scanf(" %c", &continueGame);  // Adding space before %c to consume any leading newline character
    if (continueGame == 'y' || continueGame == 'Y') {
        playGame();  // Recursively call playGame to start a new game
    } else {
        printf("Thank you for playing!\n");
    }
}

int main() {
    // Display instructions and start the game
    displayInstructions();
    playGame();

    return 0;
}

