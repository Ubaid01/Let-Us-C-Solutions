#include<stdio.h>
#include<math.h>

long long int fact(int n){ // As factorial gets bigger than range of int at n > 15 so use lld
    if(n == 0 || n == 1)
        return 1 ;
    else
        return n * fact(n - 1) ; // As factorial is muliplying from previous number till 1 ( stack like )
}
int main(){
    int n;
    printf("Enter your +ve whole number: ");
    scanf("%d", &n) ;
    if( floor ( n ) >= 0 )
        printf("Factorial of %d = %lld", n , fact(n) );
    else
        printf("Invalid number!");
    return 0;
}