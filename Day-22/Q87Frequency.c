// WAP TO CHARACTER FREQUENCY
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // array for all ASCII characters
    int i;

    printf("Enter a string: ");
    gets(str);  // beginner style, unsafe but common in early code

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print frequencies
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}
