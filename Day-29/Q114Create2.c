// WAP TO CREATE MENU DRIVEN ARRAY OPERATION SYSTEM
#include <stdio.h>

int main() {
    int arr[100], n = 0;
    int choice, i, pos, val;

    while (1) {
        printf("\n=== Menu Driven Array Operations ===\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
            printf("Array created successfully!\n");
        }
        else if (choice == 2) {
            printf("Array elements: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else if (choice == 3) {
            printf("Enter position to insert (0 to %d): ", n);
            scanf("%d", &pos);
            printf("Enter value to insert: ");
            scanf("%d", &val);
            if (pos >= 0 && pos <= n) {
                for (i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = val;
                n++;
                printf("Element inserted!\n");
            } else {
                printf("Invalid position!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);
            if (pos >= 0 && pos < n) {
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted!\n");
            } else {
                printf("Invalid position!\n");
            }
        }
        else if (choice == 5) {
            printf("Enter value to search: ");
            scanf("%d", &val);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (arr[i] == val) {
                    printf("Element found at position %d\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Element not found!\n");
            }
        }
        else if (choice == 6) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
