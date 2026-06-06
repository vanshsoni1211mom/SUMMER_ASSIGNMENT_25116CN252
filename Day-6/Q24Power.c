// WAP TO FIND X^N WITHOUT POW()
#include <stdio.h>

int main() {
    double x, result = 1.0;
    int n, i;

    // Get base from user
    printf("Enter base (x): ");
    scanf("%lf", &x);

    // Get exponent from user
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    // Special case: 0^0 is undefined
    if (x == 0 && n == 0) {
        printf("0^0 is undefined.\n");
        return 0;
    }

    // If exponent is positive
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            result = result * x;
        }
    }
    // If exponent is negative
    else if (n < 0) {
        for (i = 1; i <= -n; i++) {
            result = result * x;
        }
        result = 1.0 / result; // Take reciprocal
    }
    // If exponent is zero
    else {
        result = 1.0;
    }

    printf("%.2lf^%d = %.6lf\n", x, n, result);

    return 0;
}