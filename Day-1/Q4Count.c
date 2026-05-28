// WAP TO COUNT THE DIGITS OF THE GIVEN NUMBER

#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Special case for 0
    if (num == 0) {
        count = 1;
    } else {
        while (num > 0) {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}