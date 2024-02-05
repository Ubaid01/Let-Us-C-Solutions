#include<stdio.h>

int main(){
    /* This program 
/* is an example of 
/* using Logical operators */ 

    // int i = 2, j = 5 ; 
    // if ( i == 2 && j == 5 ) // As both conditions are True(1) so 1 && 1 => 1 and if-block will execute
    //     printf ( "\nSatisfied at last" ) ; 

    // int code, flag ; // Variables not initialized and correct operator not used i.e. &&
    // if ( code == 1 & flag == 0 ) 
    //     printf ( "\nThe eagle has landed" ) ; 

    // char spy = 'a', password = 'z' ; 
    // if ( spy == 'a' || password == 'z' ) // correct logical-operator not used i.e || instead of or
    //     printf ( "\nAll the birds are safe in the nest" ) ; 

    // int i = 20, j = 10 ; 
    // // if ( i = 5 ) && if ( j = 10 ) // Wrong syntax as AND-operator can be used in one if-condition b/w variables and use relational operator (==) instead of assignment operator(=)
    // // if(i== 5 && j = 10)// This can also work BUT (i==5 && j=5) not works as left operand shoud be rightly initialized
    // if( i==5 && j==10)
    //     printf ( "\nHave a nice day" ) ; 

    //     int x = 10 , y = 20; 
    // if ( x >= 2 && y <=50 ) // correct logical-operator not used i.e. && instead of and
    //     printf ( "\n%d", x ) ;


    // int a, b ; 
    // if ( a == 1 & b == 0 ) // Use logical opearator &&
    // // single & is a bit-wise operator (which works on bits 1,0 rather than True,False) while && is logical operator
    //     printf ( "\nGod is Great" ) ; 


    // int x = 2; 
    // if ( x == 2 && x != 0 ) ; // Statement terminator used after if-condition which will not run if-block even though condition is True
    // { 
    //    printf ( "\nHi" ) ; 
    //    printf( "\nHello" ) ; 
    // } 
    // else 
    //    printf( "Bye" ) ; 


    int i = 10, j = 10 ; 
    if ( i && j == 10)  // No Error will print if-block as condition is True
    printf ( "\nHave a nice day" ) ; 

    return 0;
}