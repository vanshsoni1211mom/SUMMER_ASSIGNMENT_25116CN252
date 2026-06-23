// WAP TO FIND MAXIMUM OCCURRING CHARACTERS
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  // frequency array
    int i, len, max = 0;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);  // simple input, no spaces

    len = strlen(str);

    for(i = 0; i < len; i++) {
        count[(int)str[i]]++;
    }

    for(i = 0; i < 256; i++) {
        if(count[i] > max) {
            max = count[i];
            result = (char)i;
        }
    }

    printf("Maximum occurring character is: %c\n", result);

    return 0;
}
