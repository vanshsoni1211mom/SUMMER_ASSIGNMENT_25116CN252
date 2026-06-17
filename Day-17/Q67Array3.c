// WAP TO INTERSECTION OF ARRAYS
#include <stdio.h>

int main() {
    int a[50], b[50], inter[50];
    int n1, n2, i, j, k = 0;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Find intersection (basic method)
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Check if already in intersection array
                int found = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    inter[k] = a[i];
                    k++;
                }
            }
        }
    }

    // Output intersection
    if (k == 0) {
        printf("No common elements.\n");
    } else {
        printf("Intersection of arrays: ");
        for (i = 0; i < k; i++) {
            printf("%d ", inter[i]);
        }
        printf("\n");
    }

    return 0;
}