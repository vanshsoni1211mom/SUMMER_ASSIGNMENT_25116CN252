// WAP TO CONVERT BINARY TO DECIMAL
#include <stdio.h>

int main() {
    long long binary;   // To store binary number (can be large)
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while (binary > 0) {
        remainder = binary % 10;       // Get last digit
        decimal = decimal + remainder * base; // Add to decimal value
        base = base * 2;               // Increase base (powers of 2)
        binary = binary / 10;          // Remove last digit
    }

    printf("Decimal value = %d\n", decimal);

    return 0;
}