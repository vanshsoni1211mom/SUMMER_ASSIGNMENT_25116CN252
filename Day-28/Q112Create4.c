// WAP TO CREATE CONTACT MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[20];
    char email[50];
};

int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice, i, id;

    while (1) {
        printf("\n=== Contact Management System ===\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Contact ID: ");
            scanf("%d", &contacts[count].id);
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[count].name);
            printf("Enter Phone Number: ");
            scanf(" %[^\n]", contacts[count].phone);
            printf("Enter Email: ");
            scanf(" %[^\n]", contacts[count].email);
            count++;
            printf("Contact added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Contact List ---\n");
            for (i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                       contacts[i].id,
                       contacts[i].name,
                       contacts[i].phone,
                       contacts[i].email);
            }
        }
        else if (choice == 3) {
            printf("Enter Contact ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (contacts[i].id == id) {
                    printf("Contact Found: %s | Phone: %s | Email: %s\n",
                           contacts[i].name,
                           contacts[i].phone,
                           contacts[i].email);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Contact not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Contact ID to delete: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (contacts[i].id == id) {
                    printf("Contact %s deleted!\n", contacts[i].name);
                    // Shift remaining contacts
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Contact not found!\n");
            }
        }
        else if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
