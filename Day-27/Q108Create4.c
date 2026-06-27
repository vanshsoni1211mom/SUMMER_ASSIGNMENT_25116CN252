// WAP  TO CREATE MARKSHEET GENERATION SYSTEM
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];   // marks for 5 subjects
    int total;
    float percentage;
};

int main() {
    struct Student s[50];
    int n = 0;   // number of students
    int choice, i, j;

    do {
        printf("\n--- Marksheet Generation System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Generate Marksheet\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter roll number: ");
                scanf("%d", &s[n].roll);
                printf("Enter name: ");
                scanf("%s", s[n].name);   // simple input, no spaces
                s[n].total = 0;
                for(j = 0; j < 5; j++) {
                    printf("Enter marks for subject %d: ", j+1);
                    scanf("%d", &s[n].marks[j]);
                    s[n].total += s[n].marks[j];
                }
                s[n].percentage = s[n].total / 5.0;
                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\n--- Student List ---\n");
                for(i = 0; i < n; i++) {
                    printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
                }
                break;

            case 3:
                printf("\n--- Marksheet ---\n");
                for(i = 0; i < n; i++) {
                    printf("\nRoll: %d, Name: %s\n", s[i].roll, s[i].name);
                    printf("Marks: ");
                    for(j = 0; j < 5; j++) {
                        printf("%d ", s[i].marks[j]);
                    }
                    printf("\nTotal: %d\n", s[i].total);
                    printf("Percentage: %.2f%%\n", s[i].percentage);

                    if(s[i].percentage >= 60) {
                        printf("Result: First Division\n");
                    } else if(s[i].percentage >= 45) {
                        printf("Result: Second Division\n");
                    } else if(s[i].percentage >= 33) {
                        printf("Result: Third Division\n");
                    } else {
                        printf("Result: Fail\n");
                    }
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
