#include<stdio.h>
// #define PRODUCT(x) ( x * x )  

int main() {
    // int i = 2 ; 
    // #ifdef DEF // (if define) as DEF is not defined so will print 2 if used ifndef so will evaluate 2 * 2 = 4
    //     i *= i ; 
    // #else 
    //     printf ( "\n%d", i ) ; 
    // #endif


//     int i = 3, j ; 
//     j = PRODUCT( i + 1 ) ;
// // So in macro replace x with (i + 1)
// // j = (i + 1 * i + 1);   By operator precedence =>  j = (i + (1 * i) + 1);
// // j = (3 + (1 * 3) + 1); => j = (3 + 3 + 1);  j = 7;

//     printf ( "\n%d", j ) ; 

//     int i = 3, j, k ; 
//     j = PRODUCT( i++ ) ; 
// // Replace PRODUCT(i++) with (i++ *  i++) so (3 * 4) = 12
//     k = PRODUCT ( ++i ) ; 
// // Because the macro is expanded as
// // i++*i++ = 3++*4++ = 12 (post increment operator).
// // ++i*++i = ++6*++7 = 6*7 = 42 (pre increment operator). BUT in C if we use pre-increment operator so for macros it will multiply 2nd number to itself like here 7 * 7 = 49
 
//     printf ( "\n%d %d", j, k ) ;

    // # define SEMI ; 
    // int p = 3 SEMI ; 
    // printf ( "%d", p ) SEMI  // will simply print 3

    #define PI 3.14
    #define AREA(x,y,z) PI*x*x+y*z

	float a = AREA(1, 5, 8);
	float b = AREA(AREA(1, 5, 8), 4, 5);
// Now replace x whole with (1 )
	printf("a = %f\n", a);
	printf("b = %f\n", b);
// (PI*AREA(1,5,8)*AREA(1,5,8) + 4*5)
// (PI*(PI*1*1+5*8)*(PI*1*1+5*8)+4*5) = 3.14*43.14*43.14+4*5 = 5863.727

    return 0;
}