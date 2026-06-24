// WAP TO COMPRESS A STRING
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], comp[200];
    int i, j = 0, count;

    printf("Enter a string: ");
    scanf("%s", str);   // reads until space

    for (i = 0; i < strlen(str); i++) {
        comp[j++] = str[i];   // copy the character
        count = 1;

        // count consecutive same characters
        while (str[i] == str[i+1]) {
            count++;
            i++;
        }

        // convert count to character(s)
        if (count > 1) {
            comp[j++] = count + '0';  // only works for counts < 10
        }
    }

    comp[j] = '\0';  // end the compressed string

    printf("Compressed string = %s\n", comp);

    return 0;
}
