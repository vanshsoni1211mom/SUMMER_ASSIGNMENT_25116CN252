// WAP TO FIND MAXIMUM FRQUENCY ELEMENT
#include <stdio.h>

int main() {
    int n, i, j;
    int maxCount = 0;
    int element = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the element with maximum frequency
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d\n", maxCount);

    return 0;
}