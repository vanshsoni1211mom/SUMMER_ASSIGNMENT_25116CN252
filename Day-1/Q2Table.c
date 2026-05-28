// WAP TO PRINT THE MULTIPLICATION TABLE OF A GIVEN NUMBER

#include <stdio.h>

int main() {
    int num, range, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the range: ");
    scanf("%d", &range);

    printf("Multiplication Table of %d:\n", num);

    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}