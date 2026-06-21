// WAP TO FIND STRING LENGTH
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // reads string until space

    // Count characters manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print result
    printf("Length of the string = %d\n", length);

    return 0;
}
