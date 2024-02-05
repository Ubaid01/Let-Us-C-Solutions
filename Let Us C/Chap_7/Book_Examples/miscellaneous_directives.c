#include<stdio.h>

// Pragma not works on MINGW compiler

// "#Pragama directive"
// This directive is another special-purpose directive that you can use to turn on or off certain features.
// ) #pragma startup and #pragma exit: These directives allow us to specify functions that are called upon program startup (before main( )) or program exit (just before the program terminates).
 
// void fun1(void) { 
//     printf ( "\nInside fun1" ) ; 
// } 
// void fun2(void) { 
//  printf ( "\nInside fun2" ) ; 
// } 
// (Not supported by MINGW compiler)
// #pragma startup fun1 // To execute at start-up 
// #pragma exit fun2  // To execute before program terminates


// #pragma warn: This directive tells the compiler whether or not we want to suppress a specific warning.
#pragma warn -rvl /* return value */ 
#pragma warn -par /* parameter not used */ 
#pragma warn -rch /* unreachable code */ 
int f1( ) { 
    int a = 5 ; 
} 
void f2 ( int x ) { 
    printf ( "\nInside f2" ) ; 
} 
int f3( ) { 
    int x = 6 ; 
    return x ; 
    x++ ; 
}
// (a) Though promised, f1( ) doesn't return a value. 
// (b) The parameter x that is passed to f2( ) is not being used 
// anywhere in f2( ). 
// (c) The control can never reach x++ in f3( ). 

int main() {
    //  printf ( "\nInside main." ) ; 
    f1( ) ; 
    f2 ( 7 ) ; 
    f3( ) ; 
    return 0;
}