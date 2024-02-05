#include<stdio.h>

int main(){
     
    // int n[3][3] = { 
    //                 2, 4, 3, 
    //                 6, 8, 5, 
    //                 3, 5, 1  } ; 
    // // printf("\n %d", &n[0] ) ;Can confirm as
    // printf ( "\n%d %d %d %d", *n, n[3][3], n[2][2] ) ; // *n is same as n[0] so will print address of n[0] while n[3][3] not exist maximum index is 2 so gives garabage value and n[2][2] prints 1

    // int n[3][3] = { 
    //                 2, 4, 3, 
    //                 6, 8, 5, 
    //                 3, 5, 1 } ; 
    // // int i, *ptr ; 
    // ptr = n ; // So ptr will have address of n[0]  
    // for ( i = 0 ; i <= 8 ; i++ ) 
    //     printf ( "\n%d", * ( ptr + i ) ) ; // This will print all values treating it as a 1D-array

    //     int n[3][3] = { 
    //                     2, 4, 3, 
    //                     6, 8, 5, 
    //                     3, 5, 1 } ; 
    // int i, j ; 
    // for ( i = 0 ; i <= 2 ; i++ ) 
    //     for ( j = 0 ; j <= 2 ; j++ ) 
    //         printf ( "\n%d %d", n[i][j], *( *( n + i ) + j ) ) ; // prints all values of 2D-array using indices AND pointer reference


    // // int twod[ ][ ] = {       // For 2D- array we have to specify column or both so wrong declaration
    // int twod[][2] = {     
    //                     2, 4, 
    //                     6, 8 } ; 
    // printf ( "\n%d", twod ) ; // This will print address of twod[0]

    // int three[3][ ] = {       // Wrong declaration either need to specify column or both not only row
    int three[3][3] = {   
                        2, 4, 3, 
                        6, 8, 2, 
                        2, 3 ,1 } ; 

    printf ( "\n%d", three[1][1] ) ; // will print 8 as at 2nd row 2nd col i.e. 1st both indices
    return 0;
}