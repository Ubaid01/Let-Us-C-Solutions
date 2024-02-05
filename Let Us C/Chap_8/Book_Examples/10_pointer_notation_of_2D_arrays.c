#include<stdio.h>

/* Pointer notation to access 2-D array elements */ 
int main(){

    int s[4][2] = { 
                    { 1234, 56 }, 
                    { 1212, 33 }, 
                    { 1434, 80 }, 
                    { 1312, 78 } } ; 
    int i, j ; 
    for ( i = 0 ; i <= 3 ; i++ ) { 
        printf ( "\n" ) ; 
        for ( j = 0 ; j <= 1 ; j++ ) 
            printf ( "%d ", *( *( s + i ) + j ) ) ;
    } 

/*  Since, we have already studied while learning 
one-dimensional arrays that num[i] is same as *( num + i ).  
Similarly, *( s[2] + 1 ) is same as, *( *( s + 2 ) + 1 ). Thus, all the 
following expressions refer to the same element, 
So indexes can be replaced with the pointers and brackets with number adding in it.
s[2][1] 
* ( s[2] + 1 ) // Since 1 is column outer index so replaced first 
* ( * ( s + 2 ) + 1 )   // So the number added firstly with array name is always Row.Num.       */

    return 0;
}