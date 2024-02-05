#include<stdio.h>

int main(){
//     int stud[4][2] ; 
//     int i, j ; 
//     for ( i = 0 ; i <= 3 ; i++ )  { 
//         printf ( "\n Enter roll no. and marks: " ) ; 
//         scanf ( "%d %d", &stud[i][0], &stud[i][1] ) ; 
//     } 
//     for ( i = 0 ; i <= 3 ; i++ ) 
//         printf ( "\n%d %3d", stud[i][0], stud[i][1] ) ;

// // In stud[i][0] and stud[i][1] the first subscript of the variable stud, is row number which changes for every student.

// Initializing 2D-array

    int stud[4][2] = { 
                        { 1234, 56 }, 
                        { 1212, 33 }, 
                        { 1434, 80 }, 
                        { 1312, 78 } } ; 
// or even this would work... 
    int stud_other[][2] = { 1234, 56, 1212, 33, 1434, 80, 1312, 78 } ;
    // printf("%d %d  %d", stud[3][0], stud_other[3][0] , sizeof(int) ) ;

// For 2d-array we for direct initializing we need to define either columns or both
/* whereas, 
    int arr[2][ ] = { 12, 34, 23, 45, 56, 45 } ; 
    int arr[ ][ ] = { 12, 34, 23, 45, 56, 45 } ; would never work. */

    int i ; 
    for ( i = 0 ; i <= 3 ; i++ ) 
    printf ( "\nAddress of %d th 1-D array = %u", i, stud[i] ) ;
// Since in C we can thought of above as '4' 1d-arrays each having 2 integers.
// Each one-dimensional array occupies 8 bytes (four bytes for each integer). These one-dimensional arrays are placed linearly (zeroth 1-D array followed by first 1-D array, etc.). Hence each one-dimensional arrays is 8 bytes further along than the last one,

    return 0;
}