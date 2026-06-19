// WAP TO SUBTRACT TWO MATRICES
#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], Result[rows][cols];

    // Input first matrix
    printf("Enter elements of first matrix (A):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix (B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtract matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Result[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display result
    printf("Resultant Matrix after subtraction (A - B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
