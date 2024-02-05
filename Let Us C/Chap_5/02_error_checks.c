#include<stdio.h>

int addmult ( int ii, int jj ) { 
    int kk, ll ; 
    kk = ii + jj ; 
    ll = ii * jj ; 
    return ( kk, ll ) ; // This line will not return both kk and ll as intended
}
// in C, the comma operator only returns the value of the last expression (ll in this case). So, the addmult function actually returns only the product of ii and jj (stored in ll), not both values as intended.

int main(){
    int i = 3, j = 4, k, l ; 
    k = addmult ( i, j ) ; 
    l = addmult ( i, j ) ; 
    printf ( "\n%d %d", k, l ) ; // So will print same 12 12
    return 0;
}

// #include<stdio.h>

// int message(void) { 
//     printf ( "\nViruses are written in C" ) ; 
//     return ; 
// }   

// int main(){
//     int a ; 
//     a = message() ;  // Error is that without returning any value only printf is being assigned to variable a which is not posssible so a may print line with no.of chars in it in this case. If made void so we can't even assigne message function to variable as it can't help to store any value.
//     printf("%d", a) ;
//     return 0;
// }

// // return  ; Used FOR
// // In C, the return; statement without a value is used to exit a function prematurely, especially in functions with a return type of void. When you use return; without specifying a value, it simply means that the function will terminate immediately, returning control to the calling function.

// #include<stdio.h>

// // void printit ( a, ch ) { // As datatypes are not specified so will not execute and give error
// void printit (float  a, char ch) {
//  printf ( "\n%f %c", a, ch ) ; 
// }

// int main(){
//     float a = 15.5 ; 
//     char ch = 'C' ; 
//     printit ( a, ch ) ; 
//     return 0;
// }

// #include<stdio.h>

// // void message(void)  ; { // Error is that statement terminator used after function declaration and definition also defined after it which will give sytax error
// void message(void) { 
//     printf ( "\nPraise worthy and C worthy are synonyms" ) ; 
// }

// int main(){
//     message() ; // Will print 1st time
//     message() ; // Will print 2nd time
//     return 0;
// }

// #include<stdio.h>
// void let_us_c(void) { 
//  printf ( "\nC is a Cimple minded language !" ) ; 
//  printf ( "\nOthers are of course no match !" ) ; }

// int main(){
// // let_us_c( ) {  // Function defined in main which is WRONG funcion can only be called in main function
// //     printf ( "\nC is a Cimple minded language !" ) ; 
// //     printf ( "\nOthers are of course no match !" ) ; 
// //     }
//     let_us_c() ;
//     return 0;
// }

// #include<stdio.h>

// void message(void) {  
//     printf ( "\nPraise worthy and C worthy are synonyms" ) ; }

// int main(){
//     // message( message ( ) ) ; // Function NOT called properly. It just requires arguments & function name
//     message() ;
//     return 0;
// }