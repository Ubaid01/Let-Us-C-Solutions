#include<stdio.h>

int main(){
    int num, i ; 
    printf ( "Enter a number " ) ; 
    scanf ( "%d", &num ) ; 
    i = 2 ; 
    while ( i <= num - 1 ) 
    { 
        if ( num % i == 0 ) 
        { 
            printf ( "Not a prime number" ) ; 
            break ; 
        } 
    i++ ; 
    }
    if ( i == num ) // When loop exits and no divisible found so i will become = num and print Prime
    printf ( "Prime number" ) ;
    return 0;
}