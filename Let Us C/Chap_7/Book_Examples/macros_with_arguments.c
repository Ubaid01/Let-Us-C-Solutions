#include<stdio.h>

// Passing arguments to macros
#define AREA(x) ( 3.14 * x * x ) 
// Wherever the preprocessor finds the phrase AREA(x) it expands it into the statement ( 3.14 * x * x ).
// So the compiler will get to work on a = 3.14 * r2 * r2 ; 

// Conditional With Argument
#define ISDIGIT(y) ( y >= 48 && y <= 57 )

int main(){
    float r1 = 6.25, r2 = 2.5, a ; 
 
    printf ( "\nArea of circle = %f", AREA(r1) ) ; // Can use directly to print

    a = AREA ( r2 ) ; 
    printf ( "\nArea of circle = %f", a ) ; // OR by using a variable if need to change somewhere in program

    char ch ; 
    printf ( "\nEnter any digit " ) ; 
    scanf (" %c", &ch ) ; 
    if ( ISDIGIT ( ch ) ) 
        printf ( "\nYou entered a digit" ) ; 
    else 
        printf ( "\nIllegal input" ) ;

    return 0;
}