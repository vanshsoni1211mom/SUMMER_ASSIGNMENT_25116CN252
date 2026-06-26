// WAP TO CREATE NUMBER GUESSING GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, tries = 0;

    // generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if(guess > number) {
            printf("Too high!\n");
        } else if(guess < number) {
            printf("Too low!\n");
        } else {
            printf("Correct! You guessed it in %d tries.\n", tries);
        }
    } while(guess != number);

    return 0;
}
