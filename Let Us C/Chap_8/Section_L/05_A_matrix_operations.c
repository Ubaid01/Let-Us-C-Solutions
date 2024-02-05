#include <stdio.h>

// Function to add two matrices
void addMatrices(int rows, int cols, int result[][cols], int mat1[][cols], int mat2[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int cols2, int mat1[][cols1], int mat2[][cols2], int result[][cols2] ) {
    for (int i = 0; i < rows1; i++) { // For rows of newly formed array ROW 1 same as mat1
        for (int j = 0; j < cols2; j++) { // For Col 2 same as mat2
            result[i][j] = 0; // Initially set sum to 0
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to sort a matrix
void sortMatrix(int rows, int cols, int mat[][cols] ) {
    int temp[rows * cols];
    int k = 0;

    // Copying matrix elements to a 1D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[k++] = mat[i][j];
        }
    }

    // Sorting the 1D array
    for (int i = 0; i < rows * cols - 1; i++) {
        for (int j = 0; j <  rows * cols  - i - 1; j++) {
            if ( temp[j] > temp[j + 1] ) {
                int swap  = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap ;
            }
        }
    }

    // Copying the sorted elements back to the matrix & printing matrix
    k = 0;
    printf("Sorted-Array : \n") ;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = temp[k++];
            printf("| %d |", mat[i][j] ) ;
        }
        printf("\n") ;
    }
}

int main() {
    int matrix1[6][6] = {   {1, 2, 3, 4, 5 , 6 }, 
                            {7, 8 , 9, 10 , 11, 12 },
                            {13, 14, 15 , 16, 17, 18 } ,
                            {19, 20, 21, 22, 23, 24 },
                            {25, 26, 27, 28, 29, 30 } ,
                            {31, 32, 33, 34, 35, 36 } } ;

    int matrix2[6][6] = {   {36, 35, 34, 33, 32, 31 } ,
                            {30, 29, 28, 27, 26, 25 } ,
                            {24, 23, 22, 21, 20, 19 }, 
                            {18, 17, 16, 15, 14, 13 },
                            {12, 11, 10, 9, 8, 7 } ,
                            {6, 5, 4, 3, 2, 1 }     } ; 

    int matrix3[3][3] = {   { 1, 4, 9 } ,
                            { 2, 5, 10 } ,
                            { 3, 6, 11 } } ;

    int matrix4[3][3] = {   { 5, 6, 7 } ,
                            { 3, 4, 5 } ,
                            { 1, 2, 3 } } ;

    int matrix5[4][4] = {
                            {5, 8, 3, 2},
                            {9, 1, 4, 7},
                            {6, 0, 12, 10},
                            {11, 14, 13, 15}  };
 
    int resultAddition[6][6], resultMultiplication[3][3] ; 


    // Performing addition of matrices
    addMatrices(6, 6, resultAddition, matrix1, matrix2);
    printf("Addition of matrices:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("| %d |", resultAddition[i][j]);
        }
        printf("\n");
    }


    multiplyMatrices(3, 3, 3, matrix3, matrix4, resultMultiplication); // Runs well if array pre-initialized
    printf("\nMultiplication of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %d |", resultMultiplication[i][j]);
        }
        printf("\n");
    }

    // Sorting matrix5
    sortMatrix(4, 4, matrix5);

    return 0;
}
