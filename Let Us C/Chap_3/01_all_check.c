#include<stdio.h>
#include<math.h>

int main(){

    // int j ; 
    // while ( j <= 10 ) //Since j is not initialized so the condition of loop will always be false and the program will exit as it is
    // { 
    //     printf ( "\n%d", j ) ; 
    //     j = j + 1 ; 
    // }

    // int i = 1 ; 
    // while ( i <= 10 ) ; // Since there is a statement terminator so program will not run as then the block will not be part of loop
    // { 
        // printf ( "\n%d", i ) ;
        // i++ ; 
    // } 


    // int j ; 
    // while ( j <= 10 ) // Since j is not initialized so the condition of loop will always be false and the program will exit as it is
    // { 
    //     printf ( "\n%d", j ) ; 
    //     j = j + 1 ; 
    // }


    // int x = 1 ; 
    // while ( x == 1 ) // Since the condition is True so will evaluate x-1 i and then assign it to x
    // { 
    //     x = x - 1 ; 
    //     printf ( "\n%d", x ) ; 
    // } 


    // int x = 1 ; 
    // while ( x == 1 ) // Since the condition is True so will evaluate x-1 i and then assign it to x
    //     x = x - 1 ; // As there are no delimiters so printf will not be part of loop
    // printf ( "\n%d", x ) ; 

    // char x ; 
    // while( x = 0 ; x <= 255 ; x++ ) { // Without delimiters loop will continue running till memory exhaust and while is being treated as for-loop
    // printf ( "\nAscii value %d Character %c", x, x ) ; 
    // }

    // int x = 4, y, z ; 
    // y = --x ; // This program will evaluate from middle first --x then x-- then x
    // z = x-- ; 
    // printf ( "\n%d %d %d", x, y, z ) ; 


    // int x = 4, y = 3, z ; 
    // z = x-- -y ; 
    // printf ( "\n%d %d %d", x, y, z ) ; // As in multiple variables in printf compiler usually starts from right to left so x-- => 4 - 3 => 1 while y = 3 but x is pre-decremented in z so 3

 
    // while ( 'a' < 'b' ) // Since ASCII value of b i.e. 98 is greater than a i.e. 97 so loop will continue on till memory exhaust as no increment/decrement or end-limit given
    // printf ( "\nmalyalam is a palindrome" ) ; 


    // int i = 10 ; 
    // while ( i = 20 ) // Since assignment operator used instead of Relational (==) so condition True and loop will continue on till memory exhause as no increment/decrement or end-limit given
    // printf ( "\nA computer buff!" ) ; 

    // int i ; 
    // while ( i = 10 ) { // Condition is used to initialize i rather than to define end-limit so loop will conitnue on till memory exhausted 
    //     printf ( "\n%d", i ) ; 
    //     i = i + 1 ; 
    // }


    // float x = 1.1 ; 
    // // while ( x == 1.1 ) Since floating-point numbers are not always stored exactly due to their binary representation, which can lead to tiny rounding errors. So condition can lead to False as x will be less than actual to use absolute value with precision
    // while (fabs(x - 1.1) < 0.0001)
    // { 
    //     printf ( "\n%f", x ) ; 
    //     x = x - 0.1 ; 
    // } 


    // while ( '1' < '2' ) // Since ASCII value of 2 i.e. 50 is greater than 1 i.e. 49 so loop will continue on till memory exhaust as no increment/decrement or end-limit given
    // printf ( "\nIn while loop" ) ; 

 
    // for ( char x = 0 ; x <= 255 ; x++ ) // As we are trying to print by using ASCII-values but using char data-type so conversion error loop will continue till memory exhaust
    // // use for(char x = NULL; char <= ' '; x++)  OR for(int x = 0; x <= 255; x++) like this
    // printf ( "\nAscii value %d Character %c", x, x ) ; 


    // int x = 4, y = 0, z ; 
    // while ( x >= 0 ) 
    // { 
    //     x-- ; // First decrements to 3 => then 2 => then 1 => then 0 => then -1 and will print it as already in while-block after that condition will be false as decremented in while-block
    //     y++ ; // First increments to 1 => then 2 so continue loop without this
    //     if ( x == y ) 
    //         continue ; 
    //     else 
    //     printf ( "\n%d %d", x, y ) ; 
    // } 


    int x = 4, y = 0, z ; 
    while ( x >= 0 ) 
    { 
        if ( x == y ) 
            break ; 
        else 
        printf ( "\n%d %d", x, y ) ; 
    x-- ; 
    y++ ; 
    } 

    return 0;
}