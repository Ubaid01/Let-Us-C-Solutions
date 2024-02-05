#include<stdio.h>

int main(){
    float cost, sell;
    printf("Enter the cost and selling price of your product: ");
    scanf(" %f %f", &cost, &sell);

    float final = sell - cost;
    if(final > 0){
        printf("Your profit is of %.2f", final);
    }
    else if( final < 0){
        printf("You incurred a loss of %.2f", -final); //-ve sign introduced cause we have to show loss in +ve also as the word loss is mentioned
    } 
    else if (final == 0){
        printf("No Profit or loss incurred");
    }  
    return 0;
}