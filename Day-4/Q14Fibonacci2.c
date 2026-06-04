// WAP TO PRINT FIBONACCI SERIES OF NTH TERM
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, c;

    printf("Enter term number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term is: 0\n");
    }
    else if (n == 2) {
        printf("Fibonacci term is: 1\n");
    }
    else {
        for (i = 3; i <= n+1; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term is: %llu\n", c);
    }

    return 0;
}