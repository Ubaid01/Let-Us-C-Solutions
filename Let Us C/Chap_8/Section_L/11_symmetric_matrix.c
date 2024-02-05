#include<stdio.h>

// Symmetric Matrix:- Transpose of Matrix = Original Matrix 

void transposeMat(int rows, int cols , int matrix[][cols], int tranpose[][cols] ) { 
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            tranpose[i][j] = matrix[j][i] ; // Reverse rows and columns
        }
    }
}

int main(){
    int row, column ;
    printf("Enter no.of Rows & Columns in matrix : ") ;
    scanf("%d %d", &row, &column ) ;

    int mat[row][column] ;
    printf("Enter matrix numbers: \n") ;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++ ) {
            printf("Enter Element[%d][%d] : ", i + 1, j + 1 ) ;
            scanf("%d", &mat[i][j] ) ;
        }
    } 
   
    int temp[row][column] , check = 1 ; // Of same size tranpose matrix used to comapare
    transposeMat( row, column, mat, temp ) ;
    for(int i = 0; i < column; i++) { // Interchange in loop to show the transpose perfectly as 3x1 matrix transpose is 1x3 order.
        for(int j = 0; j < row; j++) {
            printf("| %d |", temp[i][j] ) ;
        }
        printf("\n") ;
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++ ) {
            if( temp[i][j] != mat[i][j] ) {
                check = 0 ;
                break ;
            }
        }
    } 

    if( check ) // If check returns TRUE
        printf("Given matrix is SYMMETRIC.\n") ;
    else
        printf("Given matrix is NOT symmetric.\n") ;

    return 0;
}