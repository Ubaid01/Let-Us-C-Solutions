/* Receives strings from keyboard and writes them to file */ 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE  *fp ; 
    char  s[80] ;
    // fp = fopen ( "POEM.txt", "w" ) ; 
    // if ( fp == NULL ) { 
    //     puts ( "Cannot open file" ) ; 
    //     exit(1) ; 
    // } 

// //  Note that each string is terminated by hitting enter. To terminate the execution of the program, hit enter at the beginning of a line. This creates a string of zero length, which the program recognizes as the signal to close the file and exit.
    // printf ( "\nEnter a few lines of text:\n" ) ; 
    // while ( strlen ( gets ( s ) ) > 0 ) { 
    //     fputs ( s, fp ) ; 
    //     fputs ( "\n", fp ) ; 
    // } 
    // fclose ( fp ) ; 

    // To rad string from file
    fp = fopen ( "POEM.TXT", "r" ) ; 
    if ( fp == NULL ) { 
        puts ( "Cannot open file" ) ; 
        exit(1) ; 
    } 
    while ( fgets ( s, 79, fp ) != NULL ) // To print info of a file
        printf ( "%s" , s ) ; 
    fclose ( fp ) ; 
    return 0;
}