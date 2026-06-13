// WAP TO FIND THE SUM AND AVERAGE OF TWO ARRAYS
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}