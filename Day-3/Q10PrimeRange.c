// WAP TO PRINT THE PRIME NUMBERS IN A RANGE
#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    // Swap if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i <= 1) {
            continue; // skip numbers less than or equal to 1
        }
        isPrime = 1; // assume number is prime

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}