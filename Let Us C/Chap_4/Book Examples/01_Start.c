#include<stdio.h>

int main( ) 
{ 
    int i = 2 ; 
    switch ( i ) 
    { 
    case 1 : 
    printf ( "I am in case 1 \n" ) ; 
    case 2 : 
    printf ( "I am in case 2 \n" ) ; // If no break written so program will continue to execute each line after that case whether True or Not till default
    case 3 : 
    printf ( "I am in case 3 \n" ) ; 
    default : 
    printf ( "I am in default \n" ) ; 
    }

    char ch ; 
    printf ( "Enter any of the alphabet a, b, or c " ) ; 
    scanf ( "%c", &ch ) ; 
    switch ( ch ) 
    { 
    case 'a' :  // Also can use ASCII-values for characters
    case 'A' : 
    printf ( "a as in ashar" ) ; 
    break ; 
    case 'b' : 
    case 'B' : 
    printf ( "b as in brain" ) ; 
    break ; 
    case 'c' : 
    case 'C' : 
    printf ( "c as in cookie" ) ; 
    break ; 
    default : 
    printf ( "wish you knew what are alphabets" ) ; 
    } 
 return 0; 
} 