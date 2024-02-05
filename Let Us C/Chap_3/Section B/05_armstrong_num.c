#include<stdio.h>

int main(){

    for(int i = 1; i<=500 ; i++){ // Range
        int Arm_num = 0 ; // Initialize to 0 as we have to store value
        int num = i; // Store i in another as we have to work on it so it will keep changing and can exit for-loop

        while(num != 0){
            int rem = num % 10;
            Arm_num += rem * rem * rem;
            num /= 10;
        }

        if(i == Arm_num)
        printf("%d is an Armstrong number.\n", i);
    }   
    return 0;
}