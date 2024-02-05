#include<stdio.h>

// void change ( int *b, int n ) { 
//     int i ; 
//     for ( i = 0 ; i < n ; i++ ) 
//         *( b + i ) = *( b + i ) + 5 ; // So here b refers to base address which is being incremented but since 5 is outside the brackets so value will be incremented not address
// } 

// void f ( int *x, int y ) { 
//     int i ; 
//     for ( i = 0 ; i < 5 ; i++ ) 
//         *( x + i ) += 2 ; // written as *(x + i) = *(x + i) + 2 so here in normal value 2 is being incremented for each loop 
//     y += 2 ; // y will be incremented by 2 only 1 time as out of loop
// }

int main(){
    // int b[ ] = { 10, 20, 30, 40, 50 } ; 
    // int i ; 
    // for ( i = 0 ; i <= 4 ; i++ ) 
    //     printf ( "\n%d" , *( b + i ) ) ; // Since only name of array represent base address and adding i will increment that address by sizeof(int) so using pointer value at that addresss will be printed.

    // int b[ ] = { 0, 20, 0, 40, 5 } ; 
    // int i, *k ; 
    // k = b ; // As k has base address so *k refers to value at k[0] 
    // for ( i = 0 ; i <= 4 ; i++ ) { 
    //     printf ( "\n%d" , *k ) ; //So this will print all values
    //     k++ ; 
    //  } 

    // int a[ ] = { 2, 4, 6, 8, 10 } ; 
    // int i ; 
    // change ( a, 5 ) ; 
    // for ( i = 0 ; i <= 4 ; i++ ) 
    //     printf( "\n%d", a[i] ) ; // printes value incremented by 5

//     int a[5], i, b = 16 ; 
//     for ( i = 0 ; i < 5 ; i++ ) 
//         a[i] = 2 * i ; 
// // a[0] = 0, a[1] = 2, a[2] = 4 ...6...8
//     f ( a, b ) ; // b is not a pointer so copy is passed and hence not changes in main function
//     for ( i = 0 ; i < 5 ; i++ ) 
//         printf ( "\n%d", a[i] ) ; // so prints 2  4  6  8  10
//     printf( "\n%d", b ) ; // prints 16 not 18 as it is call by value not by reference


    // static int a[5] ; // Since static so whole 'a' array will be pre-setted to 0
    // int i ; 
    // for ( i = 0 ; i <= 4 ; i++ ) 
    //     printf ( "\n%d", a[i] ) ; // prints 0 (5 times)

    int a[5] = { 5, 1, 15, 20, 25 } ; 
    int i, j, k = 1, m ; 
    i = ++a[1] ; // so a[1] i.e. 1 is being pre-incremented so i = 2

    // printf("%d Now you know %d", ++a[1], a[1] ) ; Example
    j = a[1]++ ; // we before incremented value of a[1] not a[1] which still holds 2 so j = 2
    m = a[i++] ; // Now here post incrementing so a[2] = 15 but i is now incremented so i = 2 + 1 = 3
    printf ( "\n%d %d %d", i, j, m ) ; // prints 3  2  15 
    return 0;
}