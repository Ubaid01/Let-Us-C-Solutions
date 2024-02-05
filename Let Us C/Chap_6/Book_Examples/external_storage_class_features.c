#include<stdio.h>

int i ; // Global variable (if not initalized so have default value of 0.)
void increment(void) {  
 i = i + 1 ; 
 printf ( "\non incrementing i = %d", i ) ; 
} 

void decrement(void) { 
 i = i - 1 ; 
 printf ( "\non decrementing i = %d", i ) ; 
} 

int x = 21 ;

int main(){ 
    printf ( "\ni = %d", i ) ; 
    increment( ) ; 
    increment( ) ; 
    decrement( ) ; 
    decrement( ) ; 


    extern int y ; // If want to use variable withou initializing or its definiton at same time but afterwards so use extern (i.e. external class storage)
    printf ( "\n%d %d", x, y ) ; 
    return 0;
}
int y = 31 ; 