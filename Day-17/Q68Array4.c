// WAP TO FIND COMMON ELEMENTS IN ARRAYS
#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100];
    int i, j;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Finding common elements
    printf("Common elements are: ");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // avoid printing duplicates from arr2
            }
        }
    }

    printf("\n");
    return 0;
}