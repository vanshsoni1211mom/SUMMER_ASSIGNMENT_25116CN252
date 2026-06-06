// WAP TO CONVERT DECIMAL TO BINARY
#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    if (scanf("%d", &num) != 1) { // input validation
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}



