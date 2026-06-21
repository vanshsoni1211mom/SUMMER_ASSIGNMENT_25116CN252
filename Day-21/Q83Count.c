// WAP TO COUNT VOWELS AND CONSONANTS
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // reads until space

    // Check each character
    for (i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase for easy checking
        char ch;
        if (str[i] >= 'A' && str[i] <= 'Z') {
            ch = str[i] + 32; // make lowercase
        } else {
            ch = str[i];
        }

        // Check if alphabet
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print result
    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}
