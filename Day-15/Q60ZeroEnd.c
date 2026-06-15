// WAP TO MOVE ZERO IN THE END
#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move zeroes to end
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[j] != 0) {
                    // Swap arr[i] and arr[j]
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    printf("Array after moving zeroes to end: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}