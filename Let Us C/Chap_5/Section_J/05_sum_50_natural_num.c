#include<stdio.h>

int sumFirst_50_NaturalNums(int n){
    if(n == 0)
        return 0 ;
    else
        return n + sumFirst_50_NaturalNums( n - 1 ) ;
}
int main(){
    int n ;
    printf("Enter a range for sum of Natural number starting from 1: ") ;
    scanf("%d", &n ); 

    if(n  <  0){
        printf("Invalid range.\n\t Try Again!\n") ;
        return 1 ;
    }

    printf("Running sum of the first 50 natural numbers: %d\n", sumFirst_50_NaturalNums( n ) ) ;
    return 0;
}