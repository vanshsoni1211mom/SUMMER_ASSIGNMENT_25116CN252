// WAP TO FIND THE LARGEST AND SMALLEST NUMBER IN ARRAY
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // fixed size for simplicity
    int smallest, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both smallest and largest
    smallest = arr[0];
    largest = arr[0];

    // Compare with rest of the elements
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest element = %d\n", smallest);
    printf("Largest element = %d\n", largest);

    return 0;
}