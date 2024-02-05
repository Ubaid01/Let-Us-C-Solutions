#include<stdio.h>

int main(){
    long long int num, fact = 1; // Long long int used so that it works for large factorials also like 15+
    printf("Enter your number: ");
    scanf("%lld", &num);

    for(int i = 1; i <=num; i++){
        if(num ==0 || num ==1)
            break; // break immediately so less memory used
        else{
            fact *= i;
        }
    }

    printf("Factorial of %lld = %lld", num, fact);
    return 0;
}