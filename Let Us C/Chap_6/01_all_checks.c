#include<stdio.h>

// int i = 0 ; 
// void val(void) { 
//     i = 100 ; 
//     printf ( "\nval's i = %d", i ) ; 
//     i++ ; 
// }

int t = 8 ;
int g ( int a ) { 
    a = 1 ; 
    t += a ; // t's value is being changed
    return ( a + t ) ;
}

int f ( int a ) { 
    a += -5 ; 
    t -= 4 ;  // Here also
    return ( a + t ) ; 
}

// int g ( int x ) { 
//     static int v = 1 ; 
//     int b = 3 ; 
//     v += x ; 
//     return ( v + x + b ) ; 
// }

// float x = 4.5 ; 
// float f ( float a ) { 
//     a += 1.3 ; 
//     x -= 4.5 ; 
//     return ( a + x ) ; 
// }

// void func(void) { 
//     auto int i = 0 ; // auto and ragister doesn't persist previous value only static does so
//     register int j = 0 ; 
//     static int k = 0 ; 
//     i++ ; j++ ; k++ ; 
//     printf ( "\n %d %d %d", i, j, k ) ; 
// } 

int main(){
    // int i ; 
    // for ( i = 0 ; i <= 50000 ; i++ ) 
    //     printf ( "\n%d", i ) ; // This will print all values from 0 to 50,000 separated by new-line. 

    // float a = 13.5 ; 
    // double b = 13.5 ; 
    // printf ( "\n%f %lf", a, b ) ; // Will print the same thing upto normally 6-decimal digits.


    // printf ( "\nmain's i = %d", i ) ; // Here it will print 0 as global i has 0
    // i++ ; 
    // val( ) ; // Here it will be assigned i = 100 in function so print 100 then increments
    // printf ( "\nmain's i = %d", i ) ;  //Since i is global variable so it has reach in all blocks so will pint 101
    // val( ) ; // Again assigned i = 100 first printed then incremented 


    int x, y, s = 2 ; 
    s *= 3 ; 
    y = f ( s ) ; 
// y will have 5 cause 2 * 3 = 6 so f(6) => 6 - 5 = 1 now t's value is being changed so t = 8 - 4 = 4 and then 1 + 4 = 5 
    x = g ( s ) ; 
// x will have g(6) but then this 6 changed to 1 inside function but since t has been changed to 4 so 4 + 1 = 5  and then 5 + 1 = 6
    printf ( "\n%d %d %d", s, y, x ) ; // So prints 6  5  6


    // static int count = 5 ;  // Since here static is used so it will keep its value at each function call and continue to call main till last print is 1 as post-decrement is used.
    // printf ( "\ncount = %d", count-- ) ; 
    // if ( count != 0 ) 
    //     main( ) ;

//     int i, j ; 
//     for ( i = 1 ; i < 5 ; i++ ) { // Run till 4
//         j = g ( i ) ;
// // For 1st iteration:- g(1) => so v = 1 + 1 = 2 and return 2 + 1 + 3 = 6
// // For 2nd iteration:- g(2) => since v was static so previous value v = 2 + 2 = 4 and in end return 4 + 2 + 3 = 9 (b will initialized each time)
// // For 3rd iteration:- v = 4 + 3 = 7 and 7 + 3 + 3 = 13 
// // For 4th iteration:- v = 7 + 4 = 11 and 11 + 4 + 3 = 18 
//         printf ( "\n%d", j ) ; 
//     }

    // float y ; 
    // x *= 2.0 ; // 9/2 * 2 = 9 
    // y = f ( x ) ; // f(9) => a = 9 + 1.3 = 10.3 and x again changed so 9 - 4.5 = 4.5 in end 10.3+4.5= 14.8
    // printf ( "\n%f %f", x, y ) ; // will prints 4.5  14.8 upto decimal places

    // func( ) ; // For 1st time prints:-  1  1  1
    // func( ) ; // Fo 2nd time prints:-  1  1  2


    // int x = 20 ; 
    // { 
    //     int x = 30 ; 
    //     printf ( "\n%d", x ) ; // Here will print 30 as local variable priortized (if delimitter not used so will give erro as same variable can't be declared 2 times in same block)
    // } 
    // printf ("\n%d", x ) ; // 20 printed

    return 0;
}