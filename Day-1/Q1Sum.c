// WAP TO CALCULATE THE SUM OF FIRST N NATURAL NUMBERS

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        sum = sum + i; 
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}