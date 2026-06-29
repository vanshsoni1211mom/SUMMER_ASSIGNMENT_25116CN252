// WAP TO CREATE MENU DRIVEN STRING OPERATION SYSTEM
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    while (1) {
        printf("\n=== Menu Driven String Operations ===\n");
        printf("1. Input Strings\n");
        printf("2. Display Strings\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Length of Strings\n");
        printf("6. Copy String\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
            printf("Strings stored successfully!\n");
        }
        else if (choice == 2) {
            printf("String 1: %s\n", str1);
            printf("String 2: %s\n", str2);
        }
        else if (choice == 3) {
            strcpy(result, str1);
            strcat(result, str2);
            printf("Concatenated String: %s\n", result);
        }
        else if (choice == 4) {
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
        }
        else if (choice == 5) {
            printf("Length of String 1: %d\n", (int)strlen(str1));
            printf("Length of String 2: %d\n", (int)strlen(str2));
        }
        else if (choice == 6) {
            strcpy(result, str1);
            printf("Copied String: %s\n", result);
        }
        else if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
