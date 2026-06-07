// WAP TO RECURSIVE REVERSE OF A NUMBER
#include <stdio.h>

// Recursive function to reverse a number
int reverse(int num) {
    static int rev = 0; // keeps value between recursive calls
    int digit;

    if (num != 0) {
        digit = num % 10;       // get last digit
        rev = rev * 10 + digit; // build reversed number
        reverse(num / 10);      // recursive call
    }
    return rev;
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers simply
    if (num < 0) {
        reversed = -reverse(-num);
    } else {
        reversed = reverse(num);
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}