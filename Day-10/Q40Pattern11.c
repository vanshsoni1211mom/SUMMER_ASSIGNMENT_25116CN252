// WAP TO PRINT CHARACTER PYRAMID
#include<stdio.h>
int main() {
    char endChar;
    int i, j;

    printf("Enter last letter (A-Z): ");
    scanf(" %c", &endChar);

    int rows = endChar - 'A' + 1;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}

