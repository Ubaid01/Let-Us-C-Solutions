#include<stdio.h>

int main(){
    // char *p = "Hello" ;  /* pointer is variable, so is string */ 
    // *p = 'M' ;  /* works */ 
    // p = "Bye" ;  /* works */ 
    // const char *q = "Hello" ;  /* string is fixed pointer is not */ 
    // *q = 'M' ;  /* error */ 
    // q = "Bye" ;  /* works */ 
    // char const *s = "Hello" ;  /* string is fixed pointer is not */ 
    // *s = 'M' ;  /* error */ 
    // s = "Bye" ;  /* works */ 
    // char * const t = "Hello" ;  /* pointer is fixed string is not */ 
    // *t = 'M' ;  /* works */    
    // t = "Bye" ;  /* error */ 
    // const char * const u = "Hello" ;  /* string is fixed so is pointer */ 
    // *u = 'M' ;  /* error */ 
    // u = "Bye" ;  /* error */

    float r, a ; 
    const float pi = 3.14 ; 
    // pi = pi - 2 ;  // Doesn't works cause const
    printf ( "\nEnter radius of circle " ) ; 
    scanf  ( "%f", &r ) ; 
    a = pi * r * r ; 
    printf ( "\nArea of circle = %f", a ) ;
    return 0;
}