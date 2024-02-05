#include<stdio.h>

void display( int *j, int n ) { 
    int i ; 
    for ( i = 0 ; i <= n - 1 ; i++ ) {
        printf ( "\nelement = %d", *j ) ;
        j++ ; /* increment pointer to point to next element */
    }
}

int main(){
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    display ( &num[0] , 6 ) ; // Here it is used as &(* num) which is simple num so 
    // display( num, 6 ) ; // It can be done like as also
/*  Thus, the following two function calls are same: 
    display ( &num[0], 6 ) ; 
    display ( num, 6 ) ;      */
    return 0;
}