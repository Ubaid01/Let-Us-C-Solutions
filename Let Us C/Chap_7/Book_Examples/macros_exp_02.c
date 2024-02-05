#include<stdio.h>

// Can use macros for operators.
#define AND && 
#define OR || 

// Can use macros for conditional.
#define ARANGE ( a > 25 AND a < 50 )

// Can use macros to replace OR print a statement.
#define FOUND printf ( "\nThe Yankee Doodle Virus." ) ;

int main(){
    int f = 1, x = 4, y = 90 ; 
    if ( ( f < 5 ) AND ( x <= 20 OR y <= 45 ) ) // ( 1 ) && ( 1 || 0 )
        printf ( "\nYour PC will always work fine..." ) ; 
    else 
        printf ( "\nIn front of the maintenance man" ) ;

    int a = 30 ; 
    if ( ARANGE ) 
        printf ( "\nwithin range" ) ; 
    else 
        printf ( "\nout of range" ) ;

    FOUND  // Macros can also work without statement terminator but better to use then for better code read-abitlity.

    return 0;
}