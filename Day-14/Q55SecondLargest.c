// WAP TO FIND THE SECOND LARGEST NUMBER
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // fixed size for simplicity
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two numbers.\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first two numbers are largest and second largest
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    // Loop through rest of the array
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (largest == second) {
        printf("No second largest element (all numbers may be same).\n");
    } else {
        printf("Second largest number is: %d\n", second);
    }

    return 0;
}


