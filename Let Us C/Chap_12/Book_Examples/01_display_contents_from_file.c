/* Display contents of a file on screen. */  
# include "stdio.h" 
int main( ) {

    FILE  *fp ; 
    char  ch ; 
    fp = fopen ( "01_PR1.c", "r" ) ; // reading another c-file
// 'r' mode searches file and if not found so will return ERROR unlike w, a ;
    if( fp == NULL ) {  // If file not present so will return error that's why used this
        printf("File not found!\n") ;
        return 1 ;
    }
    while ( 1 ) { 
        ch = fgetc ( fp ) ;// reads the character from the current pointer position, advances the pointer position so that it now points to the next character (Can also use getc() here)
        if ( ch == EOF ) // EOF means end of file
            break; ; 
        printf ( "%c", ch ) ; 
    }

    fclose ( fp ) ; // Always close the file to free up memory
    return 0 ;

}
