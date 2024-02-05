#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
     
    // char ch ; 
    // ch = getchar( ) ; 
    // if ( islower ( ch ) ) // If lower case character given so it will upper-case it then otherwise lower-case it.
    //     putchar ( toupper ( ch ) ) ; 
    // else 
    //     putchar ( tolower ( ch ) ) ; 
   
    // int i = 2 ;
    // float f = 2.5367 ; 
    // char str[ ] = "Life is like that" ; 
    // printf ( "\n%4d\t%3.3f\t%4s", i, f, str ) ; 
    // // will print 2 with 4 left spaces reserve for it and f till 3 decimal places and 3 left spaces reserved and str with 4 left spaces reserve for it.

    // printf ( "More often than \b\b not \rthe person who \n wins is the one who thinks he can!" ) ; 
    // // \b will remove the previous char from it and \n  will print new line and \r will remove the preivous strings whole from it and then print new line 

    char  p[ ] = "The sixth sick sheikh's sixth ship is sick" ;
    int  i = 0 ; 
    while ( p[i] != '\0' ) { 
        putch ( p[i] ) ; // put all string character by character till null terminator
        i++ ; 
    } 

    
    return 0;
}