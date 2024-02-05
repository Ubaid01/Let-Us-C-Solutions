#include<stdio.h>
#include<stdlib.h>

int main(){
    // int num[5][5] = {   { 0, 1, 2, 3, 4 } ,
    //                     { 3, 5, 7, 9, 11 } ,
    //                     { 22, 11, 24, 31, 4 } ,
    //                     { 10, 12, 22, 13, 5 } ,
    //                     { 50, 11, 12, 93, 74 }  
    //                 } ;   //  For Example 

    int row, column ;
    printf("Enter no.of Rows & Columns in matrix :  ") ;
    scanf("%d %d", &row, &column ) ;

    int num[row][column] ;
    printf("Enter matrix numbers: \n") ;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++ ) {
            printf("Enter Element[%d][%d] : ", i + 1, j + 1 ) ;
            scanf("%d", &num[i][j] ) ;
        }
    } 
    system("cls") ; // Clear screen after taking inputs.

    char ch ;
    printf("Do you want to search max_num by column(c) OR by row(r)? ") ;
    scanf(" %c", &ch ) ;

    int n , max ;
    if( ch == 'c' || ch == 'C' ) {
        printf("Enter the column number: ") ;
        scanf("%d", &n ) ;

        if( n <= column && n > 0) {
            max = num[0][n - 1] ; // Initialize max with 1st element of that Column
            for( int i = 1; i < column; i++ ) {
                if( num[ i ][ n - 1 ] > max )
                    max = num[i][n - 1] ;
            }

            printf("In Column %d , Highest number is %d .", n , max ) ;
        }
        else {
            printf("Entered Column is not present .\n") ;
        }
    }
    else if ( ch == 'r' || ch == 'R' ) {
        printf("Enter the row number: ") ;
        scanf("%d", &n ) ;

        if( n <= row && n > 0 ) {
            max = num[ n - 1 ][0] ; // Initialize max with 1st element of that Row
            for( int i = 1; i < row; i++ ) {
                if( num[ n - 1 ][ i ] > max )
                    max = num[n - 1][i] ;
            }

            printf("In Row %d , Highest number is %d .", n , max ) ;
        }
        else {
            printf("Entered Row is not present .\n") ;
        }
    }
    else {
        printf("Invalid Input.\n\tTry Again!") ;
    }

    return 0;
}