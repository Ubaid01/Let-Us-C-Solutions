#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, costPrice, oneItemCostPrice;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &totalProfit);

    costPrice = totalSellingPrice - totalProfit;
    oneItemCostPrice = costPrice / 15;
    printf("Cost price of one item is: %.2f\n", oneItemCostPrice);

    return 0;
}
