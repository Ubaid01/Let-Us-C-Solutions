// #include<stdio.h>

// int pass ( int j, int b ) 
// // int c ; // Error is that c is not declared in function definition but with prototype so correct way is 
// { 
//     int c ;
//     c = j + b ; 
//     return ( c ) ; 
// }
// int main(){
//     int i = 135, a = 135, k ; 
//     k = pass ( i, a ) ; 
//     printf ( "\n%d", k ) ; // After correction will print 135 + 135 = 270 as a value is returned
//     return 0;
// }

// #include<stdio.h>

// // void jiaayjo ( int q, int g ) { // Error is that in function call addresses are passed while declaring function original copy of variable is asked as argument so 
// void jiaayjo ( int *q, int  *g ) { 
//     *q = *q  +  *q ; 
//     *g = *g  +  *g ; 
// }
// int main(){
//     int p = 23, f = 24 ; 
//     jiaayjo ( &p, &f ) ; 
//     printf ( "\n%d %d", p, f ) ; // Now 23 + 23 = 46 and 24 + 24 = 48 printed
//     return 0;
// }

// #include<stdio.h>

// //  check ( m ) // Error is that function not declared properly with data-types
//     // int m ; // But passing argument declared inside function which is WRONG
// int check (int  m) { 
//     if ( m > 40 ) 
//     return ( 1 ) ; // Will return a TRUE value
//     else 
//     return ( 0 ) ; // A False value
// }
// int main(){
//     int k = 35, z ; 
//     z = check ( k ) ; // Since k < 40 so will print 0 (FALSE)
//     printf ( "\n%d", z ) ;
//     return 0;
// }

#include<stdio.h>

int function ( int *m ) { 
    return ( m + 2 ) ; // Since pointer is not incremented so while returning it will just increment the address of integer passed to it by 2 times size of int like in my COMP sizeof(int) = 4 * 2 = 8 so address will be incremented by 8  
}
int main(){
    int i = 35, *z ; 
    printf("\n%u", &i) ; // You can check this by using this as well

    z = function ( &i ) ; // And also is being stored in pointer variable which is wrong if using *m in function so use (declare) simple z to store value
    printf ( "\n%d", z ) ; 
    return 0;
}