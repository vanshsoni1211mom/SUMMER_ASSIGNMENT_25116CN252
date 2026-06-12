// WAP TO WRITE A DUNCTION FOR AN ARMSTRONG NUMBER
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int temp, digit, sum = 0, count = 0;
    temp = num;

    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + (int) ( pow(digit, count) + 0.5);
        temp = temp / 10;
    }

    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n) == 1) {
        printf("%d is Armstrong number\n", n);
    } else {
        printf("%d is not Armstrong number\n", n);
    }

    return 0;
}


