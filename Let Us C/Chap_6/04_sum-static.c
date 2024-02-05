#include<stdio.h>

int sumdig ( int num ) { 
    static int sum ; // Presetted to 0
    int a, b ; 
    a = num % 10 ; 
    b = ( num - a ) / 10 ; // Original num - remainder / 10 will lead to previous decimal place number in C like (12345 - 5) / 10 = > 1234
    sum = sum + a ; 
    if ( b != 0 ) // when number is not 0 i.e. b as it is being passed to sumdig(b)
        sumdig ( b ) ; // Call itself again and again (recursively)
    else 
        return ( sum ) ; 
} 

int main(){
    int a ; 
    a = sumdig ( 12345 ) ; 
    printf ( "\n%d", a ) ; 
// The reason for declaring sum as static int is to retain its value between recursive calls. When a variable is declared as static within a function, it retains its value between different function calls. If the sum variable was not declared as static, it would lose its value each time the function calls itself recursively. OR can also decalre simple global variable int sum = 0; it will also hold sum value in multiple blocks. 
    return 0;
}