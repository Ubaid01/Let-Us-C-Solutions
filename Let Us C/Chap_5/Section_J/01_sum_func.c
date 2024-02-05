#include<stdio.h>

int sumFunc( int num ){
    int sum = 0 ;
    while(num > 0){
        int digit = num % 10 ;
        sum += digit ;
        num = num / 10 ;
    }
    return sum ;
}

int sumRec( int num ){
    if(num == 0)
        return 0 ;
    else
        return (num % 10) + sumRec(num / 10) ; // Sum last digit with the remaining digits all till n = 0
}

int main(){
    int n ;
    printf("Enter a 5-digit +ve number: ") ;
    scanf("%d", &n ) ;

    if(n < 10000 || n > 99999){
        printf("Invalid number.\n\t Try Again!\n") ;
        return 1 ;
    }

    printf("Sum of digits without recursion: %d\n", sumFunc(n) );
    printf("Sum of digits using recursion: %d\n", sumRec(n) );

    return 0;
}