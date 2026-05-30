// WAP TO FIND THE LCM OF TWO NUMBERS
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Find GCD 
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate LCM using formula
    lcm = (num1 * num2) / gcd;
    
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}