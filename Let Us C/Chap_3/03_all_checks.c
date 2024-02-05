#include<stdio.h>

int main(){

    // int i = 0 ; 
    // for ( ; i ; ) // As we have not initialized or increment/decrement and i is initially set to 0 which is False so condition also False and loop will not run
    // printf ( "\nHere is some mail for you" ) ;


    // int i ; 
    // for ( i = 1 ; i <= 5 ; printf ( "\n%d", i ) ) ; // Since statement terminator is in the end so increment will not be part of loop as a result loop will continue on printing 1 till memory exhaust
    // i++ ; 


    int i = 1, j = 1 ; 
    for ( ; ; ) // since it lacks a termination condition. It will keep running until a break statement is encountered.
    { 
        if ( i > 5 ) 
            break ; 
        else 
            j += i ; // Here it will become first 1+1 = 2 then 2+3 = 5 
        printf ( "\n%d", j ) ; // So only prints 2 and 5 j
        i += j ; // First 1+2 = 3  then 3+5 = 8
    } 


    // int i ; 
    // for ( i = 1 ; i <= 5 ; printf ( "\n%c", 65 ) ) ;// Since statement terminator is in the end so increment will not be part of loop as a result loop will continue on printing char A (ASCII-65)till memory exhaust
    // i++ ; 
    
    return 0;
}