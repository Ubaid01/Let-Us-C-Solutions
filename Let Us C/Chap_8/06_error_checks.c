#include<stdio.h>

int main(){
    int array[6] = { 1, 2, 3, 4, 5, 6 } ; 
    int i ; 
//     for ( i = 0 ; i <= 25 ; i++ ) // Since array max size is 6 so if printed ahead will only print garabage values
    for ( i = 0 ; i <= 5 ; i++ )
        printf ( "\n%d", array[i] ) ;   

    // int sub[50], i ; 
    // for ( i = 1 ; i <= 50 ; i++ ) { 
    //     sub[i] = i ; // sub[1] starting from sub[1] will be assigned and conitnue on till i = 50
    //     printf ( "\n%d" , sub[i] ) ; // prints from 1 to 50 as sub[50] is also assigned 50 even though it is out of range bound of int sub[50]
    // } 

    // int a[ ] = { 10, 20, 30, 40, 50 } ; 
    // // int j ; // Here pointer not declared
    // int *j ; 
    // j = a ; /* store the address of zeroth element */ 
    // j = j + 3 ; // So now j will point to value a[3] i.e. 40 
    // // printf ( "\n%d" *j ) ; // Comma separator not used
    // printf ( "\n%d" , *j ) ;  // Now 40 will be printed

    // float a[ ] = { 13.24, 1.5, 1.5, 5.4, 3.5 } ; 
    // float *j ; // Pointer should of same type whose address is being stored
    // j = a ; // points to a[0]
    // j = j + 4 ; // Now points to a[4] i.e. 3.5
    // // printf ( "\n%d %d %d", j, *j, a[4] ) ; // Wrong format specifiers used to print
    // printf ( "\n%d %.1f %.1f", j, *j, a[4] ) ; // prints address of a[4] and prints 13.5  13.5

    
    // float a[ ] = { 13.24, 1.5, 1.5, 5.4, 3.5 } ; 
    // float *j, *k ; 
    // j = a ; 
    // k = a + 4 ; 
    // // Can't perform multiply or divide on pointers only add and subtract
    // // j = j * 2 ; 
    // // k = k / 2 ; 
    // printf ( "\n%.2f %.2f", *j, *k ) ; // prints 13.24  3.50

     
    // int max = 5 ; 
    // float arr[max] ; 
    // // for ( i = 0 ; i < max ; i++ )  i not declared here
    // for (int  i = 0 ; i < max ; i++ ) {
    //     scanf ( "%f", &arr[i] ) ; // Will simply take inputs only
    return 0;
}