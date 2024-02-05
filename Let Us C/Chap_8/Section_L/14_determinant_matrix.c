#include<stdio.h>
#define N 7

void getCofactor(int mat[N][N], int temp[N][N], 
				int p, int q, int n)
{
	int i = 0, j = 0;

	// Looping for each element of the matrix
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++) 
		{
			// Copying into temporary matrix 
			// only those element which are 
			// not in given row and column
			if (row != p && col != q) // 
			{
				temp[i][j++] = mat[row][col];

				// Row is filled, so increase row 
				// index and reset col index
				if (j == n - 1) 
				{
					j = 0;
					i++;
				}
			}
		}
	}
}

/* Recursive function for finding the 
determinant of matrix. n is current dimension of mat[][]. */
int determinantOfMatrix(int mat[N][N], int n)
{
	// Initialize result
	int det = 0; 

	// Base case : if matrix contains 
	// single element
	if (n == 1)
		return mat[0][0];

	// To store cofactors
	int temp[N][N]; 

	// To store sign multiplier
	int sign = 1; 

	// Iterate for each element of 
	// first row
	for (int f = 0; f < n; f++) 
	{
		// Getting Cofactor of mat[0][f]
		getCofactor(mat, temp, 0, f, n);
		det += sign * mat[0][f]
			* determinantOfMatrix(temp, n - 1);

		// Terms are to be added with alternate sign
		sign = -sign;
	}

	return det;
}


void display(int mat[N][N], 
			int row, int col)
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++)
			printf("| %d |", mat[i][j]);
	
		printf("\n");
	}
}

int main(){
    // Initialize a 7x7 2D integer array
    int arr[7][7] = {
        { 1,  2,  3,  4,  5,  6,  7 },
        { 8,  9, 10, 11, 12, 13, 14 },
        { 15, 16, 17, 18, 19, 20, 21 },
        { 22, 23, 24, 25, 26, 27, 28 },
        { 29, 30, 31, 32, 33, 34, 35 },
        { 36, 37, 38, 39, 40, 41, 42 },
        { 43, 44, 45, 46, 47, 48, 49 }
    }               ;  

    int det = determinantOfMatrix( arr, 7 ) ;
    printf("Determinant of matrix = %d\n", det ) ;



    return 0;
}

// For matrix of any Size

// #include <stdio.h>
// #include <stdlib.h>

// // Function to calculate the determinant of a square matrix
// double determinant(double **mat, int size);

// // Function to dynamically allocate memory for the matrix
// double** allocateMatrix(int size) {
//     double** mat = (double**)malloc(size * sizeof(double*));
//     for (int i = 0; i < size; ++i) {
//         mat[i] = (double*)malloc(size * sizeof(double));
//     }
//     return mat;
// }

// // Function to free dynamically allocated memory for the matrix
// void freeMatrix(double** mat, int size) {
//     for (int i = 0; i < size; ++i) {
//         free(mat[i]);
//     }
//     free(mat);
// }

// // Function to calculate the determinant of a square matrix using cofactor expansion
// double determinant(double **mat, int size) {
//     double det = 0.0;
//     if (size == 1) {
//         return mat[0][0];
//     } else {
//         double** submatrix = allocateMatrix(size - 1);
//         int sign = 1;

//         for (int i = 0; i < size; ++i) {
//             int sub_i = 0, sub_j = 0;

//             // Creating submatrix for the cofactor
//             for (int row = 1; row < size; ++row) {
//                 for (int col = 0; col < size; ++col) {
//                     if (col != i) {
//                         submatrix[sub_i][sub_j++] = mat[row][col];

//                         if (sub_j == size - 1) {
//                             sub_i++;
//                             sub_j = 0;
//                         }
//                     }
//                 }
//             }

//             det += sign * mat[0][i] * determinant(submatrix, size - 1);
//             sign = -sign;
//         }

//         freeMatrix(submatrix, size - 1);
//     }
//     return det;
// }

// int main() {
//     int size;

//     printf("Enter size of square matrix: ");
//     scanf("%d", &size);

//     // Allocate memory for the matrix
//     double** matrix = allocateMatrix(size);

//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             printf("Enter element [%d][%d]: ", i + 1, j + 1);
//             scanf("%lf", &matrix[i][j]);
//         }
//     }

//     // Calculate and print the determinant of the matrix
//     double det = determinant(matrix, size);
//     printf("Determinant of the matrix: %.2lf\n", det);

//     // Free allocated memory for the matrix
//     freeMatrix(matrix, size);

//     return 0;
// }
