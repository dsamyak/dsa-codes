#include <stdio.h>
#include <string.h>

// Define a structure for the bank account
typedef struct {
    char name[50];
    int accountNumber;
    float balance;
} BankAccount;

// Function to display account details
void displayAccount(BankAccount account) {
    printf("\nAccount Details:\n");
    printf("Name: %s\n", account.name);
    printf("Account Number: %d\n", account.accountNumber);
    printf("Balance: %.2f\n", account.balance);
}

// Function to deposit money
void deposit(BankAccount *account, float amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("\nDeposit Successful! New Balance: %.2f\n", account->balance);
    } else {
        printf("\nInvalid deposit amount.\n");
    }
}

// Function to withdraw money
void withdraw(BankAccount *account, float amount) {
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("\nWithdrawal Successful! New Balance: %.2f\n", account->balance);
    } else if (amount > account->balance) {
        printf("\nInsufficient balance.\n");
    } else {
        printf("\nInvalid withdrawal amount.\n");
    }
}

int main() {
    BankAccount account;
    int choice;
    float amount;

    // Initialize account
    printf("Enter account holder's name: ");
    fgets(account.name, sizeof(account.name), stdin);
    account.name[strcspn(account.name, "\n")] = '\0'; // Remove newline character
    printf("Enter account number: ");
    scanf("%d", &account.accountNumber);
    printf("Enter initial balance: ");
    scanf("%f", &account.balance);

    // Menu-driven system
    do {
        printf("\nBanking System Menu:\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAccount(account);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&account, amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;
            case 4:
                printf("\nThank you for using the Banking System!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

