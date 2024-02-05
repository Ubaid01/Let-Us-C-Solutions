#include <stdio.h>

int main() {
    int inStock, hasOrder;
    char hasCredit;
    printf("Enter the quantity in stock: ");
    scanf("%d", &inStock);
    printf("Enter the customer's order quantity: ");
    scanf("%d", &hasOrder);
    printf("Is the customer's credit OK? (Y for Yes, N for No): ");
    scanf(" %c", &hasCredit);

    // Implement the company policy
    if (hasOrder <= inStock && hasCredit == 'Y') {
        printf("Supply the customer's full order.\n");
    } else if (hasCredit == 'N') {
        printf("Do not supply. Send intimation to the customer.\n"); // intimation means inform, hint
    } else if (hasCredit == 'Y' && hasOrder > inStock) {
        printf("Supply is short on stocks. Send intimation that the balance will be shipped.\n");
    } else {
        printf("Invalid input or conditions not met.\n");
    }

    return 0;
}
