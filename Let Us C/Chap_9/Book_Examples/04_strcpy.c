#include<stdio.h>
#include<string.h>

// void xstrcpy ( char  *t, char  *s ) {   

// In original definition  strcpy ( char *t, const char *s ) ;
// We didn't use the keyword const in our version of xstrcpy( ) and 
// still our function worked correctly. So what is the need of the 
// const qualifier? 
// What would happen if we add the following lines beyond the last 
// statement of xstrcpy( )?. 
// s = s - 8 ; 
// *s = 'K' ; 
// This would change the source string to "Kayonara". Can we not 
// ensure that the source string doesn’t change even accidentally in 
// xstrcpy( )? We can, by changing the definition as follows: 
// By declaring char *s as const we are declaring that the source 
// string should remain constant (should not change). Thus the const 
// qualifier ensures that your program does not inadvertently alter a 
// variable that you intended to be a constant. 

void xstrcpy( char *t , const char *s ) { // Our own strcpy function !
    while ( *s != '\0' ) { 
        *t = *s ; 
        s++ ; 
        t++ ; 
    } 
    // s = s - 8 ;  // If this used without const so it will change original string
    // *s = 'K' ;
        *t = '\0' ;  // In end add NULL-char for better handling
    } 
int main(){
    char  source[ ] = "Sayonara" ;
    char  target[20] ; 
    strcpy ( target, source ) ; 
    printf ( "\nsource string = %s", source ) ; 
    printf ( "\ntarget string = %s", target ) ;   
    printf("\n%d", NULL) ; // Null is a integer so can't use it instead '\0' null char
     
    char  source_1[ ] = "Sayonara" ; 
    char  target_1[20] ; 
    xstrcpy ( target_1, source_1 ) ; 
    printf ( "\nsource string = %s", source_1 ) ; 
    printf ( "\ntarget string = %s", target_1 ) ;  
    return 0;
}