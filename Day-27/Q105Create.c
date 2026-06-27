// WAP TO CREATE STUDENT RECORD MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s[50];
    int n = 0;   // number of students
    int choice, i, roll, found;

    do {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter roll number: ");
                scanf("%d", &s[n].roll);
                printf("Enter name: ");
                scanf("%s", s[n].name);   // simple input, no spaces
                printf("Enter age: ");
                scanf("%d", &s[n].age);
                printf("Enter marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\n--- Student List ---\n");
                for(i = 0; i < n; i++) {
                    printf("Roll: %d, Name: %s, Age: %d, Marks: %.2f\n",
                           s[i].roll, s[i].name, s[i].age, s[i].marks);
                }
                break;

            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(s[i].roll == roll) {
                        printf("Record found!\n");
                        printf("Roll: %d, Name: %s, Age: %d, Marks: %.2f\n",
                               s[i].roll, s[i].name, s[i].age, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No student found with roll number %d\n", roll);
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
