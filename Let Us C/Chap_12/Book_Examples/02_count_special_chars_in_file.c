/* Count chars, spaces, tabs and newlines in a file */ 

#include<stdio.h>

int main(){
    FILE  *fp ; 
    char  ch ; 
    int  nol = 0, not = 0, nob = 0, noc = 0 ; 
    
    fp = fopen ( "01_PR1.c", "r" ) ; 
    
    while ( 1 )  { 
        ch = fgetc ( fp ) ; 
        
        if ( ch == EOF ) 
            break ; 
        
        noc++ ; 
        
        if ( ch == ' ' ) 
            nob++ ; 
        
        if ( ch == '\n' ) 
            nol++ ; 
        
        if ( ch == '\t' || ch == 9 ) // 9 ASCII for tab-space 
            not++ ; // If this not works
    } 
    fclose ( fp ) ;

    not += ( nob / 4 ) ; // As for 4 consecutive spaces are TabSpace
    printf ( "\nNumber of characters = %d", noc ) ; 
    printf ( "\nNumber of blanks = %d", nob ) ; 
    printf ( "\nNumber of tabs = %d", not ) ; 
    printf ( "\nNumber of lines = %d", nol ) ; 
    return 0;
}