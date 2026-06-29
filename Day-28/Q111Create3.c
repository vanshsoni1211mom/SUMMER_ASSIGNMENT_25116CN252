// WAP TO CREATE TICKET BOOKING SYSTEM
#include <stdio.h>
#include <string.h>

struct Ticket {
    int id;
    char name[50];
    char movie[50];
    int seats;
};

int main() {
    struct Ticket tickets[100];
    int count = 0;
    int choice, i, id;

    while (1) {
        printf("\n=== Ticket Booking System ===\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket by ID\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Ticket ID: ");
            scanf("%d", &tickets[count].id);
            printf("Enter Your Name: ");
            scanf(" %[^\n]", tickets[count].name);
            printf("Enter Movie Name: ");
            scanf(" %[^\n]", tickets[count].movie);
            printf("Enter Number of Seats: ");
            scanf("%d", &tickets[count].seats);
            count++;
            printf("Ticket booked successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Ticket List ---\n");
            for (i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Movie: %s | Seats: %d\n",
                       tickets[i].id,
                       tickets[i].name,
                       tickets[i].movie,
                       tickets[i].seats);
            }
        }
        else if (choice == 3) {
            printf("Enter Ticket ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (tickets[i].id == id) {
                    printf("Ticket Found: %s booked %d seat(s) for %s\n",
                           tickets[i].name,
                           tickets[i].seats,
                           tickets[i].movie);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Ticket not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Ticket ID to cancel: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (tickets[i].id == id) {
                    printf("Ticket for %s cancelled!\n", tickets[i].name);
                    // Shift remaining tickets
                    for (int j = i; j < count - 1; j++) {
                        tickets[j] = tickets[j + 1];
                    }
                    count--;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Ticket not found!\n");
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
