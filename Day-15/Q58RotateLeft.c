// WAP TO ROTATE ARRAY LEFT
#include <stdio.h>

int main() {
    int n, d, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    // Rotate left d times
    for (i = 0; i < d; i++) {
        temp = arr[0]; // store first element
        for (j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1]; // shift left
        }
        arr[n - 1] = temp; // put first element at end
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}