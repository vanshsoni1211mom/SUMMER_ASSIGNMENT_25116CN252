// WAP TO PRINT ARMSTRONG NUMBER IN RANGE
#include <stdio.h>
#include <math.h>

int main() {
    int low, high, i, rem, n, num;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d are:\n", low, high);

    for (i = low; i <= high; i++) {
        n = 0;
       double sum = 0.0;
        num = i;

        // count digits
        while (num != 0) {
            num = num / 10;
            n++;
        }

        num = i;
       
        while (num != 0) {
            rem = num % 10;
            sum = sum + pow(rem, n);
            num = num / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}