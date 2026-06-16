// WAP TO FIND PAIRS WITH GIVEN SUM
#include <stdio.h>

int main() {
    int arr[50], n, sum, i, j;
    int found = 0; // flag to check if any pair is found

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target sum
    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    // Check all pairs
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found with sum %d\n", sum);
    }

    return 0;
}