/* Writes records to a file using structure */ 

#include<stdio.h>
#include<conio.h>

int main(){
    FILE  *fp ; 
    char  another = 'Y' ;  
    struct emp  { 
        char  name[40] ; 
        int  age ; 
        float  bs ; 
    } ; 

    struct emp  e ; 
    // fp = fopen ( "EMPLOYEE.dat", "w" ) ; 
    // if ( fp == NULL )  { 
    //     puts ( "Cannot open file" ) ; 
    //     return 1 ; 
    // } 

    // while ( another == 'Y' ) { 
    //     printf ( "\nEnter name, age and basic salary: " ) ; 
    //     scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; 
    //     fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;  
    //     printf ( "Add another record (Y/N) " ) ; 
    //     // fflush ( stdin ) ; // Added if code breaks ( It is designed to remove or ‘flush out’ any data remaining in the buffer. )  Here we have used ‘stdin’, which means buffer related with standard input  device—keyboard. 
    //     another = getche( ) ; 
    // } 
    // fclose ( fp ) ; 

    // To read record structure from file
    fp = fopen ( "EMPLOYEE.dat", "r" ) ; 
    if ( fp == NULL ) { 
        puts ( "Cannot open file" ) ; 
        return 1 ; 
    } 
    while ( fscanf ( fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF ) 
        printf ( "\n%s %d %f", e.name, e.age, e.bs ) ;      

    fclose ( fp ) ; 
    return 0;
}