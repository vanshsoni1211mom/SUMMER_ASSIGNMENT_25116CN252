// WAP TO DEVELOP MINI PROJECT USING ARRAYS , STRING AND FUNCTIONS
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    char course[50];
    int marks;
};

struct Student students[100];
int count = 0;

// Function to add student
void addStudent() {
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

// Function to display all students
void displayStudents() {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d | Name: %s | Course: %s | Marks: %d\n",
               students[i].rollNo,
               students[i].name,
               students[i].course,
               students[i].marks);
    }
}

// Function to search student by roll number
void searchStudent() {
    int rollNo, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &rollNo);
    for (int i = 0; i < count; i++) {
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

// Function to update marks
void updateMarks() {
    int rollNo, found = 0;
    printf("Enter Roll Number to update marks: ");
    scanf("%d", &rollNo);
    for (int i = 0; i < count; i++) {
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

// Function to delete student
void deleteStudent() {
    int rollNo, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &rollNo);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Student %s deleted!\n", students[i].name);
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

int main() {
    int choice;

    while (1) {
        printf("\n=== Student Record System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting program...\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
