// WAP TO FIND DUPLICATES
#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j;

    // Get number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Get array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find duplicates
    printf("Duplicate elements: ");
    int found = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break; // Avoid printing same number multiple times
            }
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}