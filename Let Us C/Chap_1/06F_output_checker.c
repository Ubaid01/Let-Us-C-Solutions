#include<stdio.h>

int main(){
    // int   i = 2, j = 3, k, l ; 
    // float   a, b ; 
    // k = i / j * j ; 
    // l = j / i * i ; 
    // a = i / j * j ; 
    // b = j / i * i ; 
    // printf( "%d %d %f %f", k, l, a, b ) ; 

    int  a, b ; 
    a = -3 - - 3 ; 
    b = -3 - - ( - 3 ) ; 
    printf ( "a = %d b = %d", a, b ) ; 

    // int a = 5,  b = 2; 
    // int c ; 
    // c = a % b; 
    // printf ( "%d", c ) ;

    // printf ( "nn \n\n nn\n" ) ; 
    // printf ( "nn /n/n nn/n" ) ; 

    // int a, b ; 
    // printf ( "Enter values of a and b" ) ; 
    // scanf ( "%d %d", &a, &b ) ; // If there are unusual spaces in scanf so program will execute but with errors
    // printf ( "a  = %d b = %d", a, b ) ; 

    // int p, q ; 
    // printf ( "Enter values of p and q" ) ; 
    // scanf ( "%d %d", p, q ) ; 
    // printf ( "p  = %d q =%d", p, q ) ; 


    // printf("%d", 2++);  // Constant can't be incremented OR decremented directly as it is only applicable to variables

    // printf("%x", 0x4FF6); // 0x used to denote Hexa-decimal number

    int c = 025; // 0 before number represents octal system
    int d = 063;
    int e = 0b101; // 0b used to denote Binary number
    printf("Decimal of 25(Octal) is %d\n", c);
    printf("Decimal of 63(Octal) is %d\n", d);
    printf("Decimal of 10(Binary) is %d\n", e);


    // int a = 'v' ;
    // char ch = 65 ;
    // printf("%d\n%c", a, ch);   
    

    return 0;
}