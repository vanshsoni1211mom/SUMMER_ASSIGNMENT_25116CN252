// WAP TO COUNT WORDS IN A SENTENCE
#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    gets(str);  // beginner style, but unsafe (still common in early code)

    // Count words by checking spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            words++;
        }
    }

    // Add 1 for the last word (if sentence not empty)
    if (str[0] != '\0') {
        words++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}
