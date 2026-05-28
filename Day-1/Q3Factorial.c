// WAP TO FIND THE FACTORIAL OF A NUMBER

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; 

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}