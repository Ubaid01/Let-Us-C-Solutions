#include<stdio.h>

int main(){
    // int matrix[4][4] = {   { 5, 3, 2, 9 } ,
    //                         { 1, 5, 4, 8 } ,
    //                         { 2, 1, 24, 31 } ,
    //                         { 10, 0, 2, 13 } ,
    //                 } ; // Example

    int n;
    printf("Enter rows/columns for matrix: ");
    scanf("%d", &n);

    int matrix[n][n] ;
    // Original Matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter Element |%d||%d|: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j] );
        }
    }

    int transpose[n][n] ; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            transpose[i][j] = matrix[j][i] ; // Sway row to column and column to row
            // printf("| %d |", transpose[i][j] ) ;  For checking
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("| %d |", transpose[i][j] );
        }
        printf("\n");
    }

    return 0;
}