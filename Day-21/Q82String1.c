// WAP TO REVERSE A STRING
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // reads until space

    // Find length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Reverse the string
    j = 0;
    for (i = length - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0'; // end the reversed string

    // Print result
    printf("Reversed string = %s\n", rev);

    return 0;
}
