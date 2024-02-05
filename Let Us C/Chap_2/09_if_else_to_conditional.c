#include<stdio.h>

int main(){

    int x, min, max ; 
    scanf ( "\n%d %d", &max, &x ) ; 
    // if ( x > max ) 
    // max = x ; 
    // else 
    // min = x ; 

    // x > max ? ( max = x ): ( min = x ) ; // If use 2 or more values(operators) in > and : always use brackets

    max = (x > max) ? x : max;
    min = (x > max) ? min : x; // More-accurate
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);


    // int code ; 
    // scanf ( "%d", &code ) ;

    // if ( code > 1 ) 
    // printf ( "\nJerusalem" ) ; 
    // else // Main if-else
    // if ( code < 1 ) 
    // printf ( "\nEddie" ) ; 
    // else  // Sub- else
    // printf ( "\nC Brain" ) ;

    // code > 1 ? printf( "\nJerusalem" ) : (code < 1 ? printf( "\nEddie" ) : printf(" \nC Brain ") ); 


    // float sal ; 
    // printf ("Enter the salary" ) ; 
    // scanf ( "%f", &sal ) ; 
    // if ( sal < 40000 && sal >= 25000 ) 
    // printf ( "Manager\n" ) ; 
    // else // Main - else
    // if ( sal < 25000 && sal >= 15000 ) 
    // printf ( "Accountant\n" ) ; 
    // else // Sub - else
    // printf ( "Clerk\n" ) ; 

    // ( sal < 40000 && sal >= 25000 ) ? printf(" Manager ") : (( sal < 25000 && sal >= 15000 ) ? printf(" Accountant ") : printf(" Clerk ")); 

    return 0;
}