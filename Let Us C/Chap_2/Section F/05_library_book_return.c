#include<stdio.h>

int main(){
    int days;
    printf("Enter  the number of days the member is late to return the book: ");
    scanf("%d", &days);
    float price;
    printf("Enter the price of book: ");
    scanf("%f", &price);

    if(days <= 5 && days > 0)
        printf("50 paise penalty!\n Now return price is %.2f", price + 0.50);
    else if(days > 5 && days <=10)
        printf("1 rupee penalty!\n Now return price is %.2f", price + 1.00);
    else if(days > 10 && days <=30)
        printf("5 rupee penalty!\n Now return price is %.2f", price + 5.00);
    else if(days <= 0)
        printf("Enter valid days!");
    else
        printf("Sorry! Your membership is cancelled\n Kindly Return the book");
    return 0;
}