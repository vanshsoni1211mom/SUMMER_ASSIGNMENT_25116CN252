// WAP TO WRITE FUNCTOn TO FIND MAXIMUM 
#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, max;

    printf("Enter first numbers: ");
    scanf("%d", &num1);

    printf("Enter second numbers: ");
    scanf("%d", &num2);

    max = findMax(num1, num2);

    printf("Maximum is: %d\n", max);

    return 0;
}