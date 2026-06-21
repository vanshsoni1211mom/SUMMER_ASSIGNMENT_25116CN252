// WAP TO CONVERT LOWERCASE TO UPPERCASE 
#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // reads until space

    // Convert lowercase to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference
        }
    }

    // Print result
    printf("Uppercase string = %s\n", str);

    return 0;
}
