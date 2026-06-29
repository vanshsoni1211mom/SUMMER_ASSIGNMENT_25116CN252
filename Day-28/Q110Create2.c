// WAP TO CREATE BANK ACCOUNT SYSTEM
#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account accounts[100];
    int count = 0;
    int choice, i, accNo;
    float amount;

    while (1) {
        printf("\n=== Bank Account System ===\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Account Number: ");
            scanf("%d", &accounts[count].accNo);
            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", accounts[count].name);
            accounts[count].balance = 0;
            count++;
            printf("Account created successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Account List ---\n");
            for (i = 0; i < count; i++) {
                printf("AccNo: %d | Name: %s | Balance: %.2f\n",
                       accounts[i].accNo,
                       accounts[i].name,
                       accounts[i].balance);
            }
        }
        else if (choice == 3) {
            printf("Enter Account Number: ");
            scanf("%d", &accNo);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (accounts[i].accNo == accNo) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    accounts[i].balance += amount;
                    printf("Deposit successful!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Account not found!\n");
            }
        }
        else if (choice == 4) {
            printf("Enter Account Number: ");
            scanf("%d", &accNo);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (accounts[i].accNo == accNo) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount <= accounts[i].balance) {
                        accounts[i].balance -= amount;
                        printf("Withdrawal successful!\n");
                    } else {
                        printf("Insufficient balance!\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Account not found!\n");
            }
        }
        else if (choice == 5) {
            printf("Enter Account Number: ");
            scanf("%d", &accNo);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (accounts[i].accNo == accNo) {
                    printf("Balance for %s: %.2f\n", accounts[i].name, accounts[i].balance);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Account not found!\n");
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
