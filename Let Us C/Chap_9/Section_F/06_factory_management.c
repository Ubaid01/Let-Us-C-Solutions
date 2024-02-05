#include<stdio.h>

#define DIVISIONS 3
#define PRODUCTS 4
#define MAX_TRANSACTIONS 100 // Maximum number of transactions

// Structure to represent a transaction
struct Transaction {
    int division;  // Division number (1, 2, or 3)
    int productID; // Product ID (1 to 4)
    int quantity;  // Quantity of products received
    double costPerItem; // Cost per item
};

// Function to update inventory based on a transaction
void updateInventory(struct Transaction transaction, int inventory[DIVISIONS][PRODUCTS]) {
    inventory[transaction.division - 1][transaction.productID - 1] += transaction.quantity;
}

// Function to calculate total inventory value
double calculateTotalValue(int inventory[DIVISIONS][PRODUCTS], double costPerItem[PRODUCTS]) {
    double totalValue = 0.0;
    for (int i = 0; i < DIVISIONS; i++) {
        for (int j = 0; j < PRODUCTS; j++) {
            totalValue += inventory[i][j] * costPerItem[j];
        }
    }
    return totalValue;
}

int main() {
    // Sample inventory and cost per item
    int inventory[DIVISIONS][PRODUCTS] = {0}; // Initialize inventory to zero

    // Input cost per item for each product
    double costPerItem[PRODUCTS] ;
    printf("Enter cost per item for each product:\n");
    for (int i = 0; i < PRODUCTS; i++) {
        printf("Enter cost for product %d: ", i + 1);
        scanf("%lf", &costPerItem[i]);
    }

    struct Transaction transactions[MAX_TRANSACTIONS];
    int numTransactions;

    printf("Enter number of transactions: ");
    scanf("%d", &numTransactions);

    // Input transactions
    for (int i = 0; i < numTransactions; i++) {
        printf("Enter transaction details (Division Product Quantity CostPerItem): ");
        scanf("%d %d %d %lf", &transactions[i].division, &transactions[i].productID,
              &transactions[i].quantity, &transactions[i].costPerItem);

        updateInventory(transactions[i], inventory);
    }

    // Calculate total inventory value
    double totalValue = calculateTotalValue(inventory, costPerItem);
    printf("Total inventory value: %.2lf\n", totalValue);

    return 0;
}
