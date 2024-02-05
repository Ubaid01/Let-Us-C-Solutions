#include<stdio.h>

int main(){
    int hours;

    for(int i=0 ; i < 10; i++){
        printf("Enter the number of hours worked(weekly) for Employee %d: ", i+1);
        scanf("%d", &hours);

        int pay = 0;
        if(hours > 40){
            pay = 12 * (hours - 40); // As it is 12 Rs per hour exceeded than 40
            printf("Employee %d's overtime salary is %dRs\n", i+1, pay);
        }
        else
            printf("No overtime salary for Employee %d!\n", i+1);
    }
    return 0;
}