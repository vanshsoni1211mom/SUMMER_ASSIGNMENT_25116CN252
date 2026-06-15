// WAP TO ROTATE ARRAY RIGHT
#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter how many times to rotate right: ");
    scanf("%d", &k);

    // Rotate k times
    for (j = 0; j < k; j++) {
        last = arr[n - 1]; // Save last element
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; // Shift right
        }
        arr[0] = last; // Put last element at front
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}