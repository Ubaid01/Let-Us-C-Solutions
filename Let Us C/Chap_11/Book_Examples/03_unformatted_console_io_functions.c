#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char  ch_1 ; 
    printf ( "\nPress any key to continue" ) ; 
    getch( ) ;  /* will not echo the character */ 
    printf ( "\nType any character " ) ; 
    ch_1 = getche( ) ;  /* will echo the character typed */ 
    printf ( "\nType any character " ) ; 
    getchar( ) ;  /* will echo character, must be followed by enter key */  
    fflush(stdin) ; // Use to neglect the newline buffer of getchar
    printf ( "\nContinue Y/N " ) ; 
    fgetchar( ) ;  /* will echo character, must be followed by enter key */   

    char  ch = 'A' ; 
    putch ( ch ) ;  
    putchar ( ch ) ; 
    fputchar ( ch ) ; 
    putch ( 'Z' ) ; 
    putchar ( 'Z' ) ; 
    fputchar ( 'Z' ) ; 
// The limitation of putch( ), putchar( ) and fputchar( ) is that they can output only one character at a time. 

// For multi-words
    char  footballer[40] ;
    puts ( "Enter name" ) ; 
    gets ( footballer ) ;  /* sends base address of array */ 
    printf("Happy footballing! \n %s\n", footballer) ; // puts can print only one string at a time unlike printf.
    puts ( "Happy footballing!" ) ; 
    puts ( footballer ) ; 
    return 0;
}