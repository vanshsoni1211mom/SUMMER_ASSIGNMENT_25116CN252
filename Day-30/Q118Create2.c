// WAP TO CREATE INI LIBRARY SYSTEM
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

int main() {
    struct Book library[100];
    int count = 0;
    int choice, i, id;

    while (1) {
        printf("\n=== Mini Library System ===\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Book Title: ");
            scanf(" %[^\n]", library[count].title);
            printf("Enter Author Name: ");
            scanf(" %[^\n]", library[count].author);
            library[count].available = 1;
            count++;
            printf("Book added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (i = 0; i < count; i++) {
                printf("ID: %d | Title: %s | Author: %s | %s\n",
                       library[i].id,
                       library[i].title,
                       library[i].author,
                       library[i].available ? "Available" : "Issued");
            }
        }
        else if (choice == 3) {
            printf("Enter Book ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (library[i].id == id) {
                    printf("Book Found: %s by %s (%s)\n",
                           library[i].title,
                           library[i].author,
                           library[i].available ? "Available" : "Issued");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (library[i].id == id) {
                    if (library[i].available) {
                        library[i].available = 0;
                        printf("Book issued successfully!\n");
                    } else {
                        printf("Book already issued!\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found!\n");
            }
        }
        else if (choice == 5) {
            printf("Enter Book ID to return: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (library[i].id == id) {
                    if (!library[i].available) {
                        library[i].available = 1;
                        printf("Book returned successfully!\n");
                    } else {
                        printf("Book was not issued!\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found!\n");
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
