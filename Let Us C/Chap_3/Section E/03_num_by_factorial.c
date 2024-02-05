// First-Way (With Correction)
#include<stdio.h>


int main(){
    int num; // No-need of long long as we have to do till 7!
    double fact = 1; 
    double sum = 0.0;

    for (num = 1; num <= 7; num++) {
        fact *= num; 
        sum += num / fact; // 1 int and 1 double so answer will be double
    }

    printf("Sum of first 7 numbers divided by respective factorial is %.3lf", sum);
    return 0;
}

// Second-Way (More precise as recursion used)
// #include<stdio.h>

// int fact(int n){
//     if(n==0 || n==1)
//         return 1;
//     else
//         return n * fact(n-1) ;
// }
// int main(){
//     double sum = 0;

//     for(int n=1; n<=7; n++){
//         sum += (double) n / fact(n); // Type-casted so didn't dropped to previous integer as both are integer 
//     }

//     printf("Sum of first 7 numbers divided by respective factorial is %.3lf", sum);
    
//     return 0;
// }