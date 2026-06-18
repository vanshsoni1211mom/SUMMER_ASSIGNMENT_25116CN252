// WAP TO BINARY SARCH AN ELEMENT IN ARRAY
#include <stdio.h>

int main() {
    int arr[50], n, i, search, first, last, middle;

    // Taking array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements (must be sorted for binary search)
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Binary search logic
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (arr[middle] == search) {
            printf("%d found at position %d.\n", search, middle + 1);
            return 0; // Exit program after finding
        }
        else if (arr[middle] < search) {
            first = middle + 1;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    printf("%d not found in the list.\n", search);

    return 0;
}
