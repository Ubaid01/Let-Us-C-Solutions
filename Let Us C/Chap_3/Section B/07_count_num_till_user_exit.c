#include<stdio.h>

int main(){
    int n, zeros, neg, positive;
    positive = neg = zeros = 0; // Initialize all to 0
    printf("Enter how many numbers you want to enter: \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int num;
        printf("Enter your number: ");
        scanf("%d", &num);
        if(num > 0)
            positive++ ;
        else if(num < 0)
            neg++ ;
        else    
            zeros++ ;
    }

    printf("Number of +ve digits were = %d\n", positive);
    printf("Number of -ve digits were = %d\n", neg);
    printf("Number of Zeros were = %d\n", zeros);
    return 0;
    // OR can use do-while also for 
    // printf("Do you want to enter another number? (y/n): ");
    //     scanf(" %c", &choice);
    // } while (choice == 'y' || choice == 'Y');
}