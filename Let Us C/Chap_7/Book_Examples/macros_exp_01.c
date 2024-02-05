#include<stdio.h>

// Macros ( Constants which can't be changed ) used to enhance readability of code.
#define UPPER 25 
#define PI 3.1415 
// Thus, using #define can produce more efficient and more easily understandable programs.
// The compiler can generate faster and more compact code for constants than it can for variables.(So faster execution than variables.)

int main(){
    int i ; 
    for ( i = 1 ; i <= UPPER ; i++ ) 
        printf ( "\n%d", i ) ; 

    float r = 6.25 ; 
    float area ; 
    area = PI * r * r ; 
    printf ( "\nArea of circle = %f", area ) ;

    return 0;
}