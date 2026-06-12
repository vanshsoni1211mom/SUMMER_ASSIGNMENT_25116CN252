// WAP TO WRITE A FUNCCTION FOR FIBONACCI
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        fibonacci(terms);
    }

    return 0;
}