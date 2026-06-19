// WAP TO CALCULATE SUM OF DIAGONAL ELEMENTS
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // calculate diagonal sum
    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("The sum of main diagonal elements is: %d\n", sum);

    return 0;
}
