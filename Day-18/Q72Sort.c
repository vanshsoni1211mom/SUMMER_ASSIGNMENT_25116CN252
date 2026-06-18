// WAP TO SORT AN ARRAY IN DESCENDING ORDER
#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    // Taking array size input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort in descending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Swap if next is bigger
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing sorted array
    printf("Array in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
