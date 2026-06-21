// WAP TO CHECK SYMMETRIC MATRIX
#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j;
    int flag = 1; // assume symmetric

    // Input size of square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0; // not symmetric
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    // Print result
    if (flag == 1) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

