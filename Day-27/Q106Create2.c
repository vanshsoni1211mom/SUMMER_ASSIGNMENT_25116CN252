// WAP TO CREATE EMPLOYEE MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee e[50];
    int n = 0;   // number of employees
    int choice, i, id, found;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter employee ID: ");
                scanf("%d", &e[n].id);
                printf("Enter name: ");
                scanf("%s", e[n].name);   // simple input, no spaces
                printf("Enter age: ");
                scanf("%d", &e[n].age);
                printf("Enter salary: ");
                scanf("%f", &e[n].salary);
                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\n--- Employee List ---\n");
                for(i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Age: %d, Salary: %.2f\n",
                           e[i].id, e[i].name, e[i].age, e[i].salary);
                }
                break;

            case 3:
                printf("Enter employee ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(e[i].id == id) {
                        printf("Record found!\n");
                        printf("ID: %d, Name: %s, Age: %d, Salary: %.2f\n",
                               e[i].id, e[i].name, e[i].age, e[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No employee found with ID %d\n", id);
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
