#include<stdio.h>

int main(){
    // int i = 3 ; 
// This declaration tells the C compiler to: 
// (a) Reserve space in memory to hold the integer value. 
// (b) Associate the name i with this memory location. 
// (c) Store the value 3 at this location.

// This address can be collected in a variable, as:  
    // int *j = &i ; // Only use * if a variable contains address of other one

    int i = 3, *j, **k ; 
    j = &i ; 
    k = &j ; 
    printf ( "\nAddress of i = %u", &i ) ; // & is address operator while * (pointer) is called as value at address operator OR indirectional operator. r. It gives the value stored at a particular address

    printf ( "\nAddress of i = %u", j ) ; 
    printf ( "\nAddress of i = %u", *k ) ; 
    printf ( "\nAddress of j = %u", &j ) ; 
    printf ( "\nAddress of j = %u", k ) ; 
    printf ( "\nAddress of k = %u", &k ) ; 
    printf ( "\nValue of j = %u", j ) ; 
    printf ( "\nValue of k = %u", k ) ; // This shows what is stored in k which is address of j
    printf ( "\nValue of i = %d", i ) ; 
    printf ( "\nValue of i = %d", * ( &i ) ) ; 
// Note that printing the value of *( &i ) is same as printing the value of i. 

    printf ( "\nValue of i = %d", *j ) ; 
    printf ( "\nValue of i = %d", **k ) ; // **k points to value of i indirectly
    return 0;
    // If with * so means points to wha value and alone means what address is stored in it. 
}