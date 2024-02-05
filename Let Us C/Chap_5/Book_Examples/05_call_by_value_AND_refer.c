#include<stdio.h>

void swapv ( int x, int y ) {
 int t ; 
 t = x ; 
 x = y ; 
 y = t ; 
 printf ( "\nIn Function-Call:  x = %d y = %d", x, y ) ; 
}

// In the above method the ‘value’ of each of the actual arguments in 
// the calling function is copied into corresponding formal arguments 
// of the called function. With this method the changes made to the 
// formal arguments in the called function have no effect on the 
// values of actual arguments in the calling function. 

void swapr( int *x, int *y ) { 
 int t ; 
 t = *x ; 
 *x = *y ; 
 *y = t ; 
} 

// In the second method (call by reference) the addresses of actual 
// arguments in the calling function are copied into formal arguments 
// of the called function. This means that using these addresses we 
// would have an access to the actual arguments and hence we would 
// be able to manipulate them. 

int main(){
    int a = 10, b = 20 ; 
    swapv ( a, b ) ; 
    printf ( "\nCall By Value:  a = %d b = %d", a, b ) ;
    swapr( &a, &b );
    printf ( "\nCall By Reference:  a = %d b = %d", a, b ) ;
    return 0;
}

// So by reference , we have been able to indirectly return two values from a 
// called function, and hence, have overcome the limitation of the 
// return statement, which can return only one value from a function 
// at a time.