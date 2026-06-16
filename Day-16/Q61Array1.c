// WAP TO FIND MISSING NUMBER IN ARRAY
#include <stdio.h>

int main() {
    int n, i, sum = 0, total, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1]; // store n-1 numbers

    printf("Enter %d numbers from 1 to %d (one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add up the numbers
    }

    total = n * (n + 1) / 2; // sum of 1 to n
    missing = total - sum;   // find missing number

    printf("Missing number is: %d\n", missing);

    return 0;
}