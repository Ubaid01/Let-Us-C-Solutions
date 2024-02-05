#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fcntl.h>
#include <sys/stat.h>

// void openfile ( char *fn, FILE **f ) { 
//     *f = fopen ( fn, "r" ) ; 
// } 

int main(){
    // FILE *fp ; 
    // // openfile ( "Myfile.txt", fp ) ; // wrong arguments given
    // openfile("Myfile.txt", &fp);  // Call the function with the address of fp as FILE is a double pointer
    // if  ( fp == NULL ) 
    //     printf ( "Unable to open file…" ) ;    
    // else
    //     printf("File opened successfully.\n") ;
    // fclose( fp ) ;

    // FILE  *fp ; 
    // char  c ; 
    // fp = fopen ( "TRY.C" ,"r") ; 
    // // if ( fp == null ) {  // null pointer not called correctly
    // if ( fp == NULL ) { 
    //     puts ( "Cannot open file" ) ; 
    //     exit(1) ; 
    // } 
    // while ( ( c = getc ( fp ) ) != EOF ) 
    //     putch ( c ); 
    // fclose ( fp ) ; 

    // char fname[ ] =  "c:\\students.dat" ;
    // FILE *fp ; 
    // // fp = fopen ( fname, "tr" ) ; // Wrong mode attribute used to open file
    // fp = fopen ( fname, "r" ) ; 
    // if ( fp == NULL ) 
    //     printf ( "\nUnable to open file..." ) ;

    // FILE  *fp ; 
    // char  str[80] ; 
    // fp = fopen ( "TRY.C", "r" ) ; 
    // while ( fgets ( str, 80, fp ) != NULL ) // Also EOF not to be used as char by char file not used but whole directly with string so compare with NULL pointer.
    //     // fputs ( str ) ; // Wrong number of arguments used
    //     fputs(str, stdout); // Output read line to the standard output
    // fclose ( fp ) ; 

    // // unsigned char ; // variable not initialized (also worng datatype should be simply char)
    // char ch ;
    // FILE *fp ; 
    // fp = fopen ( "trial", "r" ) ; // Can also use files without extensions
    // while ( ( ch = getc ( fp ) ) != EOF ) 
    //     printf ( "%c", ch ) ; 
    // fclose ( fp ) ; 

    // FILE  *fp ; 
    // char  name[25] ; 
    // int  age ; 
    // fp = fopen ( "YOURS", "r" ) ; // Can also use files without extensions
    // // while ( fscanf ( fp, "%s %d", name, &age ) != NULL ) ; // Now here since reading whole file char by char so use EOF
    // while ( fscanf ( fp, "%s %d", name, &age ) != EOF ) ; 
    // fclose ( fp ) ; 
    // printf("Name = %s\nAge = %d.", name, age) ;

    // FILE  *fp ; 
    // char  names[30] ; // Wrong name used to declare
    // char  name[30] ;
    // int  i ; 
    // fp = fopen ( "students.c", "wb" ) ; 
    // for ( i = 0 ; i <= 2 ; i++ ) { 
    //     puts ( "\nEnter name " ) ; 
    //     gets ( name ) ; 
    //     fwrite ( name, sizeof ( name ), 1, fp ) ; 
    // } 
    // fclose ( fp ) ;

    // FILE  *fp ; 
    // char  name[20] = "Ajay" ; 
    // int  i ; 
    // fp = fopen ( "students.c", "wb" ) ; // Wrong mode use to write in binary open in rb not 'r' .
    // for ( i = 0 ; i <= 10 ; i++ ) 
    //     fwrite ( name, sizeof ( name ), 1, fp ) ; // 11 times nae written 
    // fclose ( fp ) ; 

    // // int  fp ; // And int used to hold address of file
    // FILE *fp ;
    // fp = fopen ( "pr22.c" , "r" ) ; 
    // // if ( fp == -1 ) // NULL means \0 character and as a pointer defined 0 (void *) 0 not -1 so wrongly used
    // // if ( fp == '\0' ) { // OR
    // if ( fp == (void *) 0 ) { 
    //     puts ( "cannot open file" ) ; 
    // }        
    // else {
    //     puts("Closing file.\n") ;
    //     fclose ( fp ) ; 
    // }

    int  fp ; 
    // fp = fopen ( "students.c", READ | BINARY ) ; // Normally can't write READ BINARY directly and don't use fopen for binary directly use open
    fp = open ( "students.c", O_RDONLY | O_BINARY ) ; 
    // if ( fp == -1 ) // Wrong NULL used
    if ( fp == '\0' ) 
        puts ( "cannot open file" ) ; 
    else {
        puts("Closing file.\n") ;
        close ( fp ) ; 
    }
    return 0;
}