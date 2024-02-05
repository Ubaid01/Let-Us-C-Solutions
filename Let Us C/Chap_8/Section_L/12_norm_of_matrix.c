#include<stdio.h>
#include<math.h>


double NormOfMatrix(int rows, int cols, int matrix[][cols] ) { // Declared double as in end square root is taken.
    double sum = 0.0; // Use double for more precision
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += pow( matrix[i][j] , 2 ) ; 
        }
    }
    double norm = sqrt( sum ) ;
    return norm ;
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

    for(int i = 0; i < column; i++) { 
        for(int j = 0; j < row; j++) {
            printf("| %d |", mat[i][j] ) ;
        }
        printf("\n") ;
    } 

    printf("Norm of given matric = %.3lf\n", NormOfMatrix( row, column, mat ) ) ;
    return 0;
}