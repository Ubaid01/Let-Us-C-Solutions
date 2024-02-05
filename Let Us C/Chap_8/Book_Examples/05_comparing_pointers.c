#include<stdio.h>

int main(){
    int arr[ ] = { 10, 20, 36, 72, 45, 36 } ; 
    int *j, *k ; 
    j = &arr [ 4 ] ; // It will directly store the address of 5th element
    k = ( arr + 4 ) ; // While simple arr shows the base address i.e. 0th element so base address + the 4 will be equivalent to arr[4] address hence if-condition will run
    if ( j == k ) 
        printf ( "The two pointers point to the same location" ) ; 
    else 
        printf ( "The two pointers do not point to the same location" ) ; 
    return 0;
}