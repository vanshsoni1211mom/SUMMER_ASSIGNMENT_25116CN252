// WAP TO RECURSIVE SUM OF DIGITS
#include <stdio.h>

// Recursive function to find sum of digits
int sumDigits(int n) {
    if (n < 0) {
        n = -n; // make positive if negative
    }
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumDigits(num));

    return 0;
}