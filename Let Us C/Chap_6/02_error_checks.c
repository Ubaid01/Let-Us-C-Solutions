#include<stdio.h>

int main(){
    // long num ; 
    // num = 2 ; 
    // printf ( "\n%ld", num ) ;  // No error ( But better to write data-type long as it can also exist wih both int and double )
    
    // char ch = 200 ; // If char initialized with number so will treat it as signed.
    // printf ( "\n%d", ch ) ; // No error (printss -56 due to overflow)

// When you assign 200 to a signed char, it is represented as binary 11001000. The MSB is 1, indicating a negative value. To find the decimal equivalent of the two's complement representation, you take the bitwise complement and add 1. In this case:
// Flip the bits (COMPLEMENT or NOT of all): 00110111
// Add 1: 00111000
// The decimal equivalent is -56.

    // unsigned a = 25 ; 
    // long unsigned b = 25l ; 
    // printf ( "\n%lu %u", a, b ) ; // This prints 25 for both as %u is used for unsigned

// long float a = 25.345e454 ; // Error long float doesn't exist only long double is a correct data-type.
    // long double a = 25e45l ;
    // // unsigned double b = 25 ; // Invalid in C ! There is no unsigned float or unsigned double
    // unsigned int b = 25 ;
    // printf ( "\n%Lf %u", a, b ) ;

    // float a = 25.345 ; 
    // float *b ; // Now b is a pointer which will have address
    // b = &a ; 
    // printf ( "\n%f %u", a, b ) ; // prints number and then address (%u) is always use for address

    static int y , z ; // Since data-type is static so initial value will be 0 presetted.
    printf ("%d %d", y, z ) ;
    return 0 ; 
} 