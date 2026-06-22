// WAP TO REMOVE SPACES FROM STRING
#include <stdio.h>

int main() {
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);  // beginner style, unsafe but common in early code

    // Copy characters except spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';  // end the new string

    printf("String without spaces: %s\n", newStr);

    return 0;
}
