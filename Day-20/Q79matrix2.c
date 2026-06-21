// WAP TO PRINT ROW WSIE SUM
#include <stdio.h>

int main() {
    int a[10][10], r, c;
    int i, j, sum;

    // Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row-wise sum
    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
