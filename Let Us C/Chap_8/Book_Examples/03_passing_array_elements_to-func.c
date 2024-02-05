// #include<stdio.h>

// /* Demonstration of call by value */ 
// void display ( int m ) { // passed simple int as giving each element index value one by one
//     printf ( "%d ", m ) ; 
//     m = m + 1 ; // Only difference is that by using pointer value will also be changed in main function
// }

// int main(){

//     int i ; 
//     int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
//     for ( i = 0 ; i <= 6 ; i++ ) 
//         display ( marks[i] ) ; 

//     printf("\nNew value of marks[0] = %d ", marks[0] ) ;
//     return 0;
// }

#include<stdio.h>

/* Demonstration of call by reference */ 
void disp ( int *n ) {  // d since n contains the address of array element, to print out the array element we are using the 'value at address' operator (*)
    printf ( "%d ", *n ) ; 
    *n += 1 ;
}

int main(){
 int i ; 
    int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
    for ( i = 0 ; i <= 6 ; i++ ) 
        disp ( &marks[i] ) ; 

    printf("\nNew value of marks[0] = %d", marks[0] ) ;
    
    return 0;
}