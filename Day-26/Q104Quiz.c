// WAP TO CREATE QUIZ APPLICATION
#include <stdio.h>

int main() {
    char questions[3][100] = {
        "What is the capital of India?",
        "Which language is used to write programs in C?",
        "How many continents are there in the world?"
    };

    char options[3][4][50] = {
        {"Delhi", "Mumbai", "Kolkata", "Chennai"},
        {"C", "Python", "Java", "HTML"},
        {"5", "6", "7", "8"}
    };

    int answers[3] = {1, 1, 3}; // correct option numbers (1-based)
    int userAnswer, score = 0, i;

    printf("Welcome to the Quiz!\n");
    printf("---------------------\n");

    for(i = 0; i < 3; i++) {
        printf("\nQ%d: %s\n", i+1, questions[i]);
        printf("Options:\n");
        printf("1. %s\n", options[i][0]);
        printf("2. %s\n", options[i][1]);
        printf("3. %s\n", options[i][2]);
        printf("4. %s\n", options[i][3]);

        printf("Enter your choice (1-4): ");
        scanf("%d", &userAnswer);

        if(userAnswer == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong!\n");
        }
    }

    printf("\nQuiz Over!\n");
    printf("Your score is: %d out of 3\n", score);

    return 0;
}
