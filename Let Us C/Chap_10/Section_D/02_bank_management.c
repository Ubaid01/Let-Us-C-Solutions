#include <stdio.h>
#include <string.h>

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

// Function to print account number and name of customers with balance below Rs. 100
void printCustomersWithLowBalance(struct Customer customers[], int size) {
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance < 100.0) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

// Function to perform withdrawal or deposit and display appropriate messages
void transaction(struct Customer customers[], int size, int accountNo, float amount, int code) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (customers[i].accountNumber == accountNo) {
            found = 1;
            if (code == 1) { // Deposit
                customers[i].balance += amount;
                printf("Deposit of Rs. %.2f successful. New balance for Account Number %d: Rs. %.2f\n", amount, accountNo, customers[i].balance);
            } else if (code == 0) { // Withdrawal
                if (customers[i].balance >= amount) {
                    customers[i].balance -= amount;
                    printf("Withdrawal of Rs. %.2f successful. New balance for Account Number %d: Rs. %.2f\n", amount, accountNo, customers[i].balance);
                } else {
                    printf("The balance is insufficient for the specified withdrawal for %s.\n", customers[i].name) ;
                }
            } else {
                printf("Invalid transaction code. Use 1 for deposit or 0 for withdrawal.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("Customer with Account Number %d not found.\n", accountNo);
    }
}

int main() {
    struct Customer customers[200];

    // Sample data initialization
    customers[0] = (struct Customer){ 1001, "Alice", 150.0 };
    customers[1] = (struct Customer){ 1002, "Bob", 80.0 };
    customers[2] = (struct Customer){ 1003, "Charlie", 120.0 };
    // Add more customers...

    int numberOfCustomers = 3; // Number of customers in the bank

    // Example usage of functions
    printCustomersWithLowBalance(customers, numberOfCustomers); // Print customers with balance below Rs. 100
    printf("\n");

    // Example transactions
    transaction(customers, numberOfCustomers, 1002, 90.0, 0); // Withdrawal of Rs. 50 for Account Number 1002
    transaction(customers, numberOfCustomers, 1003, 200.0, 1); // Deposit of Rs. 200 for Account Number 1003

    return 0;
}
