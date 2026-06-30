// WAP TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee employees[100];
    int count = 0;
    int choice, i, id;

    while (1) {
        printf("\n=== Mini Employee Management System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Employee ID: ");
            scanf("%d", &employees[count].id);
            printf("Enter Name: ");
            scanf(" %[^\n]", employees[count].name);
            printf("Enter Department: ");
            scanf(" %[^\n]", employees[count].department);
            printf("Enter Salary: ");
            scanf("%f", &employees[count].salary);
            count++;
            printf("Employee added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Employee List ---\n");
            for (i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                       employees[i].id,
                       employees[i].name,
                       employees[i].department,
                       employees[i].salary);
            }
        }
        else if (choice == 3) {
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    printf("Employee Found: %s | Dept: %s | Salary: %.2f\n",
                           employees[i].name,
                           employees[i].department,
                           employees[i].salary);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Employee not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Employee ID to update salary: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    printf("Enter new salary: ");
                    scanf("%f", &employees[i].salary);
                    printf("Salary updated!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Employee not found!\n");
            }
        }
        else if (choice == 5) {
            printf("Enter Employee ID to delete: ");
            scanf("%d", &id);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    printf("Employee %s deleted!\n", employees[i].name);
                    // Shift remaining employees
                    for (int j = i; j < count - 1; j++) {
                        employees[j] = employees[j + 1];
                    }
                    count--;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Employee not found!\n");
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
