// WAP TO CREATE INVENTORY MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int count = 0;
    int choice, i, id;

    while (1) {
        printf("\n=== Inventory Management System ===\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Item ID: ");
            scanf("%d", &inventory[count].id);
            printf("Enter Item Name: ");
            scanf(" %[^\n]", inventory[count].name);
            printf("Enter Quantity: ");
            scanf("%d", &inventory[count].quantity);
            printf("Enter Price: ");
            scanf("%f", &inventory[count].price);
            count++;
            printf("Item added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Inventory List ---\n");
            for (i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                       inventory[i].id,
                       inventory[i].name,
                       inventory[i].quantity,
                       inventory[i].price);
            }
        }
        else if (choice == 3) {
            printf("Enter Item ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (inventory[i].id == id) {
                    printf("Item Found: %s | Quantity: %d | Price: %.2f\n",
                           inventory[i].name,
                           inventory[i].quantity,
                           inventory[i].price);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Item not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Item ID to update: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (inventory[i].id == id) {
                    printf("Enter new quantity: ");
                    scanf("%d", &inventory[i].quantity);
                    printf("Quantity updated!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Item not found!\n");
            }
        }
        else if (choice == 5) {
            printf("Enter Item ID to delete: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (inventory[i].id == id) {
                    printf("Item %s deleted!\n", inventory[i].name);
                    // Shift remaining items
                    for (int j = i; j < count - 1; j++) {
                        inventory[j] = inventory[j + 1];
                    }
                    count--;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Item not found!\n");
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
