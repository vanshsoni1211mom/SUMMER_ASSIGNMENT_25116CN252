// WAP TO FIND FIRST NON REPEATING CHARACTER
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int found;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        found = 0;
        for(j = 0; j < len; j++) {
            if(i != j && str[i] == str[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("First non-repeating character is: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}
