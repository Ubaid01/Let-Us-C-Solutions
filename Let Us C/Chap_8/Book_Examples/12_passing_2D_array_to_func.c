#include<stdio.h>
#include<stdlib.h>

void display ( int *q, int row, int col ) { 
    int i, j ; 
    for ( i = 0 ; i < row ; i++ ) { 
        for ( j = 0 ; j < col ; j++ ) 
             printf ( "%d ", * ( q + i * col + j ) ) ; // i * col to add the numbers before which row is changed like if i = 2 and j = 3 so to access a[2][3] so *(a + 2 * 4 + 3) = *(a + 11) so a[2][3] will be 11th element of whole 2d-array
/* A more general formula for accessing each array element would be:
* ( base address + row no. * no. of columns + column no. ) */
            printf ( "\n" ) ; 
    } 
    printf ("\n" ) ; 
} 

void show ( int ( *q )[4], int row, int col ) { 
    int i, j ; // q holds the base address of the zeroth 1-D array
    int *p ; 
    for ( i = 0 ; i < row ; i++ ) { 
        p = q + i  ; // q + i fetches the address of the first 1-D array. If error is encountered so use *(q + i)
        for ( j = 0 ; j < col ; j++ ) 
        printf ( "%d ", * ( p + j ) ) ; 
        printf ( "\n" ) ; 
    } 
    printf ( "\n" ) ; 
} 

void print ( int q[ ][4], int row, int col ) { 
    int i, j ; 
    for ( i = 0 ; i < row ; i++ ) { 
        for ( j = 0 ; j < col ; j++ ) 
            printf ( "%d ", q[i][j] ) ; 
            printf ( "\n" ) ; 
    } 
    printf ( "\n" ) ; 
} 

/*In the third function print( ), the declaration of q looks like this: 
    int q[ ][4] ; 
This is same as int ( *q )[4], where q is pointer to an array of 4 
integers. The only advantage is that we can now use the more 
familiar expression q[i][j] to access array elements. We could have 
used the same expression in show( ) as well.                         */
int main(){
    /* Three ways of accessing a 2-D array */ 

 int a[3][4] = { 
                1, 2, 3, 4, 
                5, 6, 7, 8, 
                9, 0, 1, 6  } ; 
    display ( &a[0][0], 3, 4 ) ; 
    show ( a, 3, 4 ) ; 
    print ( a, 3, 4 ) ; 
    return 0;
}