#include<stdio.h>

/* Usage of pointer to an array */ 
int main(){

    int s[5][2] = { 
                    { 1234, 56 }, 
                    { 1212, 33 }, 
                    { 1434, 80 }, 
                    { 1312, 78 }  } ; 
    int ( *p )[2] ; // Here p is a pointer to an array of two integers. Note that the parentheses in the declaration of p are necessary. Absence of them would make p an array of 2 integer pointers. 
    int i, j, *pint ; 
    
    for ( i = 0 ; i <= 3 ; i++ ) { 
        p = &s[i] ; // For each outer loop time we store the address of a new one-dimensional array.
        pint = p ; 
        printf ( "\n" ) ; 
        for ( j = 0 ; j <= 1 ; j++ ) 
            printf ( "%d ", *( pint + j ) ) ; 
    } 
    return 0;
}