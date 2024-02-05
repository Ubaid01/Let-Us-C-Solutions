#include<stdio.h>

int factorial ( int x ) { 
    int f = 1, i ; 
    for ( i = x ; i >= 1 ; i-- ) 
        f = f * i ; 
    return ( f ) ; 
}

int rec ( int x ) { // Function which calls itself
    int f ; 
    if ( x == 1 ) // Base-condition
        return ( 1 ) ; 
    else 
        f = x * rec ( x - 1 ) ; 
    return ( f ) ; 
} 

int main(){
    int a, fact ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%d", &a ) ; 
    fact = factorial ( a ) ; 
    printf ( "Factorial Using Loops = %d", fact ) ; 
    printf ("\nFactorial Using Recursion = %d", rec( a ) ) ; 
    return 0;
}
