#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &num);

    // My way
    // printf("Notes of 10 rupees withdrawn are %d\n",num / 10);
    // printf("Notes of 50 rupees withdrawn are %d\n",num / 50);
    // printf("Notes of 100 rupees withdrawn are %d\n",num / 100);

    // Correction
    printf("Required notes of Rs. 100  :  %d\n", num / 100);
    // e.g. if amount entered is 987 then 987 / 100 will answer 9 (because amount is an intiger variable) 
    printf("Required notes of Rs. 50   :  %d\n", (num % 100) / 50);
    //e.g. 987 % 100 will answer 87 and then 87 / 50 will answer 1.
    printf("Required notes of Rs. 10   :  %d\n", (((num % 100) % 50) / 10));
    printf("Amount still remaining Rs. :  %d\n", (((num % 100) % 50) % 10));
    getch();
    return 0;
}