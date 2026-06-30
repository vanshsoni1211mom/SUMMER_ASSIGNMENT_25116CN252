// WAP TO CREATE STUDENT RECORD SYSTEM USING STRING AND ARRAY
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    char course[50];
    int marks;
};

int main() {
    struct Student students[100];
    int count = 0;
    int choice, i, rollNo;

    while (1) {
        printf("\n=== Student Record System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll Number: ");
            scanf("%d", &students[count].rollNo);
            printf("Enter Name: ");
            scanf(" %[^\n]", students[count].name);
            printf("Enter Course: ");
            scanf(" %[^\n]", students[count].course);
            printf("Enter Marks: ");
            scanf("%d", &students[count].marks);
            count++;
            printf("Student added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Student List ---\n");
            for (i = 0; i < count; i++) {
                printf("Roll No: %d | Name: %s | Course: %s | Marks: %d\n",
                       students[i].rollNo,
                       students[i].name,
                       students[i].course,
                       students[i].marks);
            }
        }
        else if (choice == 3) {
            printf("Enter Roll Number to search: ");
            scanf("%d", &rollNo);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (students[i].rollNo == rollNo) {
                    printf("Student Found: %s | Course: %s | Marks: %d\n",
                           students[i].name,
                           students[i].course,
                           students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Student not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Roll Number to update marks: ");
            scanf("%d", &rollNo);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (students[i].rollNo == rollNo) {
                    printf("Enter new marks: ");
                    scanf("%d", &students[i].marks);
                    printf("Marks updated!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Student not found!\n");
            }
        }
        else if (choice == 5) {
            printf("Enter Roll Number to delete: ");
            scanf("%d", &rollNo);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (students[i].rollNo == rollNo) {
                    printf("Student %s deleted!\n", students[i].name);
                    // Shift remaining students
                    for (int j = i; j < count - 1; j++) {
                        students[j] = students[j + 1];
                    }
                    count--;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Student not found!\n");
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
