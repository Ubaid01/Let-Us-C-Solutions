// By Geeks For Geeks

#include <stdio.h>

// Dimension of input square matrix
#define N 4

// Function to get cofactor of mat[p][q] in temp[][]. n is current dimension of mat[][]
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

// Function for displaying the matrix 
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

// Driver code
int main()
{
	int mat[N][N] = {{1, 0, 2, -1},
					{3, 0, 0, 5},
					{2, 1, 4, -3},
					{1, 0, 5, 0}};
	
	display( mat, 4, 4 ) ;

	// Function call
	printf("Determinant of the matrix is : %d",
			determinantOfMatrix(mat, N));
	return 0;
}


// // For Inverse of a matrix

// #include<stdio.h>
// #include<math.h>

// float determinant(float [][25], float);
// void cofactor(float [][25], float);
// void transpose(float [][25], float [][25], float);
// int main() {
//     float a[25][25], k, d;
//     int i, j;
//     printf("Enter the order of the Matrix : ");
//     scanf("%f", &k);
//     printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);
//     for (i = 0;i < k; i++)
//       {
//       for (j = 0;j < k; j++)
//         {
//           scanf("%f", &a[i][j]);
//           }
//       }
//     d = determinant(a, k);
//     if (d == 0)
//     printf("\nInverse of Entered Matrix is not possible\n");
//     else
//     cofactor(a, k);

//     return 0 ;
// }
 
// /*For calculating Determinant of the Matrix */
// float determinant(float a[25][25], float k)
// {
//   float s = 1, det = 0, b[25][25];
//   int i, j, m, n, c;
//   if (k == 1)
//     {
//      return (a[0][0]);
//     }
//   else
//     {
//      det = 0;
//      for (c = 0; c < k; c++)
//        {
//         m = 0;
//         n = 0;
//         for (i = 0;i < k; i++)
//           {
//             for (j = 0 ;j < k; j++)
//               {
//                 b[i][j] = 0;
//                 if (i != 0 && j != c)
//                  {
//                    b[m][n] = a[i][j];
//                    if (n < (k - 2))
//                     n++;
//                    else
//                     {
//                      n = 0;
//                      m++;
//                      }
//                    }
//                }
//              }
//           det = det + s * (a[0][c] * determinant(b, k - 1));
//           s = -1 * s;
//           }
//     }
 
//     return (det);
// }
 
// void cofactor(float num[25][25], float f)
// {
//  float b[25][25], fac[25][25];
//  int p, q, m, n, i, j;
//  for (q = 0;q < f; q++)
//  {
//    for (p = 0;p < f; p++)
//     {
//      m = 0;
//      n = 0;
//      for (i = 0;i < f; i++)
//      {
//        for (j = 0;j < f; j++)
//         {
//           if (i != q && j != p)
//           {
//             b[m][n] = num[i][j];
//             if (n < (f - 2))
//              n++;
//             else
//              {
//                n = 0;
//                m++;
//                }
//             }
//         }
//       }
//       fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
//     }
//   }
//   transpose(num, fac, f);
// }
// /*Finding transpose of matrix*/ 
// void transpose(float num[25][25], float fac[25][25], float r)
// {
//   int i, j;
//   float b[25][25], inverse[25][25], d;
 
//   for (i = 0;i < r; i++)
//     {
//      for (j = 0;j < r; j++)
//        {
//          b[i][j] = fac[j][i];
//         }
//     }
//   d = determinant(num, r);
//   for (i = 0;i < r; i++)
//     {
//      for (j = 0;j < r; j++)
//        {
//         inverse[i][j] = b[i][j] / d;
//         }
//     }
//    printf("\n\n\nThe inverse of matrix is : \n");
 
//    for (i = 0;i < r; i++)
//     {
//      for (j = 0;j < r; j++)
//        {
//          printf("\t%f", inverse[i][j]);
//         }
//     printf("\n");
//      }
// }