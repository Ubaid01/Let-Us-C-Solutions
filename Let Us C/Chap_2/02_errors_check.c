#include<stdio.h>

int main(){

    // float a = 12.25, b = 12.52 ; 
    // if ( a = b ) // Assignment operator is used instead of relational operator (==) in if-condition
    // printf ( "\na and b are equal" ) ;
    
 
    // int j = 10, k = 12 ; 
    // if ( k >= j ) 
    //     { 
    //         { // Extra delimiters can be removed which will have no impact on outcome
    //         k = j ; 
    //         j = k ; 
    //         } 
    //     } 
    // printf("%d  %d", j, k);


    // if ( 'X' < 'x' ) // Since the ascii value of X=88 that of x = 120 so the condition will be true
    // printf ( "\nascii value of X is smaller than that of x" ) ; 


    // int x = 10 ; 
    // // if ( x >= 2 ) then  // No need to use then just use the delimiters or for single-statement you can write without it also
    // if( x >= 2 )
    // printf ( "\n%d", x ) ; 


    // int x = 10 ; 
    // if x >= 2 // Brackets not used for defining if-condition
    // printf ( "\n%d", x ) ; 

    //  int x = 10, y = 15 ; 
    // // if ( x % 2 = y % 3 ) // Assignment operator is used instead of relational operator (==) in if-condition
    // if( x % 2 == y % 3)
    // printf ( "\nCarpathians" ) ; 

    // int x = 30 , y = 40 ; 
    // if ( x == y ) 
    //     printf( "x is equal to y" ) ; 
    // else if ( x > y ) 
    //     printf( "x is greater than y" ) ; 
    // //elseif ( x < y ) // No gap is left between else and if Right way to write is else if(condition) 
    //     printf( "x is less than y" ) ; 


    // int x = 10 ; 
    // // if ( x >= 2 ) then // No need to use then just use the delimiters or for single-statement you can write without it also
    // if( x >= 2 )
    // printf ( "\n%d", x ) ; 

    int a, b ; 
    scanf ( "%d %d",a, b ) ; 
    // if ( a > b ) ; // There is a statement terminator in end of if-condition so there wil be no if-block and else can't exist without if-statement
    if( a > b)
    printf ( "This is a game" ) ; 
    else 
    printf ( "You have to play it" ) ; 

    return 0;
}