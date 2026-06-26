// WAP TO FIND COMMON CHARACTERS IN STRINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    int found = 0;

    printf("Enter first string: ");
    scanf("%s", str1);   // simple input, no spaces

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are:\n");
    for(i = 0; i < strlen(str1); i++) {
        for(j = 0; j < strlen(str2); j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                found = 1;
                break;   // avoid printing duplicates for same char
            }
        }
    }

    if(found == 0) {
        printf("No common characters found.\n");
    }

    return 0;
}
