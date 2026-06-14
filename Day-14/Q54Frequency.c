// WAP TO FREQUENCY OF AN ELEMENT
#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // fixed size for simplicity
    int freq[100]; // to store frequency

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // mark as not counted yet
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("\nFrequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }

    return 0;
}


