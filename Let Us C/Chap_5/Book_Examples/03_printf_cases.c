#include<stdio.h>

int main(){
    int e = 1 ; 
    printf ( "\n%d %d %d", e, ++e, e++ ) ; // As C-compiler calls from right to left so e++ => 1 print then +1 then ++e will +1 and print 3 and e will also print 3

    int i = 10, j = 20 ; 
    printf ( "\n%d %d %d ", i, j ) ; // At run-time when the first printf( ) is executed, since there is no variable matching with the last specifier %d, a garbage integer gets printed.
    
    printf ( "\n%d", i, j ) ; // Similarly, in the second printf( ) since the format specifier for j has not been mentioned its value does not get printed. 
    return 0;
}