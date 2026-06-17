// WAP TO UNION OF ARRAYS
#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0;
    int found;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Copy first array to union array
    for (i = 0; i < n1; i++) {
        c[k] = a[i];
        k++;
    }

    // Add elements from second array if not already in union array
    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (b[i] == c[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            c[k] = b[i];
            k++;
        }
    }

    // Print union array
    printf("Union of the two arrays is:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
