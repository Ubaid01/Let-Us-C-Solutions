#include<stdio.h>
#include<string.h>

int xstrlen ( char  *s ) {  // Our own strlen function ! 
    int  length = 0 ; 
    while ( *s != '\0' ) { 
        length++ ; 
        s++ ; 
    } 
    return ( length ) ; 
} 

int main(){
    char  arr[ ] = "Bamboozled" ; 
    int  len1, len2 ;
    len1 = strlen ( arr ) ; // For already initialized
    len2 = strlen ( "Humpty Dumpty" ) ; // Directly passed with spaces
    printf ( "\nstring = %s length = %d", arr, len1 ) ; 
    printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ;

    char  arr_1[ ] = "Bamboozled" ; 
    int  len3, len4 ; 
    len3 = xstrlen ( arr_1 ) ; 
    len4 = xstrlen ( "Humpty Dumpty" ) ; 
    printf ( "\nstring = %s length = %d", arr_1, len3 ) ; 
    printf ( "\nstring = %s length = %d", "Humpty Dumpty", len4 ) ; 

    return 0;
}