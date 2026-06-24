// WAP TO REMOVE DUPLICATE CHARACTERS
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0;
    int found;

    printf("Enter a string: ");
    scanf("%s", str);   // simple input, no spaces

    for (i = 0; i < strlen(str); i++) {
        found = 0;
        // check if str[i] already exists in result
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';  // end the string

    printf("String after removing duplicates: %s\n", result);

    return 0;
}
